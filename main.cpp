//main.cpp

#include "manager.hpp"
#include "globals.cpp"

int main() {
    //create a manager
    Manager myMusicManager;

    //display menu
    myMusicManager.display_menu();

    //start application loop
    myMusicManager.application_loop();
    

}