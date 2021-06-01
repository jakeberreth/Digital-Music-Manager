//song.cpp

#include "song.hpp"

Song::Song(std::vector<std::string>& songPack) {
    songName = songPack[0];
    artistName = songPack[1];
    albumName = songPack[2];
    genreName = songPack[3];
}

std::string Song::get_song_name() {
    return songName;
}

void Song::set_song_name(std::string name) {
    songName = name;
}

std::string Song::get_album_name() {
    return albumName;
}

void Song::set_album_name(std::string name) {
    albumName = name;
}

std::string Song::get_artist_name() {
    return artistName;
}

void Song::set_artist_name(std::string name) {
    artistName = name;
}

std::string Song::get_genre_name() {
    return genreName;
}

void Song::set_genre_name(std::string name) {
    genreName = name;
}