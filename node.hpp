//node.hpp

#include "song.hpp"
#include "globals.cpp"

class Node {
public:
    Node() { } //default constructor
    Node(Song newSong);
    Node* get_next();
    void set_next(Node* next);
    Node* get_prev();
    void set_prev(Node* prev);
    int get_id();
    void set_id(int newId);

private:
    Song song;
    int id;
    Node* pNext;
    Node* pPrev;
};