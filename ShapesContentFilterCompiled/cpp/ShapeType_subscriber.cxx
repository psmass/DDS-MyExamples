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
/* ShapeType_subscriber.cxx

A subscription example

This file is derived from code automatically generated by the rtiddsgen 
command:

rtiddsgen -language C++ -example <arch> ShapeType.idl

Example subscription of type ShapeTypeExtended automatically generated by 
'rtiddsgen'. To test it, follow these steps:

(1) Compile this file and the example publication.

(2) Start the subscription

(3) Start the publication

(4) [Optional] Specify the list of discovery initial peers and 
multicast receive addresses via an environment variable or a file 
(in the current working directory) called NDDS_DISCOVERY_PEERS. 

You can run any number of publisher and subscriber programs, and can 
add and remove them dynamically from the domain.
*/

#include <stdio.h>
#include <stdlib.h>

#include "ShapeType.h"
#include "ShapeTypeSupport.h"
#include "ndds/ndds_cpp.h"

/* Delete all entities */
static int subscriber_shutdown(
    DDSDomainParticipant *participant)
{
    DDS_ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            fprintf(stderr, "delete_contained_entities error %d\n", retcode);
            status = -1;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
            fprintf(stderr, "delete_participant error %d\n", retcode);
            status = -1;
        }
    }

    /* RTI Connext provides the finalize_instance() method on
    domain participant factory for people who want to release memory used
    by the participant factory. Uncomment the following block of code for
    clean destruction of the singleton. */
    /*

    retcode = DDSDomainParticipantFactory::finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        fprintf(stderr, "finalize_instance error %d\n", retcode);
        status = -1;
    }
    */
    return status;
}

extern "C" int subscriber_main(int domainId, int sample_count, bool sel_cft)
{
    #define PARAMS 4  // number of parameters to feed our filter
    DDSDomainParticipant *participant = NULL;
    DDSSubscriber *subscriber = NULL;
    DDSTopic *topic = NULL;
    DDSDataReader *reader = NULL;
    ShapeTypeExtendedDataReader *ShapeTypeExtended_reader = NULL;
    DDS_ReturnCode_t retcode;
    ShapeTypeExtendedSeq dataSeq;
    DDS_SampleInfoSeq infoSeq;
    const char *type_name = NULL;
    int count = 0;
    DDS_Duration_t receive_period = {4,0};
    DDS_Duration_t wait_timeout = { 1, 500000000 };
    int status = 0;
    DDSContentFilteredTopic *cft = NULL;
    /* For this filter we only allow 1 parameter*/
    DDS_StringSeq parameters(PARAMS);
    const char *param_list[] = { "50", "150", "50", "150" };
    //const char *param_list[] = { "RED" };

    /* To customize the participant QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    participant = DDSTheParticipantFactory->create_participant(
        domainId, DDS_PARTICIPANT_QOS_DEFAULT, 
        NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        fprintf(stderr, "create_participant error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    /* To customize the subscriber QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    subscriber = participant->create_subscriber(
        DDS_SUBSCRIBER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (subscriber == NULL) {
        fprintf(stderr, "create_subscriber error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    /* Register the type before creating the topic */
    type_name = ShapeTypeExtendedTypeSupport::get_type_name();
    retcode = ShapeTypeExtendedTypeSupport::register_type(
        participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        fprintf(stderr, "register_type error %d\n", retcode);
        subscriber_shutdown(participant);
        return -1;
    }

    /* To customize the topic QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    topic = participant->create_topic(
        "Square",
        type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (topic == NULL) {
        fprintf(stderr, "create_topic error\n");
        subscriber_shutdown(participant);
        return -1;
    }

    parameters.from_array(param_list, PARAMS);

    if (sel_cft) {
        // create_contentfilteredtopic_with_filter 
        cft = participant->create_contentfilteredtopic_with_filter(
                "ContentFilteredTopic",
                topic,
                "(x > %0 and x < %1) and (y > %2 and y < %3)",
                //"color MATCH %0",
                parameters,
                //DDS_STRINGMATCHFILTER_NAME);
                DDS_SQLFILTER_NAME);
        if (cft == NULL) {
            printf("create_contentfilteredtopic error\n");
            subscriber_shutdown(participant);
            return -1;
        }
    }

    /* To customize the data reader QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    /* Here we create the reader either using a Content Filtered Topic or
     * a normal topic */
    if (sel_cft) {
        printf("Using ContentFiltered Topic\n");
        reader = subscriber->create_datareader(
                cft,
                DDS_DATAREADER_QOS_DEFAULT,
                NULL /* listener */,
                DDS_STATUS_MASK_ALL);
    } else {
        printf("Using Normal Topic\n");
        reader = subscriber->create_datareader(
                topic,
                DDS_DATAREADER_QOS_DEFAULT,
                NULL /* listener */,
                DDS_STATUS_MASK_ALL);
    }
    if (reader == NULL) {
        printf("create_datareader error\n");
        subscriber_shutdown(participant);
        return -1;
    }


    ShapeTypeExtended_reader = ShapeTypeExtendedDataReader::narrow(reader);
    if (ShapeTypeExtended_reader == NULL) {
        fprintf(stderr, "DataReader narrow error\n");
        return -1;
    }

    /* Create read condition
     * ---------------------
     * Note that the Read Conditions are dependent on both incoming
     * data as well as sample state. Thus, this method has more
     * overhead than adding a DDS_DATA_AVAILABLE_STATUS StatusCondition.
     * We show it here purely for reference
     */
    DDSReadCondition *read_condition = reader->create_readcondition(
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
    DDSStatusCondition *status_condition = reader->get_statuscondition();
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
    for (count=0; (sample_count == 0) || (count < sample_count); ++count) {
        DDSConditionSeq active_conditions_seq;
          /* wait() blocks execution of the thread until one or more attached
         * Conditions become true, or until a user-specified timeout expires.
         */
        retcode = waitset->wait(active_conditions_seq, wait_timeout);
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
                retcode = ShapeTypeExtended_reader->take(
                    dataSeq, infoSeq, DDS_LENGTH_UNLIMITED,
                    DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

                if (retcode == DDS_RETCODE_NO_DATA) {
                    continue;
                } else if (retcode != DDS_RETCODE_OK) {
                    fprintf(stderr, "take error %d\n", retcode);
                    break;
                }

                for (i = 0; i < dataSeq.length(); ++i) {
                    if (infoSeq[i].valid_data) {
                        printf("Received data \n");
                        ShapeTypeExtendedTypeSupport::print_data(&dataSeq[i]);
                    }
                }

                retcode = ShapeTypeExtended_reader->return_loan(dataSeq, infoSeq);
                if (retcode != DDS_RETCODE_OK) {
                    fprintf(stderr, "return loan error %d\n", retcode);
                }
            }
        }
    }
    /* Delete all entities */
    status = subscriber_shutdown(participant);
    delete waitset;

    return status;
}
int main(int argc, char *argv[])
{
    int domain_id = 0;
    int sample_count = 0; /* infinite loop */
    bool sel_cft = true;  // select / enable Content Filter Topic

    if (argc >= 2) {
        domain_id = atoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = atoi(argv[2]);
    }

    /* Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
    set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
    NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */

    return subscriber_main(domain_id, sample_count, sel_cft);
}

