#ifndef tmsCommPatterns_h
#define tmsCommPatterns_h


class WaitsetWriterInfo {
    // holds waitset info needed for the writer waitset processing thread
    public:
        WaitsetWriterInfo(std::string writerName);
        std::string me();

        DDSDynamicDataWriter * writer;
		bool * run_flag;
    private:
        std::string myName;
};

void*  pthreadToProcWriterEvents(void  * waitsetWriterInfo);


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

#endif