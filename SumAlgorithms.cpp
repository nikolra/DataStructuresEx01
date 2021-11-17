//
// Created by Nikol Rafalovich on 14/11/2021.
//

#include "SumAlgorithms.h"
#include "SumAlgorithms.h"
#include <iostream>

using namespace std;

void SumAlgorithms::loopFunction(int * arr, size_t size, int x)
{
    int i = 0, j = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0;j < size; j++)
        {
            if (arr[i]+arr[j] == x)
            {
                cout << x << endl;
            }
        }
    }
}