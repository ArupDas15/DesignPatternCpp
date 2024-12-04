#ifndef logger_h
#define logger_h

#include <string>
#include <mutex>
using namespace std;

class Logger {
    static int ctr;
    static Logger *loggerInstance;
    static mutex mtx;
    Logger();
    // NOTE: From C++-11, it is possible to keep the copy contructor and copy assignment operator in the public section by disabling their usage using the delete operator.
    Logger(const Logger&);
    Logger operator=(const Logger &);

    public:
        static Logger* getLogger();
        void Log(string msg);
        /*
        Logger(const Logger&) = delete;
        Logger operator=(const Logger &) = delete;
        */
};
#endif