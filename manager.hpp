#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "globals.cpp"

class Manager {
public:
    Manager();
    void display_menu();
    void application_loop();

private:
    void add_song(std::string song, std::string artist, std::string album, std::string genre);
};

#endif