//manager.cpp

#include "manager.hpp"

#include <vector>

Manager::Manager() {
    //constructor
}

Playlist Manager::get_song_list() {
    return songList;
}

void Manager::set_song_list(Playlist newSongList) {
    songList = newSongList;
}

void Manager::display_menu() {
    std::cout << "Welcome to the Digital Music Manager!" << std::endl 
            << "Available Commands: " << std::endl
            << "menu | add | exit\n\n";
    std::cout << "a\n";
}

void Manager::application_loop() {
    bool exit = false, inLoop = false;
    char line[128], command[32], param1[32], param2[32], param3[32], param4[32], param5[32], param6[32];

    //load songs into songList
    Node* pHead = 0;
    Playlist allSongs(pHead);
    set_song_list(allSongs);
    std::cout << "a\n";
    load_songs(songList);

    while(!exit) {
        //get command
        std::cout << "COMMAND: ";
        fgets(line, 128, stdin);
        line[strlen(line)-1] = 0; 

        //check if nothing was entered
        if (line[0]==0) 
            continue;

        //break line into parts
        sscanf(line, "%s %s %s %s %s %s %s", command, param1, param2, param3, param4, param5, param6);

        //convert c strings to c++ strings
        std::string cmd(command);
        std::string p1(param1);
        std::string p2(param2);
        std::string p3(param3);
        std::string p4(param4);
        std::string p5(param5);
        std::string p6(param6);

        if(cmd.compare("menu")==0)
            display_menu();
        if(cmd.compare("exit")==0)
            exit = true;
        if(cmd.compare("add")==0)
            insert_song(p1, p2, p3, p4, p5, p6);

    }
}

void Manager::load_songs(Playlist songList) {
    std::fstream inputFile;
    std::string line;
    std::string delim = ",";
    std::vector<std::string> songPack;
    size_t position = 0;
    std::cout << "a\n";
    inputFile.open("songs.csv", std::ios::in);
    while(inputFile >> line) {
        while((position = line.find(delim)) != std::string::npos) {
            songPack.push_back(line.substr(0, position));
            line.erase(0, position + delim.length());
        }
        position = line.find(" ");
        songPack.push_back(line.substr(0, position));
        Song newSong(songPack);
        Node newNode(newSong);
        insert_song(newNode, songList, "end", "na");
        //std::cout << parts[0] << parts[1] << parts[2] << parts[3] << std::endl;
    }
}

void Manager::insert_song(Node newNode, Playlist songs, std::string relative, std::string relSong) {
    if(relative.compare("end")==0) 
        insert_song_end(newNode, songs);
}

void Manager::insert_song_end(Node newNode, Playlist songs) {
    if(songs.get_p_head() == 0) {
        //empty list
        songs.set_p_head(&newNode);
    }
    Node* traverse = songs.get_p_head();
    while(traverse->get_next()) {
        traverse = traverse->get_next();
    }

    traverse->set_next(&newNode);




}