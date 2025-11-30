#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

class Fraction {
private:
    int first;
    int second;
public:
    Fraction(int num, int den);
    int ipart() const;
    void display() const;
};
