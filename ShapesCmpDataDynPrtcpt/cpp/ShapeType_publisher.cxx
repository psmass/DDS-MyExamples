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

#include "ShapeType.h"
#include "ShapeTypeSupport.h"
#include "ndds/ndds_cpp.h"

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

extern "C" int publisher_main(int sample_count) {
    DDS_ReturnCode_t retcode;
    int count = 0;  
    DDS_Duration_t send_period = {0,200000000};

    /* type registration */
    retcode = DDSTheParticipantFactory->register_type_support(
                                        ShapeTypeTypeSupport::register_type, 
                                        "ShapeTypeExtendedRegistered");
    if (retcode != DDS_RETCODE_OK) {
        fprintf(stderr, "register_type_support %d\n", retcode);
        publisher_shutdown(NULL);
        return -1;
    }
    
    //  To customize participant QoS, use 
    //  the configuration file USER_QOS_PROFILES.xml     
    DDSDomainParticipant * participant = DDSTheParticipantFactory->
            create_participant_from_config(
                                "NewParticipantLibrary1::ShapesParticipant1");
    if (participant == NULL) {
        fprintf(stderr, "create_participant_from_config error\n");
        publisher_shutdown(participant);
        return -1;
    }

    ShapeTypeDataWriter * TriangleWriter = ShapeTypeDataWriter::narrow(
            participant->lookup_datawriter_by_name(
                                      "TrianglePublisher1::TriangleWriter"));    
    if (TriangleWriter == NULL) {
        fprintf(stderr, "lookup_datawriter_by_name error\n");
        publisher_shutdown(participant);
        return -1;
    }
    
    ShapeType * ShapeTypeData = ShapeTypeTypeSupport::create_data();   
    if (ShapeTypeData == NULL) {
        fprintf(stderr, "ShapeTypeTypeSupport_create_data error\n");
        publisher_shutdown(participant);
        return -1;
    }


    	/* Initialize the Shape information*/
	ShapeTypeData->shapesize = 30; 
	ShapeTypeData->color = (char *) "RED"; 
	
	int xloc = 0;
	int yloc = 0;
	int xdelta = 2;
	int ydelta = 5;
	int xmax = 250;
	int ymax = 250;

	
    /* Main loop */
    for (count=0; (sample_count == 0) || (count < sample_count); ++count) {
        printf("Writing ShapeType, count: %d\n", count);
        fflush(stdout);

		
        /* Set the data fields */
		xloc = xloc + xdelta;
		if (xloc > xmax || xloc < 0) xdelta = xdelta * -1;
		yloc = yloc + ydelta;
		if (yloc > ymax || yloc < 0) ydelta = ydelta * -1;

		ShapeTypeData->x = xloc;
		ShapeTypeData->y = yloc;		
				
        retcode = TriangleWriter->write(*ShapeTypeData, DDS_HANDLE_NIL);
        if (retcode != DDS_RETCODE_OK) {
            fprintf(stderr, "write error %d\n", retcode);
            publisher_shutdown(participant);
            return -1;
        }
        
        NDDSUtility::sleep(send_period);
    }

    // Delete data sample 
    ShapeTypeTypeSupport::delete_data(ShapeTypeData);

    // Delete all entities 
    return publisher_shutdown(participant);
}

int main(int argc, char *argv[])
{
    int sample_count = 0; /* infinite loop */   
    
    if (argc >= 2) {
        sample_count = atoi(argv[1]);
    }

    /* Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
        set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
                                  NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */
    
    return publisher_main(sample_count);
}


