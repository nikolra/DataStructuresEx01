//
// Created by Nikol Rafalovich on 14/11/2021.
//

#ifndef DATASTRUCTURESEX01_APPUI_H
#define DATASTRUCTURESEX01_APPUI_H

using namespace std;


class AppUI {

private:

    bool checkInput(int* o_Arr, int i_Size);
    char* stringToCharArray(string& s);
    int readInt();
    void timeCount();
public:
    void Run();
};


#endif //DATASTRUCTURESEX01_APPUI_H
