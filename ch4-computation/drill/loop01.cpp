#include "std_lib_facilities.h"

int main() {

    cout << "Enter two integer values separated by a space (followed by 'Enter'):\n";

    int val1, val2;
    while (cin >> val1 >> val2)
    {
        cout << val1 << '\t' << val2 << '\n';
    }

    return 0;
}
