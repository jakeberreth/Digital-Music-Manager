//song.hpp

#include "globals.cpp"

class Song {
public:
    Song() { } //default constructor
    Song(std::vector<std::string>& songPack);
    std::string get_song_name();
    void set_song_name(std::string newSong);
    std::string get_album_name();
    void set_album_name(std::string newAlbum);
    std::string get_artist_name();
    void set_artist_name(std::string newArtist);
    std::string get_genre_name();
    void set_genre_name(std::string newGenre);

private:
    std::string songName;
    std::string albumName;
    std::string artistName;
    std::string genreName;
};