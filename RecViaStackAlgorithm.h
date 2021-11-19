
#ifndef DATASTRUCTURESEX01_RECVIASTACKALGORITHM_H
#define DATASTRUCTURESEX01_RECVIASTACKALGORITHM_H


#include "Algorithm.h"
#include <iostream>
#include "Stack.h"
class RecViaStackAlgorithm : public Algorithm {

public:
    void RunAlgorithm(int * arr, int size, int x, int y) override;
    string GetName() override {return "Recursion implemented using stack";}
};


#endif DATASTRUCTURESEX01_RECVIASTACKALGORITHM_H
