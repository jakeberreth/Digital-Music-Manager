//song.hpp

#include "globals.cpp"

class Song {
public:
    Song(std::string song, std::string artist, std::string album, std::string genre);
    std::string get_song_name();
    void set_song_name(std::string name);
    std::string get_album_name();
    void set_album_name(std::string name);
    std::string get_artist_name();
    void set_artist_name(std::string name);
    std::string get_genre_name();
    void set_genre_name(std::string name);

private:
    std::string songName;
    std::string albumName;
    std::string artistName;
    std::string genreName;
};