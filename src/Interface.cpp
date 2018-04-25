#include "../includes/Interface.hpp"

Interface::Interface(){

}

Interface::~Interface(){}

void Interface::mainMenu(){
    std::cout << "MAIN MENU" << std::endl;
    std::cout <<"1. Make C++ Project\n2. Options\n3. Quit\n\n==>";
    std::cin >> this->_menuChoice;
}

void Interface::cDirMsg(){
    std::cout << "\nCreating Project Directories...";
}

void Interface::cFilesMsg(){
    std::cout << "\nCreating Project Files...";
}

void Interface::gitMenu(){
    std::cout << "Would you like to initialize git?";
    std::cout <<"1. init\n2. init and add files\n3.init, add files and initial commit\n";
    std::cout << "==>";
    std::cin >> this->_gitMenu;
}
