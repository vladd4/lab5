#include "classes.h"

Tnumber::Tnumber() {
    l_digit = 0;
    f_digit = 0;
};
Tnumber::~Tnumber() {};

TintNumber::TintNumber() {
    int_number = 0;
};
TintNumber::TintNumber(int num) :Tnumber() {
    int_number = num;
}
TintNumber::~TintNumber() {};
int TintNumber::getNumber() {
    return int_number;
}
int TintNumber::getFirst() {
    string str = to_string(this->int_number);
    int_number >= 0 ? str = str.substr(0, 1) : str = str.substr(1, 2);

    f_digit = stoi(str);
    return f_digit;
}
int TintNumber::getLast() {
    string str = to_string(this->int_number);
    str = str.substr(str.length() - 1);
    f_digit = stoi(str);
    return f_digit;
}

TrealNumber::TrealNumber() {
    real_number = 0;
};
TrealNumber::TrealNumber(float num) :Tnumber() {
    real_number = num;
}
TrealNumber::~TrealNumber() {};
float TrealNumber::getNumber() {
    return real_number;
}
int TrealNumber::getFirst() {
    stringstream s;
    s << real_number;
    string str = s.str();
    str = str.substr(0, 1);
    f_digit = stoi(str);
    return f_digit;
}
int TrealNumber::getLast() {
    stringstream s;
    s << real_number;
    string str = s.str();
    str = str.substr(str.length() - 1);
    f_digit = stoi(str);
    return f_digit;
}