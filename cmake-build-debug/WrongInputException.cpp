//
// Created by Nikol Rafalovich on 14/11/2021.
//

#include <string>
#include "WrongInputException.h"

WrongInputException::WrongInputException(string message)
{
    this->message = message;
}

string WrongInputException::GetMessage()
{
    return this->message;
}