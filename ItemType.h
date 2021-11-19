
#ifndef DATASTRUCTURESEX01_ITEMTYPE_H
#define DATASTRUCTURESEX01_ITEMTYPE_H


class ItemType {
private:
    int n;
    int y;

public:

    ItemType(int n, int y) : n(n), y(y) {}
    ItemType() {}
    int GetN(){ return this -> n;}
    int GetY(){ return this -> y;}
    void SetN(int data) {this -> n = data;}
    void SetY(int data) {this -> y = data;}
};


#endif DATASTRUCTURESEX01_ITEMTYPE_H
