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

class ReaderThreadInfo {
    // holds waitset info needed for the Reader waitset processing thread
    // C'tor has Echo Response flag to handle Rcv'd Command Requests and all
    // Response 
    public:
        ReaderThreadInfo(enum TOPICS_E topicEnum, bool echoResponse = false);
        std::string me();
        enum TOPICS_E topic_enum();

        DDSDynamicDataReader * reader;
    private:
        enum TOPICS_E myTopicEnum;
        bool echo_response; // used for received request topics
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

class PeriodicWriterThreadInfo {
    // Info struct for PeriodicPublishThread (Heartbeat or other status data flow pattern)
    // (tms Microgrid Standard section 4.9.2.1 - Status Flow Pattern)
    // After enabled will send topic at a fixed rate
    public:
        PeriodicWriterThreadInfo(enum TOPICS_E topicEnum, DDS_Duration_t ratePeriod);
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
void*  pthreadPeriodicWriter(void  * periodic_writer_thread_info);

class OnChangeWriterThreadInfo {
    // Info struct for Change of State PublishThread 
    // (tms Microgrid Standard section 4.9.2.1 Status Flow)
    // This pattern is a broader version of the periodic publish pattern
    // Here a trigger or DDS guard condition is triggered externally which 
    // unblocks the thread
    // After enabled will send topic at a fixed rate
    public:
        OnChangeWriterThreadInfo(enum TOPICS_E topicEnum, DDSGuardCondition *guard_condition);  // pass in trigger event
        std::string me();  // returns my name from global name array indexed by topic_enum
        enum TOPICS_E topic_enum();
        DDSGuardCondition* my_guard_condition();

        DDSDynamicDataWriter * writer;
        DDS_DynamicData * changeStateData;
        bool enabled;
    private:
        enum TOPICS_E myTopicEnum;
        DDSGuardCondition *myGuardCondition;
};
void*  pthreadOnChangeWriter(void  * on_change_writer_thread_info);


#endif