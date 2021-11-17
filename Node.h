//
// Created by Nikol Rafalovich on 17/11/2021.
//

#ifndef DATASTRUCTURESEX01_NODE_H
#define DATASTRUCTURESEX01_NODE_H


#include "ItemType.h"

class Node {

private:
    ItemType data;
    Node* next;

public:
    Node(ItemType data,  Node* ptr = nullptr) : next(ptr), data(data) {}

    //~Node();
    void InsertAfter(Node* nodeToInsert);
    Node* DeleteAfter();
    Node* GetNext() { return this -> next;}
    ItemType  GetData() { return this -> data;}
    void SetData(ItemType item) {this -> data = item;}
};


#endif //DATASTRUCTURESEX01_NODE_H
