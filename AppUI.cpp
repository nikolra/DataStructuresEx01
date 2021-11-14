//
// Created by Nikol Rafalovich on 14/11/2021.
//

#include <iostream>
#include <fstream>
#include "AppUI.h"
#include "cmake-build-debug/WrongInputException.h"

using namespace std;

void AppUI::Run()
{
    int* arr;

    int size = readInt();
    arr = new int [size];
    checkInput(arr, size);
    int num = readInt();


}

int AppUI::readInt()
{
    string input;
    char* delim = new char(' ');
    getline(cin, input);//reads the size of the array
    char* token = strtok(stringToCharArray(input), delim);
    if(token == nullptr)//to little numbers
        throw WrongInputException("wrong input");
    int num = stoi(input);
    token = strtok(nullptr, delim);
    if(token != nullptr)//to many numbers
        throw WrongInputException("wrong input");

    return num;
}

bool AppUI::checkInput(int* o_Arr, int i_Size)
{
    string input;
    getline(cin, input);
    char* delim = new char(' ');
    char* token = strtok(stringToCharArray(input), delim);
    if(token == nullptr)//to little numbers
        throw WrongInputException("wrong input");
    for(int i = 0; i < i_Size; i++)
    {
        if(token == nullptr)//to little numbers
            throw WrongInputException("wrong input");
        string* strTok = new string (token);
        o_Arr[i] = stoi(*strTok);
        token = strtok(nullptr, delim);
    }

    if(strtok(nullptr, delim) != nullptr)//to many numbers
        throw WrongInputException("wrong input");
}

char* AppUI::stringToCharArray(string& s)
{
    char* res = new char[s.length()];
   for(int i = 0; i < s.length(); i++)
   {
       res[i] = s[i];
   }

   return res;
}

void AppUI::timeCount()
{
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    //fun();// TODO::Here you put the name of the function you wish to measure
    auto end = chrono::high_resolution_clock::now();
    // Calculating total time taken by the program.
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    ofstream myfile("Measure.txt"); // The name of the file
    myfile << "Time taken by function <name-of-fun> is : " << fixed << time_taken << setprecision(9);
    myfile << " sec" << endl;
    myfile.close();
}
