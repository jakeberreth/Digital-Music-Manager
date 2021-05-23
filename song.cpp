//song.cpp

#include "song.hpp"

Song::Song(std::string song, std::string artist, std::string album, std::string genre) {
    set_song_name(song);
    set_artist_name(artist);
    set_album_name(album);
    set_genre_name(genre);
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