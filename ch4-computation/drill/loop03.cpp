#include "std_lib_facilities.h"

int main() {

    cout << "Enter two integer values separated by a space (followed by 'Enter'):\n";

    int val1, val2;
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
    }

    return 0;
}
