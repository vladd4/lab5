#include "func.h"

void sum_of_digits (const int num, TintNumber obj[]) {
    int res = 0;
    for (int i = 0; i < num; i++) {
        res += obj[i].getFirst();
    }
    cout << "Sum of first digits of int numbers is " << res << endl;
}
void sum_of_digits (const int num, TrealNumber obj[]) {
    int res = 0;
    for (int i = 0; i < num; i++) {
        res += obj[i].getLast();
    }
    cout << "Sum of last digits of real numbers is " << res << endl;
}

void input_info(int& n, int& m) {
    cout << "Enter number of int numbers: ";
    cin >> n;
    cout << "Enter number of float numbers: ";
    cin >> m;
}
int generate_int(int num) {
    return rand() % (num - (-10) + 1) + (-10);
}
float generate_float(int num) {
    return (float(rand()) / float((num)) * 0.5);
}