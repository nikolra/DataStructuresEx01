
#ifndef DATASTRUCTURESEX01_ALGORITHM_H
#define DATASTRUCTURESEX01_ALGORITHM_H

#include <iostream>

using namespace std;

class Algorithm {
public:
    virtual string GetName() = 0;
    virtual void RunAlgorithm(int * arr, int size, int x, int y) = 0;
};


#endif DATASTRUCTURESEX01_ALGORITHM_H
