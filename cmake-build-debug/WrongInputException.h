//
// Created by Nikol Rafalovich on 14/11/2021.
//

#ifndef DATASTRUCTURESEX01_WRONGINPUTEXCEPTION_H
#define DATASTRUCTURESEX01_WRONGINPUTEXCEPTION_H

#include <exception>

using namespace std;


class WrongInputException : public exception {
private:
    string message;
public:
    WrongInputException(string message);
    string GetMessage();
};


#endif //DATASTRUCTURESEX01_WRONGINPUTEXCEPTION_H
