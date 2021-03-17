#ifndef tmsCommPatterns_h
#define tmsCommPatterns_h

#include "tmsTopicEnum.h"
#include "tmsTestExample.h"

/* This Interface provides threads for tms Communications Patterns
   (tms Microgrid Standard section 4.9.2)
*/

class PeriodicPublishThreadInfo {
    // Info struct for PeriodicPublishThread (Heartbeat or other status data flow pattern)
    // (tms Microgrid Standard section 4.9.2.1)
    // After enabled will send topic at a fixed rate
    public:
        PeriodicPublishThreadInfo(enum TOPICS_E topicEnum, DDS_Duration_t ratePeriod);
        std::string me();  // returns my name from global name array indexed by topic_enum
        DDS_Duration_t pubRatePeriod();
        enum TOPICS_E topic_enum();

        DDSDynamicDataWriter * writer;
		bool * run_flag;
        bool enabled;
    private:
        DDS_Duration_t myRatePeriod;
        enum TOPICS_E myTopicEnum;
};
void*  pthreadToPeriodicPublish(void  * periodic_publish_info);


class RcvCmdRqstIssueRqstRspnsThreadInfo {
    // Info struct for RcvCmdRqstIssueRqstRspnsThread
    // (tms Microgrid Standard section 4.9.2.2)
    // Receives command and issues tms.RequestResponse Topic
    public:
        RcvCmdRqstIssueRqstRspnsThreadInfo(enum TOPICS_E topicEnum);
        std::string me();
        enum TOPICS_E topic_enum();

        DDSDynamicDataReader * reader;
		bool * run_flag;
    private:
        enum TOPICS_E myTopicEnum;
};
void*  pthreadToRcvCmdRqstIssueRqstRspns(void  * waitsetReaderInfo);


class ReaderThreadInfo {
    // holds waitset info needed for the Reader waitset processing thread
    public:
        ReaderThreadInfo(enum TOPICS_E topicEnum);
        std::string me();
        enum TOPICS_E topic_enum();

        DDSDynamicDataReader * reader;
		bool * run_flag;
    private:
        enum TOPICS_E myTopicEnum;
};
void*  pthreadToProcReaderEvents(void  * readerThreadInfo);


class WriterEventsThreadInfo {
    // Optional - for topics you wish to monitor writer status events 
    // Only triggers on writer event - refer to enum DDS_StatusKind
    // related to Writer/Reader entities
    // This struct holds info needed for the pthread for
    // writer waitset events (no data) processing 
    public:
        WriterEventsThreadInfo(enum TOPICS_E topicEnum);
        std::string me();
        enum TOPICS_E topic_enum();

        DDSDynamicDataWriter * writer;
		bool * run_flag;
    private:
        enum TOPICS_E myTopicEnum;
};
void*  pthreadToProcWriterEvents(void  * writerEventsThreadInfo);

#endif