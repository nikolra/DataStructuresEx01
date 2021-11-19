
#ifndef DATASTRUCTURESEX01_STACK_H
#define DATASTRUCTURESEX01_STACK_H


#include "Node.h"
#include "StackExceptions.h"

class Stack {
private:
    Node* top;
public:
    Stack();
    ~Stack();
    void MakeEmpty();
    bool IsEmpty();
    void Push(ItemType item);
    ItemType Pop();
    ItemType Top();

};


#endif DATASTRUCTURESEX01_STACK_H
