//main.cpp

#include "manager.hpp"
#include "globals.cpp"

int main() {
    //create a manager
    Manager myMusicManager;

    //display menu
    myMusicManager.display_menu();

   std::cout << "a\n";

    //start application loop
    myMusicManager.application_loop();
    

}