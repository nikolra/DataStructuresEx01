//
// Created by Nikol Rafalovich on 17/11/2021.
//

#ifndef DATASTRUCTURESEX01_LOOPALGORITHM_H
#define DATASTRUCTURESEX01_LOOPALGORITHM_H


#include "Algorithm.h"
#include <cwchar>
#include <iostream>


class LoopAlgorithm : public Algorithm {

public:
    void RunAlgorithm(int * arr, int size, int x, int y) override;
    string GetName() override {return "Iterative";}

};


#endif DATASTRUCTURESEX01_LOOPALGORITHM_H
