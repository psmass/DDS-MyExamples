#ifndef tmsCommPatterns_h
#define tmsCommPatterns_h

#include "tmsTopicEnum.h"
#include "tmsTestExample.h"

/* This Interface provides threads for tms Communications Patterns
   (tms Microgrid Standard section 4.9.2)

   All Patterns monitor for Status conditions (refer to enum DDS_StatusKind). 
   The ChangeState pattern also monitors Guard conditions to trigger a write.
   The Request/reply and read will monitor On Data Available (read) and then write. 
*/

class PeriodicPublishThreadInfo {
    // Info struct for PeriodicPublishThread (Heartbeat or other status data flow pattern)
    // (tms Microgrid Standard section 4.9.2.1 - Status Flow Pattern)
    // After enabled will send topic at a fixed rate
    // ** NOTE ** This pattern to be deprecated in favor of ChangeStatePublish pattern
    // as soon as I figure out how to implement a DDS Guard Conditon:-)
    public:
        PeriodicPublishThreadInfo(enum TOPICS_E topicEnum, DDS_Duration_t ratePeriod);
        std::string me();  // returns my name from global name array indexed by topic_enum
        DDS_Duration_t pubRatePeriod();
        enum TOPICS_E topic_enum();

        DDSDynamicDataWriter * writer;
        DDS_DynamicData * periodicData;
        bool enabled;
    private:
        DDS_Duration_t myRatePeriod;
        enum TOPICS_E myTopicEnum;
};
void*  pthreadToPeriodicPublish(void  * periodic_publish_info);

class ChangeStatePublishThreadInfo {
    // Info struct for Change of State PublishThread 
    // (tms Microgrid Standard section 4.9.2.1 Status Flow)
    // This pattern is a broader version of the periodic publish pattern
    // Here a trigger or DDS guard condition is triggered externally which 
    // unblocks the thread
    // After enabled will send topic at a fixed rate
    public:
        ChangeStatePublishThreadInfo(enum TOPICS_E topicEnum);  // pass in trigger event
        std::string me();  // returns my name from global name array indexed by topic_enum
        enum TOPICS_E topic_enum();

        DDSDynamicDataWriter * writer;
        bool enabled;
    private:
        enum TOPICS_E myTopicEnum;
};
void*  pthreadToChangeStatePublish(void  * periodic_publish_info);

class RcvCmdRqstIssueRqstRspnsThreadInfo {
    // Info struct for RcvCmdRqstIssueRqstRspnsThread
    // (tms Microgrid Standard section 4.9.2.2 - Request/Response Pattern)
    // State machine to Receive a command request, issue a tms.RequestResponse
    // and respond to the request (likely change the state of data associated
    // with a topic and trigger a change - Opposite data patter to IssueCmdRqst)
    public:
        RcvCmdRqstIssueRqstRspnsThreadInfo(enum TOPICS_E topicEnum);
        std::string me();
        enum TOPICS_E topic_enum();

        DDSDynamicDataReader * reader;
    private:
        enum TOPICS_E myTopicEnum;
};
void*  pthreadToRcvCmdRqstIssueRqstRspns(void  * waitsetReaderInfo);

class IssueCmdRqstThreadInfo {
    // Info struct for IssueCmdRqstThread
    // (tms Microgrid Standard section 4.9.2.2 - Request/Response Pattern)
    // State machine to issue a request recceive response & Requested info
    // (opposite pattern to RcvCmdRqstIssueRqstRspns)
    public:
        IssueCmdRqstThreadInfo(enum TOPICS_E topicEnum);
        std::string me();
        enum TOPICS_E topic_enum();

        DDSDynamicDataReader * reader;
    private:
        enum TOPICS_E myTopicEnum;
};
void*  pthreadToIssueCmdRqst(void  * waitsetReaderInfo);

class ReaderThreadInfo {
    // holds waitset info needed for the Reader waitset processing thread
    public:
        ReaderThreadInfo(enum TOPICS_E topicEnum);
        std::string me();
        enum TOPICS_E topic_enum();

        DDSDynamicDataReader * reader;
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
    private:
        enum TOPICS_E myTopicEnum;
};
void*  pthreadToProcWriterEvents(void  * writerEventsThreadInfo);

#endif