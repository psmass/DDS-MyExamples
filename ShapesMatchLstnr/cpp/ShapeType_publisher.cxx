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


class MyShapesWriterListener : public DDSDataWriterListener {
    public:
        void    on_publication_matched (DDSDataWriter *writer, const DDS_PublicationMatchedStatus &status) {
            printf("DataWriterListener: on_publication_matched()\n");
            if (status.current_count_change < 0) {
                printf("lost a subscription\n");
            } else {
                printf("found a subscription\n");
            }
        }
    /*
        void 	on_offered_deadline_missed (DDSDataWriter *writer, const DDS_OfferedDeadlineMissedStatus &status) {
            printf("DataWriterListener: on_offered_deadline_missed()\n");
        }
        void 	on_liveliness_lost (DDSDataWriter *writer, const DDS_LivelinessLostStatus &status) {
            printf("DataWriterListener: on_publication_matched()\n");
        }
        void 	on_offered_incompatible_qos (DDSDataWriter *writer, const DDS_OfferedIncompatibleQosStatus &status) {
            printf("DataWriterListener: on_liveliness_lost\n");
        }
        void 	on_reliable_writer_cache_changed (DDSDataWriter *writer, const DDS_ReliableWriterCacheChangedStatus &status) {
            printf("DataWriterListener: on_reliable_writer_cache_changed ()\n");
        }
        void 	on_reliable_reader_activity_changed (DDSDataWriter *writer, const DDS_ReliableReaderActivityChangedStatus &status) {
            printf("DataWriterListener: oon_reliable_reader_activity_changed()\n");
        }
        void 	on_sample_removed (DDSDataWriter *writer, const DDS_Cookie_t &cookie) {
            printf("DataWriterListener: on_sample_removed()\n");
        }
        void 	on_instance_replaced (DDSDataWriter *writer, const DDS_InstanceHandle_t &handle) {
            printf("DataWriterListener: on_instance_replaced()\n");
        }
        void 	on_application_acknowledgment (DDSDataWriter *writer, const DDS_AcknowledgmentInfo &info) {
            printf("DataWriterListener: on_application_acknowledgment()\n");
        }
        void 	on_service_request_accepted (DDSDataWriter *writer, const DDS_ServiceRequestAcceptedStatus &status)  {
            printf("DataWriterListener: on_service_request_accepted()\n");
        }
    */
};


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
    MyShapesWriterListener *my_writer_listener = NULL;

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

    /* Create a data reader listener */
    my_writer_listener = new MyShapesWriterListener();
    dynamicWriter->set_listener(my_writer_listener, DDS_STATUS_MASK_ALL);
  
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
