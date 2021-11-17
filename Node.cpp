//
// Created by Nikol Rafalovich on 17/11/2021.
//

#include "Node.h"


void Node::InsertAfter(Node* nodeToInsert)
{
    nodeToInsert -> next = this -> next;
    this -> next = nodeToInsert;
}

Node* Node::DeleteAfter()
{
    Node* nodeToDelete = this -> next;

    if(nodeToDelete == nullptr)
        return nullptr;
    this -> next = nodeToDelete -> next;
    return nodeToDelete;
}
