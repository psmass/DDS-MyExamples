#ifndef tmsCommPatterns_h
#define tmsCommPatterns_h

/* This Interface provides threads for tms Communications Patterns
*/
class WriterEventsThreadInfo {
    // Optional for topics you wish to monitor events for
    // This struct holds info needed for the pthread for
    // writer waitset events (no data) processing 
    public:
        WriterEventsThreadInfo(std::string writerName);
        std::string me();

        DDSDynamicDataWriter * writer;
		bool * run_flag;
    private:
        std::string myName;
};
void*  pthreadToProcWriterEvents(void  * writerEventsThreadInfo);


class WaitsetReaderInfo {
    // holds waitset info needed for the Reader waitset processing thread
    public:
        WaitsetReaderInfo(std::string readerName);
        std::string me();

        DDSDynamicDataReader * reader;
		bool * run_flag;
    private:
        std::string myName;
};
void*  pthreadToProcReaderEvents(void  * waitsetReaderInfo);

class RcvCmdRqstIssueRqstRspnsThreadInfo {
    // Info struct for RcvCmdRqstIssueRqstRspnsThread
    // Receives command and issues tms.RequestResponse Topic
    public:
        RcvCmdRqstIssueRqstRspnsThreadInfo(std::string readerName);
        std::string me();

        DDSDynamicDataReader * reader;
		bool * run_flag;
    private:
        std::string myName;
};
void*  pthreadToRcvCmdRqstIssueRqstRspns(void  * waitsetReaderInfo);

class PeriodicPublishThreadInfo {
    // Info struct for PeriodicPublishThread
    // After enabled will send topic
    public:
        PeriodicPublishThreadInfo(std::string readerName);
        std::string me();

        DDSDynamicDataWriter * writer;
		bool * run_flag;
    private:
        std::string myName;
        int rate;
        bool enabled;
};
void*  pthreadToPeriodicPublish(void  * periodic_publish_info);

#endif