#ifndef __INTERFACE_H__
#define __INTERFACE_H__

#include <iostream>

class Interface
{
    public:
        // CTOR & DTOR
        Interface();
        ~Interface();
        
        // Functions
        void mainMenu();
        void cDirMsg();
        void cFilesMsg();
        void gitMenu();

        // Getters
        inline int getMenuChoice(){return this->_menuChoice;}
        inline int getGitMenuChoice(){return this->_gitMenu;}
    private:
        int _menuChoice;
        int _gitMenu;

};

#endif
