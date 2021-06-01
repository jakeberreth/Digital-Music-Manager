#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "globals.cpp"
#include "playlist.hpp"

class Manager {
public:
    Manager();
    void display_menu();
    void application_loop();
    Playlist get_song_list();
    void set_song_list(Playlist newSongList);

private:
    void insert_song(Node newNode, Playlist songs, std::string relative, std::string relSong);
    void insert_song_end(Node newNode, Playlist songs);
    void load_songs(Playlist allSongs);
    Playlist songList;
};

#endif