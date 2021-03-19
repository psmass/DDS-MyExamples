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

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <signal.h>
#include <iostream>

#include "ndds/ndds_cpp.h"
#include <pthread.h>
#include "tmsTestExample.h" // This file was created by rticodegen from the official TMS datamodel
#include "tmsCommPatterns.h"

// Local prototypes
void handle_SIGINT(int unused);
int tms_app_main (unsigned int);
int main (int argc, char *argv[]);

//-------------------------------------------------------------------
// handle_SIGINT - sets flag for orderly shutdown on Ctrl-C
//-------------------------------------------------------------------

void handle_SIGINT(int unused)
{
  // On CTRL+C - abort! //
  run_flag = false;
}

/* Delete all entities */
static int participant_shutdown(
    DDSDomainParticipant *participant)
{
    DDS_ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            std::cerr <<  "delete_contained_entities error " << retcode << std::endl << std::flush;
            status = -1;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
            std::cerr <<  "delete_participant error " << retcode << std::endl << std::flush;
            status = -1;
        }
    }

    /* RTI Connext provides finalize_instance() method on
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

extern "C" int tms_app_main(int sample_count) {
    DDSDomainParticipant * participant = NULL;
    DDSDynamicDataWriter * heartbeat_writer = NULL;
	DDSDynamicDataWriter * device_announcement_writer = NULL;
	DDSDynamicDataWriter * microgrid_membership_request_writer = NULL;
	DDSDynamicDataReader * microgrid_membership_outcome_reader = NULL;
    DDS_DynamicData * product_info_data = NULL;
    DDS_DynamicData * microgrid_membership_request_data = NULL;
    DDS_DynamicData * heartbeat_data = NULL;
    DDS_ReturnCode_t retcode, retcode1;
     
    DDSGuardCondition changeStateHeartbeat;

    char this_device_id [tms_LEN_Fingerprint] = \
        {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','1','2','3','4'};

    unsigned long long count = 0;  
    DDS_Duration_t send_period = {1,0};

    // Declare Reader and Writer thread Information structs
    PeriodicPublishThreadInfo * myHeartbeatThreadInfo = new PeriodicPublishThreadInfo(tms_TOPIC_HEARTBEAT_ENUM, send_period);
    ChangeStatePublishThreadInfo * myChangeStateHeartbeatThreadInfo = new ChangeStatePublishThreadInfo(tms_TOPIC_HEARTBEAT_ENUM, &changeStateHeartbeat);
    WriterEventsThreadInfo * myDeviceAnnouncementEventThreadInfo = new WriterEventsThreadInfo(tms_TOPIC_DEVICE_ANNOUNCEMENT_ENUM); 
	WriterEventsThreadInfo * myMicrogridMembershipRequestEventThreadInfo = new WriterEventsThreadInfo(tms_TOPIC_MICROGRID_MEMBERSHIP_REQUEST_ENUM); 
    ReaderThreadInfo * myMicrogridMembershipOutcomeReaderThreadInfo = new ReaderThreadInfo(tms_TOPIC_MICROGRID_MEMBERSHIP_OUTCOME_ENUM);

    /* To customize participant QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    std::cout << "Starting tms application\n" << std::flush;

    participant = DDSTheParticipantFactory->
            create_participant_from_config(
                                "TMS_ParticipantLibrary1::TMS_Participant1");
    if (participant == NULL) {
        std::cerr << "create_participant_from_config error " << std::endl << std::flush;
        participant_shutdown(participant);
        return -1;
    }
    
    std::cout << "Successfully Created Tactical Microgrid Participant from the System Designer config file"
     << std::endl << std::flush;


    // To Do: create an array of writers w/data handles indexed by enum topic
    // and itterate getting writer handles - same with reader handles 
    heartbeat_writer = DDSDynamicDataWriter::narrow(
        participant->lookup_datawriter_by_name("TMS_Publisher1::HeartbeatTopicWriter"));
    if (heartbeat_writer  == NULL) {
        std::cerr << "TMS_Publisher1::HeartbeatTopicWriter: lookup_datawriter_by_name error "
        << retcode << std::endl << std::flush; 
		goto tms_app_main_end;
    }
    std::cout << "Successfully Found: TMS_Publisher1::HeartbeatTopicWriter" 
    << std::endl << std::flush;

	device_announcement_writer = DDSDynamicDataWriter::narrow(
        participant->lookup_datawriter_by_name("TMS_Publisher1::DeviceAnnouncementTopicWriter"));
    if (device_announcement_writer  == NULL) {
        std::cerr << "TMS_Publisher1::DeviceAnnouncementTopicWriter: lookup_datawriter_by_name error "
        << retcode << std::endl << std::flush; 
		goto tms_app_main_end;
    }
    std::cout << "Successfully Found: TMS_Publisher1::MicrogridDeviceAnnouncementTopicWriter" 
    << std::endl << std::flush;

    microgrid_membership_request_writer = DDSDynamicDataWriter::narrow(
		// Defined only in domain_participant_library. PUblisher name not defined QoS file
        participant->lookup_datawriter_by_name("TMS_Publisher1::MicrogridMembershipRequestTopicWriter"));
    if (microgrid_membership_request_writer  == NULL) {
        std::cerr << "TMS_Publisher1::MicrogridMembershipRequestTopicWriter lookup_datawriter_by_name error " 
        << retcode << std::endl << std::flush; 
		goto tms_app_main_end;
    }
    std::cout << "Successfully Found: TMS_Publisher1::MicrogridMembershipRequestTopicWriter" 
    << std::endl << std::flush;

 	microgrid_membership_outcome_reader = DDSDynamicDataReader::narrow(
		// Defined only in domain_participant_library. PUblisher name not defined QoS file
		participant->lookup_datareader_by_name("TMS_Subscriber1::MicrogridMembershipOutcomeTopicReader")); 
    if (microgrid_membership_outcome_reader == NULL) {
        std::cerr << "TMS_Publisher1::MicrogridMembershipOutcomeTopicReader"
        << retcode << std::endl << std::flush;
		goto tms_app_main_end;
    } 
    std::cout << "Successfully Found: TMS_Publisher1::MicrogridMembershipOutcomeTopicReader" 
    << std::endl << std::flush;   

    product_info_data = device_announcement_writer->create_data(DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (product_info_data == NULL) {
        std::cerr << "product_info_data: create_data error"
        << retcode << std::endl << std::flush;
		goto tms_app_main_end;
    } 

    std::cout << "Successfully created: product_info_data topic w/device announcemenet writer" 
    << std::endl << std::flush;  

    heartbeat_data = heartbeat_writer->create_data(DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (heartbeat_data == NULL) {
        std::cerr << "heartbeat: create_data error"
        << retcode << std::endl << std::flush;
		goto tms_app_main_end;
    } 

    std::cout << "Successfully created: heartbeat_data topic w/device announcemenet writer" 
    << std::endl << std::flush;  

	// Turn up threads - the Event threads do nothing but hang on events (no data)
    // Like to put the following in an itterator creating all the pthreads but the 
    // topicThreadInfo's are somewhat different depending upon the communications pattern
    myHeartbeatThreadInfo->writer = heartbeat_writer;
    myHeartbeatThreadInfo->enabled=true; // enable topic to be published
    myHeartbeatThreadInfo->periodicData=heartbeat_data; 
    pthread_t whb_tid; // writer device_announcement tid
    pthread_create(&whb_tid, NULL, pthreadToPeriodicPublish, (void*) myHeartbeatThreadInfo);

    myChangeStateHeartbeatThreadInfo->writer = heartbeat_writer;
    myChangeStateHeartbeatThreadInfo->enabled=true; // enable topic to be published
    myChangeStateHeartbeatThreadInfo->changeStateData=heartbeat_data; 
    pthread_t whbc_tid; // writer device_announcement tid
    pthread_create(&whbc_tid, NULL, pthreadToChangeStatePublish, (void*) myChangeStateHeartbeatThreadInfo);

    myDeviceAnnouncementEventThreadInfo->writer = device_announcement_writer;
    pthread_t wda_tid; // writer device_announcement tid
    pthread_create(&wda_tid, NULL, pthreadToProcWriterEvents, (void*) myDeviceAnnouncementEventThreadInfo);

    myMicrogridMembershipRequestEventThreadInfo->writer = microgrid_membership_request_writer;
    pthread_t wmmr_tid; // writer microgrid_membership_request tid
    pthread_create(&wmmr_tid, NULL, pthreadToProcWriterEvents, (void*) myMicrogridMembershipRequestEventThreadInfo);

    myMicrogridMembershipOutcomeReaderThreadInfo->reader = microgrid_membership_outcome_reader;
    pthread_t rmmo_tid; // writer microgrid_membership_outcome tid
    pthread_create(&rmmo_tid, NULL, pthreadToProcReaderEvents, (void*) myMicrogridMembershipOutcomeReaderThreadInfo);
    
    NDDSUtility::sleep(send_period); // wait a second for thread initialization to complete printing (printing is not sychronized)


    /* Pushblish one-time topics here - QoS is likely keep last, with durability set to transient-local to allow late joiners
       to get these announcements
    */
    std::cout <<  std::endl << tms_TOPIC_DEVICE_ANNOUNCEMENT << ": " << this_device_id << std::endl;

    product_info_data->set_octet_array("deviceId", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, tms_LEN_Fingerprint, (const DDS_Octet *)&this_device_id); 
    retcode = device_announcement_writer->write(* product_info_data, DDS_HANDLE_NIL);
    if (retcode != DDS_RETCODE_OK) {
        std::cerr << "product_info: Dynamic Data Set Error " << std::endl << std::flush;
        goto tms_app_main_end;
    }
 
    retcode = heartbeat_data->set_octet_array("deviceId", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, tms_LEN_Fingerprint, (const DDS_Octet *)&this_device_id); 
    retcode1 = heartbeat_data->set_ulong("sequenceNumber", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, count);
    if (retcode != DDS_RETCODE_OK || retcode1 != DDS_RETCODE_OK ) {
        std::cerr << "heartbeat: Dynamic Data Set Error" << std::endl << std::flush;
        goto tms_app_main_end;
    }

    NDDSUtility::sleep(send_period); // Optional - to let periodic writer go first

    /* Main loop */
    while (run_flag) {

        std::cout << ". "; // background idle
        // Do your stuff here to interact CAN to DDS (i.e. get devices state and
        // load DDS topics, set change triggers etc.)
    
        // Demo only - normally change value in statement prior to trigger - but heartbeat is also running periodically
        retcode = changeStateHeartbeat.set_trigger_value(DDS_BOOLEAN_TRUE);
        if (retcode != DDS_RETCODE_OK) {
            std::cerr << "Main Heartbeat: set_trigger condition error\n" << std::endl << std::flush;
            break;
        }

        NDDSUtility::sleep(send_period);  // remove eventually 

    }

    tms_app_main_end:
    /* Delete all entities */
    std::cout << "Stopping - shutting down participant\n" << std::flush;

    pthread_cancel(whb_tid); 
    pthread_cancel(whbc_tid); 
    pthread_cancel(wda_tid); 
    pthread_cancel(wmmr_tid); 
    pthread_cancel(rmmo_tid); 

    return participant_shutdown(participant);
}

int main(int argc, char *argv[])
{
    int sample_count = 0; /* infinite loop */
    signal(SIGINT, handle_SIGINT);

    if (argc >= 2) {
        sample_count = atoi(argv[2]);
    }

    /* Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
    set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
    NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */

    return tms_app_main(sample_count);
}
