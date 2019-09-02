#include "std_lib_facilities.h"

int main() {
    double val1, val2;
    while (cin >> val1 >> val2)
    {
        if (val1 == val2)
        {
            cout << "The numbers are equal.\n";
        }
        else if (val1 < val2)
        {
            cout << "The smaller value is: " << val1 << '\n';
            cout << "The larger value is: " << val2 << '\n';
        }
        else
        {
            cout << "The smaller value is: " << val2 << '\n';
            cout << "The larger value is: " << val1 << '\n';
        }
        if (val1 - val2 < 1.0/100 || val2 - val1 < 1.0/100)
        {
            cout << "The numbers are almost equal.\n";
        }
    }

    return 0;
}
