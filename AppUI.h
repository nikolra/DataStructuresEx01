
#ifndef DATASTRUCTURESEX01_APPUI_H
#define DATASTRUCTURESEX01_APPUI_H

#include <iostream>
#include <fstream>
#include "Algorithm.h"
#include "RecViaStackAlgorithm.h"
#include "LoopAlgorithm.h"
#include "RecAlgorithm.h"
#include "WrongInputException.h"

using namespace std;


class AppUI {

public:
    AppUI(){}
    void Run();
private:
    void checkInput(int* o_Arr, int i_Size);
    char* stringToCharArray(string& s);
    int readInt();
    void timeCount();

};


#endif DATASTRUCTURESEX01_APPUI_H
