//manager.cpp

#include "manager.hpp"
#include "song.cpp"
#include "globals.cpp"

Manager::Manager() {
    //constructor
}

void Manager::display_menu() {
    std::cout << "Welcome to the Digital Music Manager!" << std::endl 
            << "Available Commands: " << std::endl
            << "menu | add | exit\n\n";
}

void Manager::application_loop() {
    bool exit = false, inLoop = false;
    char line[128], command[32], param1[32], param2[32], param3[32], param4[32];

    while(!exit) {
        //get command
        std::cout << "COMMAND: ";
        fgets(line, 128, stdin);
        line[strlen(line)-1] = 0; 

        //check if nothing was entered
        if (line[0]==0) 
            continue;

        //break line into parts
        sscanf(line, "%s %s %s %s %s", command, param1, param2, param3, param4);

        //convert c strings to c++ strings
        std::string cmd(command);
        std::string p1(param1);
        std::string p2(param2);
        std::string p3(param3);
        std::string p4(param4);

        if(cmd.compare("menu")==0)
            display_menu();
        if(cmd.compare("exit")==0)
            exit = true;
        if(cmd.compare("add")==0)
            add_song(p1, p2, p3, p4);

    }
}

void Manager::add_song(std::string song, std::string artist, std::string album, std::string genre) {
    Song newSong(song, artist, album, genre);

    //add to file
    std::fstream songs;
    songs.open("songs.csv");

    songs << newSong.get_song_name() << ",";
    songs << newSong.get_artist_name() << ",";
    songs << newSong.get_album_name() << ",";
    songs << newSong.get_genre_name() << ",";
}