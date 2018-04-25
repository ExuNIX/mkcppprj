#include "../includes/Core.hpp"

Core::Core(){
    this->_isRunning = true;
}

Core::~Core(){}

/* ---------- functions ---------- */

// Creates Project's Directories
void Core::createDirs(){
    _itf.cDirMsg();
    system("mkdir {bin,doc,includes,lib,src,test}"); 
}

// Create Project's Files
void Core::createFiles(){
    _itf.cFilesMsg();
    system("touch src/main.cpp");
    system("touch doc/README.md && touch doc/AUTHORS && touch doc/VERSION");
    system("cp /home/lycaeum/Code/Cpp/CppResources/gpl-2.0.txt doc/LICENSE.txt");
    system("cp /home/lycaeum/Code/Cpp/CppResources/Makefile ./");
    system("ln -s doc/README.md ./README.md");
}

void Core::gitInit(){
    _itf.gitMenu();
    int gitMenu = _itf.getGitMenuChoice();
    switch (gitMenu){
        case 1:
            system("git init");
            break;
        case 2:
            system("git init && git add .");
            break;
        case 3:
            system("git init && git add . && git commit -m \"Initial Commit\"");
            break;
        default:
            break;
    }
}

void Core::mainRun(){
    int mMenu;
    while (this->_isRunning == true){
        _itf.mainMenu();
        mMenu = _itf.getMenuChoice();
        switch(mMenu){
            case 1:
                this->createDirs();
                this->createFiles();
                this->gitInit();
                break;
            case 2:
                break;
            case 3:
                this->_isRunning = false;
                break;
            default:
                break;
        }
    }
}
