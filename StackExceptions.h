//
// Created by Nikol Rafalovich on 17/11/2021.
//

#ifndef DATASTRUCTURESEX01_STACKEXCEPTIONS_H
#define DATASTRUCTURESEX01_STACKEXCEPTIONS_H

#include <exception>
#include <string>

using namespace std;

class StackExceptions : public exception{

private:
    string message;
public:
    StackExceptions(string message);
    string GetMessage();
};




#endif //DATASTRUCTURESEX01_STACKEXCEPTIONS_H
