#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <signal.h>
#include <iostream>

#include "ndds/ndds_cpp.h"
#include <pthread.h>

#include "tmsCommPatterns.h"



WaitsetWriterInfo::WaitsetWriterInfo(std::string writerName) 
        {
            myName = writerName;
        }

std::string WaitsetWriterInfo::me(){ return myName; }


void*  pthreadToProcWriterEvents(void  * waitsetWriterInfo) {
	WaitsetWriterInfo * myWaitsetInfo;
    myWaitsetInfo = (WaitsetWriterInfo *)waitsetWriterInfo;
	DDSWaitSet * waitset = waitset = new DDSWaitSet();;
    DDS_ReturnCode_t retcode;
    DDSConditionSeq active_conditions_seq;

    std::cout << "\nCreated Writer Pthread: " << myWaitsetInfo->me() << " Topic" << std::endl;

    // Configure Waitset for Writer Status ****
    DDSStatusCondition *status_condition = myWaitsetInfo->writer->get_statuscondition();
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
    while ((* myWaitsetInfo->run_flag) == true) { 
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
                        myWaitsetInfo->writer->get_status_changes();

                if (triggeredmask & DDS_PUBLICATION_MATCHED_STATUS) {
					DDS_PublicationMatchedStatus st;
                	myWaitsetInfo->writer->get_publication_matched_status(st);
					std::cout << myWaitsetInfo->me() << " Writer Subs: " 
                    << st.current_count << "  " << st.current_count_change << std::endl;
                }
            } else {
                // writers can only have status condition
                std::cout << myWaitsetInfo->me() << " Writer: False Writer Event Trigger" << std::endl;
            }
        }
	} // While (run_flag)
	end_writer_thread: // reached by ^C or an error
	std::cout << myWaitsetInfo->me() << " Writer: Pthread Exiting"<< std::endl;
	exit(0);
}



WaitsetReaderInfo::WaitsetReaderInfo(std::string readerName) 
        {
            myName = readerName;
        }

std::string WaitsetReaderInfo::me(){ return myName; }

void*  pthreadToProcReaderEvents(void *waitsetReaderInfo) {
    WaitsetReaderInfo * myWaitsetInfo;
    myWaitsetInfo = (WaitsetReaderInfo *)waitsetReaderInfo;
	DDSStatusCondition *status_condition =  NULL;
	DDSReadCondition * read_condition = NULL;
	DDSWaitSet *waitset = new DDSWaitSet();
    DDS_ReturnCode_t retcode;
    DDSConditionSeq active_conditions_seq;
	DDS_DynamicDataSeq data_seq;
	DDS_SampleInfoSeq info_seq;

    std::cout << "\nCreated Reader Pthread: " << myWaitsetInfo->me() << " Topic" << std::endl;

    // Create read condition
    read_condition = myWaitsetInfo->reader->create_readcondition(
        DDS_NOT_READ_SAMPLE_STATE,
        DDS_ANY_VIEW_STATE,
        DDS_ANY_INSTANCE_STATE);
    if (read_condition == NULL) {
        printf("Reader thread: create_readcondition error\n");
		goto end_reader_thread;
    }

    //  Get status conditions
    status_condition = myWaitsetInfo->reader->get_statuscondition();
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

	while ((* myWaitsetInfo->run_flag) == true) {
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
                        myWaitsetInfo->reader->get_status_changes();

                /* Subscription matched */
                if (triggeredmask & DDS_SUBSCRIPTION_MATCHED_STATUS) {
                    DDS_SubscriptionMatchedStatus st;
                    myWaitsetInfo->reader->get_subscription_matched_status(st);
                    std::cout << myWaitsetInfo->me() << "Reader Pubs: " 
                    << st.current_count << "  " << st.current_count_change << std::endl;
                }
            } else if (active_conditions_seq[i] == read_condition) { 
                // Get the latest samples
				retcode = myWaitsetInfo->reader->take(
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
                retcode = myWaitsetInfo->reader->return_loan(data_seq, info_seq);
                if (retcode != DDS_RETCODE_OK) {
                    fprintf(stderr, "Reader thread:return_loan error %d\n", retcode);
                    goto end_reader_thread;
                }  
			}
		}
	} // While (run_flag)
	end_reader_thread: // reached by ^C or an error
	std::cout << myWaitsetInfo->me() << " Reader: Pthread Exiting" << std::endl;
	exit(0);
}
