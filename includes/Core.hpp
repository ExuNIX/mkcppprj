#ifndef __CORE_H__
#define __CORE_H__

#include "Interface.hpp"

class Core{
    public:
        Core();
        ~Core();

        void createDirs();
        void createFiles();
        void gitInit();

        void mainRun();
    private:
        bool _isRunning;
        Interface _itf;
};

#endif
