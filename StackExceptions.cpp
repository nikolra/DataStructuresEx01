

#include "StackExceptions.h"

StackExceptions::StackExceptions(string message)
{
    this->message = message;
}

string StackExceptions::GetMessage()
{
    return this->message;
}