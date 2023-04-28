#pragma once
#include <iostream>
#include <string>
#include <sstream>  
using namespace std;

class Tnumber {
protected:
    int f_digit;
    int l_digit;
public:
    Tnumber();
    ~Tnumber();
    virtual int getFirst() = 0;
    virtual int getLast() = 0;
};

class TintNumber : public Tnumber {
    int int_number;
public:
    TintNumber();
    TintNumber(int num);
    ~TintNumber();
    int getNumber();
    int getFirst() override;
    int getLast() override;
};

class TrealNumber : public Tnumber {
    float real_number;
public:
    TrealNumber();
    TrealNumber(float num);
    ~TrealNumber();
    float getNumber();
    int getFirst() override;
    int getLast() override;
};