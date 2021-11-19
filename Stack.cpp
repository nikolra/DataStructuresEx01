
#include "Stack.h"

Stack::Stack()
{
    this -> top = nullptr;
}

Stack::~Stack()
{
    this -> MakeEmpty();
}

void Stack::MakeEmpty()
{
    Node* temp;
    while(top != nullptr)
    {
        temp = top;
        top = top -> GetNext();
        delete temp;
    }
}

bool Stack::IsEmpty()
{
    return top == nullptr;
}

void Stack::Push(ItemType item)
{
    top = new Node(item, top);
}

ItemType Stack::Pop()
{
    if(this -> IsEmpty())
        throw StackExceptions("The stack is empty. Nothing to pop");
    Node* temp = top;
    ItemType data = top -> GetData();
    top = top -> GetNext();
    delete temp;
    return data;
}

ItemType Stack::Top()
{
    return top -> GetData();
}