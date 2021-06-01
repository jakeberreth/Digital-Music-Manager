//node.cpp

#include "node.hpp"

Node::Node(Song newSong) {
    song = newSong;
    pNext = 0;
    pPrev = 0;
}

Node* Node::get_next() {
    return pNext;
}

void Node::set_next(Node* next) {
    pNext = next;
}

Node* Node::get_prev() {
    return pPrev;
}

void Node::set_prev(Node* prev) {
    pPrev = prev;
}