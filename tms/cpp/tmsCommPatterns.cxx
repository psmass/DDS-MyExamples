#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <signal.h>
#include <iostream>

#include "ndds/ndds_cpp.h"
#include <pthread.h>

#include "tmsCommPatterns.h"


ReaderThreadInfo::ReaderThreadInfo(enum TOPICS_E topicEnum, bool echoResponse) 
        {
            myTopicEnum = topicEnum;
            echo_response = echoResponse; // default not to echo a response (rcv'd type not a request) 
        }

std::string ReaderThreadInfo::me(){ return topic_name_array[myTopicEnum]; }
enum TOPICS_E ReaderThreadInfo::topic_enum() { return myTopicEnum; };

void*  pthreadToProcReaderEvents(void *reader_thread_info) {
    ReaderThreadInfo * myReaderThreadInfo;
    myReaderThreadInfo = (ReaderThreadInfo *)reader_thread_info;
	DDSStatusCondition *status_condition =  NULL;
	DDSReadCondition * read_condition = NULL;
	DDSWaitSet *waitset = new DDSWaitSet();
    DDS_ReturnCode_t retcode;
    DDSConditionSeq active_conditions_seq;
	DDS_DynamicDataSeq data_seq;
	DDS_SampleInfoSeq info_seq;

    std::cout << "\nCreated Reader Pthread: " << myReaderThreadInfo->me() << " Topic" << std::endl;

    // Create read condition
    read_condition = myReaderThreadInfo->reader->create_readcondition(
        DDS_NOT_READ_SAMPLE_STATE,
        DDS_ANY_VIEW_STATE,
        DDS_ANY_INSTANCE_STATE);
    if (read_condition == NULL) {
        printf("Reader thread: create_readcondition error\n");
		goto end_reader_thread;
    }

    //  Get status conditions
    status_condition = myReaderThreadInfo->reader->get_statuscondition();
    if (status_condition == NULL) {
        printf("Reader thread: get_statuscondition error\n");
 		goto end_reader_thread;
    }

    // Set enabled statuses
    retcode = status_condition->set_enabled_statuses(DDS_SUBSCRIPTION_MATCHED_STATUS);
    if (retcode != DDS_RETCODE_OK) {
        printf("Reader thread: set_enabled_statuses error\n");
 		goto end_reader_thread;
    }   

    /* Attach Read Conditions */
    retcode = waitset->attach_condition(read_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("Reader thread: attach_condition error\n");
		goto end_reader_thread;
    }

    /* Attach Status Conditions */
    retcode = waitset->attach_condition(status_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("Reader thread: attach_condition error\n");
		goto end_reader_thread;
    }

	while (run_flag) {
       	retcode = waitset->wait(active_conditions_seq, DDS_DURATION_INFINITE);
        if (retcode == DDS_RETCODE_TIMEOUT) {
            printf("Reader thread: Wait timed out!! No conditions were triggered.\n");
            continue;
        } else if (retcode != DDS_RETCODE_OK) {
            printf("Reader thread:  wait returned error: %d\n", retcode);
            goto end_reader_thread;
        }

        int active_conditions = active_conditions_seq.length();

        for (int i = 0; i < active_conditions; ++i) {
            if (active_conditions_seq[i] == status_condition) {
                /* Get the status changes so we can check which status
                 * condition triggered. */
                DDS_StatusMask triggeredmask =
                        myReaderThreadInfo->reader->get_status_changes();

                /* Subscription matched */
                if (triggeredmask & DDS_SUBSCRIPTION_MATCHED_STATUS) {
                    DDS_SubscriptionMatchedStatus st;
                    myReaderThreadInfo->reader->get_subscription_matched_status(st);
                    std::cout << myReaderThreadInfo->me() << "Reader Pubs: " 
                    << st.current_count << "  " << st.current_count_change << std::endl;
                }
            } else if (active_conditions_seq[i] == read_condition) { 
                // Get the latest samples
				retcode = myReaderThreadInfo->reader->take(
							data_seq, info_seq, DDS_LENGTH_UNLIMITED,
							DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);
				if (retcode == DDS_RETCODE_OK) {
					for (int i = 0; i < data_seq.length(); ++i) {
						if (info_seq[i].valid_data) {                  
							//retcode=data_seq[i].get_ulong(myTopicInfo.field1, 
									//"Field1Name", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED);
							if (retcode != DDS_RETCODE_OK) goto end_reader_thread;
							//retcode=data_seq[i].get_ulong(myTopicInfo.field2,
									//"Field2Name", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED);
							if (retcode != DDS_RETCODE_OK) goto end_reader_thread;
							//std::cout << myWaitsetInfo->me() << " Field1" 
                            //<< myTopicInfo.field1  
                            //<< " Field2 " << myTopicInfo.field2
                            //<< std::endl;
						}
					}
				} else if (retcode == DDS_RETCODE_NO_DATA) {
					continue;
				} else {
					fprintf(stderr, "Reader thread: read data error %d\n", retcode);
					goto end_reader_thread;
				}
                retcode = myReaderThreadInfo->reader->return_loan(data_seq, info_seq);
                if (retcode != DDS_RETCODE_OK) {
                    fprintf(stderr, "Reader thread:return_loan error %d\n", retcode);
                    goto end_reader_thread;
                }  
			}
		}
	} // While (run_flag)
	end_reader_thread: // reached by ^C or an error
	std::cout << myReaderThreadInfo->me() << " Reader: Pthread Exiting" << std::endl;
	exit(0);
}

// WriterEventsThreadInfo member functions
WriterEventsThreadInfo::WriterEventsThreadInfo(enum TOPICS_E topicEnum) 
        {
            myTopicEnum = topicEnum;
        }

std::string WriterEventsThreadInfo::me(){ return topic_name_array[myTopicEnum]; }
enum TOPICS_E WriterEventsThreadInfo::topic_enum() {return myTopicEnum; };


void*  pthreadToProcWriterEvents(void  * writerEventsThreadInfo) {
	WriterEventsThreadInfo * myWriterEventsThreadInfo;
    myWriterEventsThreadInfo = (WriterEventsThreadInfo *)writerEventsThreadInfo;
	DDSWaitSet * waitset = waitset = new DDSWaitSet();;
    DDS_ReturnCode_t retcode;
    DDSConditionSeq active_conditions_seq;

    std::cout << "\nCreated Writer Pthread: " << myWriterEventsThreadInfo->me() << " Topic" << std::endl;

    // Configure Waitset for Writer Status ****
    DDSStatusCondition *status_condition = myWriterEventsThreadInfo->writer->get_statuscondition();
    if (status_condition == NULL) {
        printf("Writer thread: get_statuscondition error\n");
        goto end_writer_thread;
    }

    // Set enabled statuses
    retcode = status_condition->set_enabled_statuses(
            DDS_PUBLICATION_MATCHED_STATUS);
    if (retcode != DDS_RETCODE_OK) {
        printf("Writer thread: set_enabled_statuses error\n");
        goto end_writer_thread;
    }

    // Attach Status Conditions to the above waitset
    retcode = waitset->attach_condition(status_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("Writer thread: attach_condition error\n");
        goto end_writer_thread;
    }

    // wait() blocks execution of the thread until one or more attached condition triggers  
	// thread exits upon ^c or error
    while (run_flag) { 
        retcode = waitset->wait(active_conditions_seq, DDS_DURATION_INFINITE);
        /* We get to timeout if no conditions were triggered */
        if (retcode == DDS_RETCODE_TIMEOUT) {
            printf("Writer thread: Wait timed out!! No conditions were triggered.\n");
            continue;
        } else if (retcode != DDS_RETCODE_OK) {
            printf("Writer thread: wait returned error: %d\n", retcode);
            goto end_writer_thread;
        }

        /* Get the number of active conditions */
        int active_conditions = active_conditions_seq.length();

        for (int i = 0; i < active_conditions; ++i) {
            /* Compare with Status Conditions */
            if (active_conditions_seq[i] == status_condition) {
                DDS_StatusMask triggeredmask =
                        myWriterEventsThreadInfo->writer->get_status_changes();

                if (triggeredmask & DDS_PUBLICATION_MATCHED_STATUS) {
					DDS_PublicationMatchedStatus st;
                	myWriterEventsThreadInfo->writer->get_publication_matched_status(st);
					std::cout << myWriterEventsThreadInfo->me() << " Writer Subs: " 
                    << st.current_count << "  " << st.current_count_change << std::endl;
                }
            } else {
                // writers can only have status condition
                std::cout << myWriterEventsThreadInfo->me() << " Writer: False Writer Event Trigger" << std::endl;
            }
        }
	} // While (run_flag)
	end_writer_thread: // reached by ^C or an error
	std::cout << myWriterEventsThreadInfo->me() << " Writer: Pthread Exiting"<< std::endl;
	exit(0);
}

// PeriodicPublishThreadInfo member functions
PeriodicPublishThreadInfo::PeriodicPublishThreadInfo (enum TOPICS_E topicEnum, DDS_Duration_t ratePeriod) 
        {
            enabled = false; //initialize disabled
            myRatePeriod = ratePeriod;
            myTopicEnum = topicEnum;
        }

DDS_Duration_t PeriodicPublishThreadInfo::pubRatePeriod() { return myRatePeriod; };
enum TOPICS_E PeriodicPublishThreadInfo::topic_enum() {return myTopicEnum; };

std::string PeriodicPublishThreadInfo::me(){ return topic_name_array[myTopicEnum]; }

void*  pthreadPeriodicWriter(void  * periodic_writer_thread_info) {
	PeriodicPublishThreadInfo * myPeriodicPublishThreadInfo;
    myPeriodicPublishThreadInfo = (PeriodicPublishThreadInfo *) periodic_writer_thread_info;
	DDSWaitSet * waitset = waitset = new DDSWaitSet();;
    DDS_ReturnCode_t retcode;
    DDSConditionSeq active_conditions_seq;
    long int seq_count = 0;

    std::cout << "\nCreated Periodic Publisher Pthread: " << myPeriodicPublishThreadInfo->me() << " Topic" << std::endl;

    // Configure Waitset for Writer Status ****
    DDSStatusCondition *status_condition = myPeriodicPublishThreadInfo->writer->get_statuscondition();
    if (status_condition == NULL) {
        printf("Writer thread: get_statuscondition error\n");
        goto end_writer_thread;
    }

    // Set enabled statuses
    retcode = status_condition->set_enabled_statuses(
            DDS_PUBLICATION_MATCHED_STATUS);
    if (retcode != DDS_RETCODE_OK) {
        printf("Writer thread: set_enabled_statuses error\n");
        goto end_writer_thread;
    }

    // Attach Status Conditions to the above waitset
    retcode = waitset->attach_condition(status_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("Writer thread: attach_condition error\n");
        goto end_writer_thread;
    }

    // wait() blocks execution of the thread until one or more attached condition triggers  
	// thread exits upon ^c or error
    while (run_flag) { 
        retcode = waitset->wait(active_conditions_seq, myPeriodicPublishThreadInfo->pubRatePeriod());
        /* We get to timeout if no conditions were triggered */
        if (retcode == DDS_RETCODE_TIMEOUT) {
            if (myPeriodicPublishThreadInfo->enabled) {
                switch (myPeriodicPublishThreadInfo->topic_enum()) {
                    case  tms_TOPIC_HEARTBEAT_ENUM: 
                        std::cout << "Periodic Writer - Heartbeat " << seq_count << std::endl;
                        retcode = myPeriodicPublishThreadInfo->periodicData->set_ulong("sequenceNumber", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, seq_count);
                        if (retcode != DDS_RETCODE_OK) {
                            std::cerr << "heartbeat: Dynamic Data Set Error" << std::endl << std::flush;
                            break;
                        }
                        myPeriodicPublishThreadInfo->writer->write(* myPeriodicPublishThreadInfo->periodicData, DDS_HANDLE_NIL);
                        seq_count++; // increment seq_count here so 1) it starts at 0 as prescribed by TMS, 2) changes once per write of heartbeat
                        break;
                    default: 
                        std::cout << "Periodic Writer - default topic fall through" << std::endl;
                        break;
                }
            }
            continue; // no need to process active conditions if timeout
        } else if (retcode != DDS_RETCODE_OK) {
            printf("Writer thread: wait returned error: %d\n", retcode);
            goto end_writer_thread;
        }

        /* Get the number of active conditions */
        int active_conditions = active_conditions_seq.length();

        for (int i = 0; i < active_conditions; ++i) {
            /* Compare with Status Conditions */
            if (active_conditions_seq[i] == status_condition) {
                DDS_StatusMask triggeredmask =
                        myPeriodicPublishThreadInfo->writer->get_status_changes();

                if (triggeredmask & DDS_PUBLICATION_MATCHED_STATUS) {
					DDS_PublicationMatchedStatus st;
                	myPeriodicPublishThreadInfo->writer->get_publication_matched_status(st);
					std::cout << myPeriodicPublishThreadInfo->me() << " Writer Subs: " 
                    << st.current_count << "  " << st.current_count_change << std::endl;
                }
            } else {
                // writers can only have status condition
                std::cout << myPeriodicPublishThreadInfo->me() << " Writer: False Writer Event Trigger" << std::endl;
            }
        }
	} // While (run_flag)
	end_writer_thread: // reached by ^C or an error
	std::cout << myPeriodicPublishThreadInfo->me() << " Writer: Pthread Exiting"<< std::endl;
	exit(0);
}

// On Change State PublishThreadInfo member functions
OnChangeWriterThreadInfo::OnChangeWriterThreadInfo (enum TOPICS_E topicEnum, DDSGuardCondition * guard_condition) 
        {

            myTopicEnum = topicEnum;
            myGuardCondition=guard_condition;
        }

enum TOPICS_E OnChangeWriterThreadInfo::topic_enum() {return myTopicEnum; };
DDSGuardCondition* OnChangeWriterThreadInfo::my_guard_condition() { return myGuardCondition; };

std::string OnChangeWriterThreadInfo::me(){ return topic_name_array[myTopicEnum]; }

void*  pthreadOnChangeWriter(void  * on_change_writer_thread_info) {
	OnChangeWriterThreadInfo * myOnChangeWriterThreadInfo;
    myOnChangeWriterThreadInfo = (OnChangeWriterThreadInfo *) on_change_writer_thread_info;
	DDSWaitSet * waitset = waitset = new DDSWaitSet();;
    DDS_ReturnCode_t retcode;
    DDSConditionSeq active_conditions_seq;

    std::cout << "\nCreated On Change State Writer Pthread: " << myOnChangeWriterThreadInfo->me() << " Topic" << std::endl;

    // Configure Waitset for Writer Status ****
    DDSStatusCondition *status_condition = myOnChangeWriterThreadInfo->writer->get_statuscondition();
    if (status_condition == NULL) {
        printf("On Change writer thread: get_statuscondition error\n");
        goto end_on_change_thread;
    }

    // Set enabled statuses
    retcode = status_condition->set_enabled_statuses(
            DDS_PUBLICATION_MATCHED_STATUS);
    if (retcode != DDS_RETCODE_OK) {
        printf("On Change writer thread: set_enabled_statuses error\n");
        goto end_on_change_thread;
    }
      // Attach Status Conditions to the above waitset
    retcode = waitset->attach_condition(status_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("On Change writer thread: attach_condition error\n");
        goto end_on_change_thread;
    }

    // Attach Status Conditions to the above waitset
    retcode = waitset->attach_condition(myOnChangeWriterThreadInfo->my_guard_condition());
    if (retcode != DDS_RETCODE_OK) {
        printf("On Change writer thread: attach_guard_condition error\n");
        goto end_on_change_thread;
    }

    // wait() blocks execution of the thread until one or more attached condition triggers  
	// thread exits upon ^c or error
    while (run_flag) { 
        retcode = waitset->wait(active_conditions_seq, DDS_DURATION_INFINITE);
        /* We get to timeout if no conditions were triggered */
        if (retcode == DDS_RETCODE_TIMEOUT) {
            
            continue; // no need to process active conditions if timeout
        } else if (retcode != DDS_RETCODE_OK) {
            printf("On Change writer thread: wait returned error: %d\n", retcode);
            goto end_on_change_thread;
        }

        /* Get the number of active conditions */
        int active_conditions = active_conditions_seq.length();

        for (int i = 0; i < active_conditions; ++i) {
            /* Compare with Status Conditions */
            if (active_conditions_seq[i] == status_condition) {
                DDS_StatusMask triggeredmask =
                        myOnChangeWriterThreadInfo->writer->get_status_changes();

                if (triggeredmask & DDS_PUBLICATION_MATCHED_STATUS) {
					DDS_PublicationMatchedStatus st;
                	myOnChangeWriterThreadInfo->writer->get_publication_matched_status(st);
					std::cout << myOnChangeWriterThreadInfo->me() << " Writer Subs: " 
                    << st.current_count << "  " << st.current_count_change << std::endl;
                }
            } else if (active_conditions_seq[i] == myOnChangeWriterThreadInfo->my_guard_condition()) {
                if (myOnChangeWriterThreadInfo->enabled) {
                    switch (myOnChangeWriterThreadInfo->topic_enum()) {
                    
                        case  tms_TOPIC_HEARTBEAT_ENUM: 
                            // get sequence number for display
                            DDS_UnsignedLong mySeqNum; // sequence is set/incremented in main loop where the condit trigger is set
                            retcode = myOnChangeWriterThreadInfo->changeStateData-> \
                                get_ulong(mySeqNum, "sequenceNumber", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED);
                            if (retcode != DDS_RETCODE_OK) {
                                printf("On Change writer thread: get_data error\n");
                                goto end_on_change_thread;
                            }
                            std::cout << "On Change writer thread - Heartbeat " <<  mySeqNum << std::endl;

                            myOnChangeWriterThreadInfo->writer->write(* myOnChangeWriterThreadInfo->changeStateData, DDS_HANDLE_NIL);
                            // Need to set this false after processing - else it just retriggers immediately
                            retcode = myOnChangeWriterThreadInfo->my_guard_condition()->set_trigger_value(DDS_BOOLEAN_FALSE);
                            if (retcode != DDS_RETCODE_OK) {
                                printf("On Change writer thread: set_enabled_guard error\n");
                                goto end_on_change_thread;
                            }
                            break;
                                
                        default: 
                            std::cout << "On Change writer thread - default topic fall through" << std::endl;
                            break;
                    }
                }
            } else {
                // writers can only have status condition
                std::cout << myOnChangeWriterThreadInfo->me() << " Writer: False Writer Event Trigger" << std::endl;
            }
        }
	} // While (run_flag)
	end_on_change_thread: // reached by ^C or an error
	std::cout << myOnChangeWriterThreadInfo->me() << "On Change writer thread: Pthread Exiting"<< std::endl;
	exit(0);
}

