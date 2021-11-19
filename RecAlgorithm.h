
#ifndef DATASTRUCTURESEX01_RECALGORITHM_H
#define DATASTRUCTURESEX01_RECALGORITHM_H


#include "Algorithm.h"
#include <iostream>

class RecAlgorithm : public Algorithm {

public:
    void RunAlgorithm(int * arr, int size, int x, int y) override;
    string GetName() override {return "Recursive";}
};


#endif DATASTRUCTURESEX01_RECALGORITHM_H
