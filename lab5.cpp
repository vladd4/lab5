#include "classes.h"
#include "func.h"

int main()
{
    srand(time(NULL));
    int n = 0;
    int m = 0;

    input_info(n, m);
  
    TintNumber* int_nums = new TintNumber[n];
    for (int i = 0; i < n; i++) {
        int_nums[i] = generate_int(50);
        cout << int_nums[i].getNumber() << endl;
    }
    sum_of_digits(n, int_nums);

    TrealNumber* real_nums = new TrealNumber[m];
    for (int i = 0; i < m; i++) {
        real_nums[i] = generate_float(30);
        cout << real_nums[i].getNumber() << endl;
    }
    sum_of_digits(m, real_nums);

    delete[] int_nums;
    delete[] real_nums;
}
