//playlist.hpp

#include "node.hpp"

class Playlist {
public:
    Playlist() { } //default constructor
    Playlist(Node* head);
    Node* get_p_head();
    void set_p_head(Node* newPHead);

private:
    Node* pHead;

};