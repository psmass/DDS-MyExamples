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

/* ShapeType_publisher.cxx

A publication of data of type ShapeTypeExtended

This file is derived from code automatically generated by the rtiddsgen 
command:

rtiddsgen -language C++ -example <arch> ShapeType.idl

Example publication of type ShapeTypeExtended automatically generated by 
'rtiddsgen'. To test it, follow these steps:

(1) Compile this file and the example subscription.

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

/* include distribute logger libraries per platform library guide" */
#include "ndds/ndds_namespace_cpp.h"
#include "rti_dl/rti_dl_cpp.h"

#include "ShapeType.h"
#include "ShapeTypeSupport.h"
#include "ndds/ndds_cpp.h"


#define DEFAULT_MESSAGE         "This is an example of RTI Distributed Logger"
#define MAX_STRING_SIZE         1024

/* Delete all entities */
static int publisher_shutdown(
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

extern "C" int publisher_main(int domainId, int sample_count)
{
    DDSDomainParticipant *participant = NULL;
    DDSPublisher *publisher = NULL;
    DDSTopic *topic = NULL;
    DDSDataWriter *writer = NULL;
    ShapeTypeExtendedDataWriter * ShapeTypeExtended_writer = NULL;
    ShapeTypeExtended *instance = NULL;
    DDS_ReturnCode_t retcode;
    DDS_InstanceHandle_t instance_handle = DDS_HANDLE_NIL;
    const char *type_name = NULL;
    int count = 0;  
    DDS_Duration_t send_period = {0,200000000};
    char message[MAX_STRING_SIZE];
    bool ok = false;
    RTI_DLDistLogger *dl = NULL;
    char *t_blue=(char *)"RED";
 
    /* --- Set Up --------------------------------------------------------- */

    printf("Creating Distributed Logger\n");

    /* First we need to create the options
     If no options are provided, RTI DL creates
     default ones and work with them.
     */
    //printf("Creating default options\n");
    //RTI_DLOptions dlOptions;

    /* We can personalize RTI DL using the Options */
    //printf("Configuring options\n");
    //retcode = dlOptions.setDomainId(domainId);
    // if(retcode != DDS_RETCODE_OK){
    //    printf("Error: Unable to set Domain Id\n");
    //    goto clean_exit;
    //}
    //retcode = dlOptions.setApplicationKind("Shapes Demo w/Monitor and Logger");
    //if(retcode != DDS_RETCODE_OK){
    //    fprintf(stderr,"Error: Unable to set Application Kind\n");
    //    goto clean_exit;
    // }

    /* Before using the RTI DL, we set the Options
     otherwise, default options are created */
    //printf("Setting options\n");
    //ok = RTI_DLDistLogger::setOptions(dlOptions);
    // if(!ok){
    //    fprintf(stderr,"Error: Unable to set Options\n");
    //    goto clean_exit;
    // }

    /* instantiate the logger instance */
    printf("Getting Distributed Logger\n");
    dl = RTI_DLDistLogger::getInstance();
    if (dl == NULL) {
        fprintf(stderr,"Error: Unable to get RTI Distributed Logger Instance\n");
        goto clean_exit;
    }
    printf("Distributed Logger instance sucessfully created\n");

    /* end logger config - note the above includes a lot of code to allow configuration
       of logger defaults - which we don't use in this example
    */
    
    /* To customize participant QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    participant = DDSTheParticipantFactory->create_participant(
        domainId, DDS_PARTICIPANT_QOS_DEFAULT, 
        NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        fprintf(stderr, "create_participant error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize publisher QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    publisher = participant->create_publisher(
        DDS_PUBLISHER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        fprintf(stderr, "create_publisher error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* Register type before creating topic */
    type_name = ShapeTypeExtendedTypeSupport::get_type_name();
    retcode = ShapeTypeExtendedTypeSupport::register_type(
        participant, type_name);
    if (retcode != DDS_RETCODE_OK) {
        fprintf(stderr, "register_type error %d\n", retcode);
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize topic QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    topic = participant->create_topic(
        "Square",
        type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (topic == NULL) {
        fprintf(stderr, "create_topic error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* To customize data writer QoS, use 
    the configuration file USER_QOS_PROFILES.xml */
    writer = publisher->create_datawriter(
        topic, DDS_DATAWRITER_QOS_DEFAULT, NULL /* listener */,
        DDS_STATUS_MASK_NONE);
    if (writer == NULL) {
        fprintf(stderr, "create_datawriter error\n");
        publisher_shutdown(participant);
        return -1;
    }
    ShapeTypeExtended_writer = ShapeTypeExtendedDataWriter::narrow(writer);
    if (ShapeTypeExtended_writer == NULL) {
        fprintf(stderr, "DataWriter narrow error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* Create data sample for writing */
    instance = ShapeTypeExtendedTypeSupport::create_data();
    instance->color=t_blue;
    instance->shapesize=30;
    if (instance == NULL) {
        fprintf(stderr, "ShapeTypeExtendedTypeSupport::create_data error\n");
        publisher_shutdown(participant);
        return -1;
    }

    /* For a data type that has a key, if the same instance is going to be
    written multiple times, initialize the key here
    and register the keyed instance prior to writing */

    // instance_handle = ShapeTypeExtended_writer->register_instance(*instance);

    /* Main loop */
        sprintf(message, "%s", "Logging Main Loop");
        printf("%s\n",message);
        fflush(stdout);
        dl->error(message);
        dl->debug(message);
        dl->warning(message);

    for (count=0; (sample_count == 0) || (count < sample_count); ++count) {

        instance->x=((count%250)*5)%250;
        instance->y=((count%250)*5)%250;

        printf("Writing ShapeTypeExtended, count %d\n", count);

        sprintf(message, "%s #%d", DEFAULT_MESSAGE, count);
        //printf("%s\n",message);
        //fflush(stdout);
        //dl->error(message);
        //dl->debug(message);
        //dl->warning(message);

        /* Modify the data to be sent here */

        retcode = ShapeTypeExtended_writer->write(*instance, instance_handle);
        if (retcode != DDS_RETCODE_OK) {
            fprintf(stderr, "write error %d\n", retcode);
        }

        NDDSUtility::sleep(send_period);
    }

    /*
    retcode = ShapeTypeExtended_writer->unregister_instance(
        *instance, instance_handle);
    if (retcode != DDS_RETCODE_OK) {
        fprintf(stderr, "unregister instance error %d\n", retcode);
    }
    */

    /* Delete data sample */
    retcode = ShapeTypeExtendedTypeSupport::delete_data(instance);
    if (retcode != DDS_RETCODE_OK) {
        fprintf(stderr, "ShapeTypeExtendedTypeSupport::delete_data error %d\n", retcode);
    }

clean_exit:
    printf("Exiting...\n");
    /* Delete all entities */
    if (dl != NULL) {
        /* If we don't finalize it, it will forward all the log messages */
        dl->finalizeInstance();
        /* If this is the last RTI DDS application running, we should finalize everything*/
        DDSTheParticipantFactory->finalize_instance();
    }
    // Application terminates if sampleCount is set.
    printf("Done.\n");

    return publisher_shutdown(participant);
}

int main(int argc, char *argv[])
{
    int domain_id = 0;
    int sample_count = 0; /* infinite loop */

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

    return publisher_main(domain_id, sample_count);
}
