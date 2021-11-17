//
// Created by Nikol Rafalovich on 14/11/2021.
//

#include "SumAlgorithms.h"
#include "SumAlgorithms.h"
#include "Stack.h"
#include <iostream>

using namespace std;

void SumAlgorithms::LoopFunction(int * arr, int size, int x)
{
    int i = 0, j = 0;
    for (i = 0; i < size; i++)
    {
        for (j = i;j < size; j++)
        {
            if (arr[i]+arr[j] == x)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

void SumAlgorithms::RecFunction(int* arr, int n, int x, int y)
{
    if (n == 1 && y != 0)
    {
        if (x == arr[0] + y)
        {
            cout << y <<" " << arr[0] << endl;
        }
    }
    else if (n == 1 && y == 0)
    {
        return;
    }
    else if (n != 1 && y !=0)
    {
        if (x == arr[n-1] + y)
        {
            cout << y << " " << arr[n-1] << endl;
        }
        RecFunction(arr, n - 1, x, y);
    }
    else if (n != 1 && y == 0)
    {
        RecFunction(arr, n - 1, x, arr[n-1]);
        RecFunction(arr, n - 1, x, 0);
    }
}

void SumAlgorithms::RecViaStackFunction(int* arr, int n, int x, int y)
{
    Stack recStack;

    ItemType curr = ItemType(n, y);
    ItemType next;
    recStack.Push(curr);

    while(!recStack.IsEmpty())
    {
        curr = recStack.Pop();
        if (curr.GetN() == 1 && curr.GetY() != 0)
        {
            if (x == arr[0] + curr.GetY())
            {
                cout << curr.GetY() << " " << arr[0] << endl;
            }
        }
        else if (curr.GetN() != 1 && curr.GetY() !=0)
        {
            if (x == arr[curr.GetN()-1] + curr.GetY())
            {
                cout << curr.GetY() << " " << arr[curr.GetN()-1] << endl;
            }

            next = ItemType(curr.GetN() - 1, curr.GetY());
            recStack.Push(next);
        }
        else if (curr.GetN() != 1 && curr.GetY() == 0)
        {
            next = ItemType(curr.GetN() - 1, arr[curr.GetN()-1]);
            recStack.Push(next);
            next = ItemType(curr.GetN() - 1, 0);
            recStack.Push(next);
        }
    }
}