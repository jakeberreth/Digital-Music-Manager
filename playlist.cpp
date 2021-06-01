//playlist.cpp

#include "playlist.hpp"

Playlist::Playlist(Node* head) {
    pHead = head;
}

Node* Playlist::get_p_head() {
    return pHead;
}

void Playlist::set_p_head(Node* newPHead) {
    pHead = newPHead;
}

