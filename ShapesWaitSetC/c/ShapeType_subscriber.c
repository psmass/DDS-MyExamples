/*
* (c) Copyright, Real-Time Innovations, 2012.  All rights reserved.
* RTI grants Licensee a license to use, modify, compile, and create derivative
* works of the software solely for use with RTI Connext DDS. Licensee may
* redistribute copies of the software provided that all such copies are subject
* to this license. The software is provided "as is", with no warranty of any
* type, including any warranty for fitness for any purpose. RTI is under no
* obligation to maintain or support the software. RTI shall not be liable for
* any incidental or consequential damages arising out of the use or inability
* to use the software.
*/

/* ShapeType_subscriber.c

A subscription example

This file is derived from code automatically generated by the rtiddsgen 
command:

rtiddsgen -language C -example <arch> ShapeType.idl

Example subscription of type ShapeTypeExtended automatically generated by 
'rtiddsgen'. To test it, follow these steps:

(1) Compile this file and the example publication.

(2) Start the subscription on the same domain used for RTI Connext

(3) Start the publication on the same domain used for RTI Connext

(4) [Optional] Specify the list of discovery initial peers and 
multicast receive addresses via an environment variable or a file 
(in the current working directory) called NDDS_DISCOVERY_PEERS. 

You can run any number of publisher and subscriber programs, and can 
add and remove them dynamically from the domain.
*/

#include <stdio.h>
#include <stdlib.h>
#include "ndds/ndds_c.h"
#include "ShapeType.h"
#include "ShapeTypeSupport.h"

#include <signal.h>
#include <pthread.h>

static bool run_flag = true;

#define NUM_SIGS 7


// Local prototypes
void handle_SIGINT(int unused);


//-------------------------------------------------------------------
// handle_SIGINT - sets flag for orderly shutdown on Ctrl-C
//-------------------------------------------------------------------
void handle_SIGINT(int unused)
{
  // On CTRL+C - abort! //
  run_flag = false;
}

void*  pthreadToProcReaderEvents(void * reader) {
    DDSDataReader * myReader;
    myReader = (DDSDataReader *)reader;
    DDS_ReturnCode_t retcode;
    DDSConditionSeq active_conditions_seq;
    DDS_Duration_t wait_timeout = {10,0}; // *** TODO how to set waitset wait to infinite???

    printf("Created Pthread\n");
    
    /* Create read condition
     * ---------------------
     * Note that the Read Conditions are dependent on both incoming
     * data as well as sample state. Thus, this method has more
     * overhead than adding a DDS_DATA_AVAILABLE_STATUS StatusCondition.
     * We show it here purely for reference
     */
    DDSReadCondition *read_condition = myReader->create_readcondition(
            DDS_NOT_READ_SAMPLE_STATE,
            DDS_ANY_VIEW_STATE,
            DDS_ANY_INSTANCE_STATE);
    if (read_condition == NULL) {
        printf("create_readcondition error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    /* Get status conditions
     * ---------------------
     * Each entity may have an attached Status Condition. To modify the
     * statuses we need to get the reader's Status Conditions first.
     */
    DDSStatusCondition *status_condition = myReader->get_statuscondition();
    if (status_condition == NULL) {
        printf("get_statuscondition error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    /* Set enabled statuses
     * --------------------
     * Now that we have the Status Condition, we are going to enable the
     * statuses we are interested in: DDS_SUBSCRIPTION_MATCHED_STATUS and
     * DDS_LIVELINESS_CHANGED_STATUS.
     */
    retcode = status_condition->set_enabled_statuses(
            DDS_SUBSCRIPTION_MATCHED_STATUS | DDS_LIVELINESS_CHANGED_STATUS);
    if (retcode != DDS_RETCODE_OK) {
        printf("set_enabled_statuses error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    /* Create and attach conditions to the WaitSet
     * -------------------------------------------
     * Finally, we create the WaitSet and attach both the Read Conditions
     * and the Status Condition to it.
     */
    DDSWaitSet *waitset = new DDSWaitSet();

    /* Attach Read Conditions */
    retcode = waitset->attach_condition(read_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("attach_condition error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    /* Attach Status Conditions */
    retcode = waitset->attach_condition(status_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("attach_condition error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    /* Main loop */
    while(true) {  // CTRL C breaks us out in the main loop and cancels this thread
        DDSConditionSeq active_conditions_seq;
          /* wait() blocks execution of the thread until one or more attached
         * Conditions become true, or until a user-specified timeout expires.
         */
        retcode = waitset->wait(active_conditions_seq, DDS_DURATION_INFINITE);
        /* We get to timeout if no conditions were triggered */
        if (retcode == DDS_RETCODE_TIMEOUT) {
            printf("Wait timed out!! No conditions were triggered.\n");
            continue;
        } else if (retcode != DDS_RETCODE_OK) {
            printf("wait returned error: %d\n", retcode);
            break;
        }

        /* Get the number of active conditions */
        int active_conditions = active_conditions_seq.length();
        printf("Got %d active conditions\n", active_conditions);

        for (int i = 0; i < active_conditions; ++i) {
            /* Now we compare the current condition with the Status
             * Conditions and the Read Conditions previously defined. If
             * they match, we print the condition that was triggered.*/

            /* Compare with Status Conditions */
            if (active_conditions_seq[i] == status_condition) {
                /* Get the status changes so we can check which status
                 * condition triggered. */
                DDS_StatusMask triggeredmask =
                        reader->get_status_changes();

                /* Liveliness changed */
                if (triggeredmask & DDS_LIVELINESS_CHANGED_STATUS) {
                    DDS_LivelinessChangedStatus st;
                    reader->get_liveliness_changed_status(st);
                    printf("Liveliness changed => Active writers = %d\n",
                           st.alive_count);
                }

                /* Subscription matched */
                if (triggeredmask & DDS_SUBSCRIPTION_MATCHED_STATUS) {
                    DDS_SubscriptionMatchedStatus st;
                    reader->get_subscription_matched_status(st);
                    printf("Subscription matched => Cumulative matches = %d\n",
                           st.total_count);
                }
            }

            /* Compare with Read Conditions */
            else if (active_conditions_seq[i] == read_condition) {
                /* Current conditions match our conditions to read data, so
                 * we can read data just like we would do in any other
                 * example. */


                /* You may want to call take_w_condition() or
                 * read_w_condition() on the Data Reader. This way you will use
                 * the same status masks that were set on the Read Condition.
                 * This is just a suggestion, you can always use
                 * read() or take() like in any other example.
                 */
                ShapeTypeExtendedDataReader *ShapeTypeExtended_reader = NULL;
                struct ShapeTypeExtendedSeq data_seq = DDS_SEQUENCE_INITIALIZER;
                struct DDS_SampleInfoSeq info_seq = DDS_SEQUENCE_INITIALIZER;
                DDS_ReturnCode_t retcode;
                int i;

                ShapeTypeExtended_reader = ShapeTypeExtendedDataReader_narrow(reader);
                if (ShapeTypeExtended_reader == NULL) {
                    fprintf(stderr, "DataReader narrow error\n");
                    return;
                }

                retcode = ShapeTypeExtendedDataReader_take(
                    ShapeTypeExtended_reader,
                    &data_seq, &info_seq, DDS_LENGTH_UNLIMITED,
                    DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);
                if (retcode == DDS_RETCODE_NO_DATA) {
                    return;
                } else if (retcode != DDS_RETCODE_OK) {
                    fprintf(stderr, "take error %d\n", retcode);
                    return;
                }

                for (i = 0; i < ShapeTypeExtendedSeq_get_length(&data_seq); ++i) {
                    if (DDS_SampleInfoSeq_get_reference(&info_seq, i)->valid_data) {
                        printf("Received data\n");
                        ShapeTypeExtendedTypeSupport_print_data(
                            ShapeTypeExtendedSeq_get_reference(&data_seq, i));
                    }
                }

                retcode = ShapeTypeExtendedDataReader_return_loan(
                    ShapeTypeExtended_reader,
                    &data_seq, &info_seq);
                if (retcode != DDS_RETCODE_OK) {
                    fprintf(stderr, "return loan error %d\n", retcode);
                }
                /* Delete all entities */
                status = subscriber_shutdown(participant);
                delete waitset;

                return status;
            }
        }
    }
}Americ


/* Delete all entities */
static int subscriber_shutdown(
    DDS_DomainParticipant *participant)
{
    DDS_ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = DDS_DomainParticipant_delete_contained_entities(participant);
        if (retcode != DDS_RETCODE_OK) {
            fprintf(stderr, "delete_contained_entities error %d\n", retcode);
            status = -1;
        }

        retcode = DDS_DomainParticipantFactory_delete_participant(
            DDS_TheParticipantFactory, participant);
        if (retcode != DDS_RETCODE_OK) {
            fprintf(stderr, "delete_participant error %d\n", retcode);
            status = -1;
        }
    }

    /* RTI Data Distribution Service provides the finalize_instance() method on
    domain participant factory for users who want to release memory used
    by the participant factory. Uncomment the following block of code for
    clean destruction of the singleton. */
    /*
    retcode = DDS_DomainParticipantFactory_finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        fprintf(stderr, "finalize_instance error %d\n", retcode);
        status = -1;
    }
    */

    return status;
}

int subscriber_main(int domainId, int sample_count)
{
    DDS_DomainParticipant *participant = NULL;
    DDS_Subscriber *subscriber = NULL;
    DDS_Topic *topic = NULL;
    DDS_DataReader *reader = NULL;
    DDS_ReturnCode_t retcode;
    const char *type_name = NULL;
    int count = 0;
    struct DDS_Duration_t poll_period = {0,200000000}; //sec, nanosec - set to 1/5 sec

    /* To customize participant QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    participant = DDS_DomainParticipantFactory_create_participant(
        DDS_TheParticipantFactory, domainId, &DDS_PARTICIPANT_QOS_DEFAULT,
        NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        fprintf(stderr, "create_participant error\n");
        subscriber_shutdown(participant);
        goto subscriber_shutdown;
    }

    /* To customize subscriber QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    subscriber = DDS_DomainParticipant_create_subscriber(
        participant, &DDS_SUBSCRIBER_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (subscriber == NULL) {
        fprintf(stderr, "create_subscriber error\n");
        subscriber_shutdown(participant);
        goto subscriber_shutdown;
    }

    /* Register the type before creating the topic */
    type_name = ShapeTypeExtendedTypeSupport_get_type_name();
    retcode = ShapeTypeExtendedTypeSupport_register_type(participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        fprintf(stderr, "register_type error %d\n", retcode);
        subscriber_shutdown(participant);
        goto subscriber_shutdown;
    }

    /* To customize topic QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    topic = DDS_DomainParticipant_create_topic(
        participant, "Square", // "Example ShapeTypeExtended",
        type_name, &DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (topic == NULL) {
        fprintf(stderr, "create_topic error\n");
        subscriber_shutdown(participant);
        goto subscriber_shutdown;
    }

    /* To customize data reader QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    reader = DDS_Subscriber_create_datareader(
        subscriber, DDS_Topic_as_topicdescription(topic),
        &DDS_DATAREADER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_ALL);
    if (reader == NULL) {
        fprintf(stderr, "create_datareader error\n");
        subscriber_shutdown(participant);
        goto subscriber_shutdown;
    }

	pthread_t rtid;
    pthread_create(&rtid, NULL, pthreadToProcReaderEvents, (void*) &reader);

	// main loop - reading and writing done in reader thread so nothing to do here
	while (run_flag == true) {
		// do 3-way voting logic here?
		NDDSUtility::sleep(check_period); // check every 1 sec for a ^C to stop
	}
    pthread_cancel(rtid);

	subscriber_end: // reached by ^C or an error

	status = subscriber_shutdown(participant);
	return status;
}

int main(int argc, char *argv[]) {
    int domain_id = 0;
    int sample_count = 0; /* infinite loop */

    signal(SIGINT, handle_SIGINT);

    if (argc >= 2) {
        domain_id = atoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = atoi(argv[2]);
    }

    /* Uncomment this to turn on additional logging
    NDDS_Config_Logger_set_verbosity_by_category(
        NDDS_Config_Logger_get_instance(),
        NDDS_CONFIG_LOG_CATEGORY_API, 
        NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */

    return subscriber_main(domain_id, sample_count);
}

