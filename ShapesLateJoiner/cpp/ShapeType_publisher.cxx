/* ShapeType_publisher.cxx

   A publication of data of type ShapeType   

       
modification history
------------ -------       
*/

#include <stdio.h>
#include <stdlib.h>
#ifdef RTI_VX653
#include <vThreadsData.h>
#endif

#include "ndds/ndds_cpp.h"
//#include "ShapeTypeSupport.h"

/* Delete all entities */
int publisherShutdown(
    DDSDomainParticipant * participant) {
    DDS_ReturnCode_t retCode;
    int status = 0;

    if (participant != NULL) {
        retCode = participant->delete_contained_entities();
        if (retCode != DDS_RETCODE_OK) {
            fprintf(stderr, "delete_contained_entities error %d\n", retCode);
            status = -1;
        }

        retCode = DDSTheParticipantFactory->delete_participant(participant);
        if (retCode != DDS_RETCODE_OK) {
            fprintf(stderr, "delete_participant error %d\n", retCode);
            status = -1;
        }
    }

    /* Release memory associated with participant factory */
    retCode = DDSDomainParticipantFactory::finalize_instance();
    if (retCode != DDS_RETCODE_OK) {
        fprintf(stderr, "finalize_instance error %d\n", retCode);
        status = -1;
    }

    return status;
}

extern "C" int publisherMain(int sampleCount)
{
    DDS_ReturnCode_t retCode;
    int count = 0;  
    DDS_Duration_t sendPeriod = {0,100000000};
    DDS_ReturnCode_t lastSetError = DDS_RETCODE_OK;

    /* To customize participant QoS, use 
       the configuration file USER_QOS_PROFILES.xml */    
    DDSDomainParticipant * participant = DDSTheParticipantFactory->
            create_participant_from_config(
                                "NewParticipantLibrary1::ShapesParticipant1");
    if (participant == NULL) {
        fprintf(stderr, "create_participant_from_config error\n");
        publisherShutdown(participant);
        return -1;
    }
    
    DDSDynamicDataWriter * dynamicWriter = DDSDynamicDataWriter::narrow(
            participant->lookup_datawriter_by_name(
                                      "TrianglePublisher1::TriangleWriter"));    
    if (dynamicWriter == NULL) {
        fprintf(stderr, "lookup_datawriter_by_name error\n");
        publisherShutdown(participant);
        return -1;
    }
    
    DDS_DynamicData * dynamicData = 
            dynamicWriter->create_data(DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (dynamicData == NULL) {
        fprintf(stderr, "create_data error\n");
        publisherShutdown(participant);
        return -1;
    }    

	/* Initialize the Shape information*/
	retCode = dynamicData->set_long("shapesize", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, 30);
	retCode = dynamicData->set_string("color", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, "red");
	int xloc = 0;
	int yloc = 0;
	int xdelta = 2;
	int ydelta = 5;
	int xmax = 250;
	int ymax = 250;

    /* Main loop */
    for (count=0; (sampleCount == 0) || (count < sampleCount); ++count) {
        printf("Writing Shape, count: %d, xloc: %d, yloc: %d\n", count, xloc, yloc);
        fflush(stdout);
        
        /* Set the data fields */
		xloc = xloc + xdelta;
		if (xloc > xmax || xloc < 0) xdelta = xdelta * -1;
		yloc = yloc + ydelta;
		if (yloc > ymax || yloc < 0) ydelta = ydelta * -1;

		retCode = dynamicData->set_long("x", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, xloc);
		if (retCode != DDS_RETCODE_OK) { lastSetError = retCode; }
		retCode = dynamicData->set_long("y", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, yloc);
        if ( retCode != DDS_RETCODE_OK) { lastSetError = retCode; }
 
        if ( lastSetError != DDS_RETCODE_OK ) {            
            fprintf(stderr, "Error setting dynamic data: %d\n", lastSetError);
            publisherShutdown(participant);
            return -1;
        }                
       
        retCode = dynamicWriter->write(*dynamicData, DDS_HANDLE_NIL);
        if (retCode != DDS_RETCODE_OK) {
            fprintf(stderr, "write error %d\n", retCode);
            publisherShutdown(participant);
            return -1;
        }        

        NDDSUtility::sleep(sendPeriod);
    }

    /* Delete data sample */
    dynamicWriter->delete_data(dynamicData);

    /* Delete all entities */
    return publisherShutdown(participant);
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

    return publisherMain(sample_count);
}
