#include "std_lib_facilities.h"

int main() {
    int val1, val2;
    while (cin >> val1 >> val2)
    {
        if (val1 == val2)
        {
            cout << "The values are equal.\n";
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
    }

    return 0;
}
