//
// Created by Nikol Rafalovich on 17/11/2021.
//

#include "StackExceptions.h"

StackExceptions::StackExceptions(string message)
{
    this->message = message;
}

string StackExceptions::GetMessage()
{
    return this->message;
}