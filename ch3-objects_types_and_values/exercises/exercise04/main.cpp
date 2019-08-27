#include "std_lib_facilities.h"


int main()
{
    cout << "Enter two integer values (followed by 'Enter')\n";
    int val1, val2;
    cin >> val1 >> val2;

    int smaller, larger;
    bool same = false;
    if (val1 < val2)
    {
        smaller = val1;
        larger = val2;
    } else {
        //if (val1 == val2)
        //{
        //    same = true;
        //}
        smaller = val2;
        larger = val1;
    }

    int sum = val1 + val2;
    int difference = val1 - val2;
    int product = val1 * val2;
    int ratio = val1/val2;

    cout << "smaller = " << smaller << "\n"
        << "larger = " << larger  << "\n"
        << "sum = " << sum << "\n"
        << "difference = " << difference << "\n"
        << "product = " << product << "\n"
        << "ratio = " << ratio << "\n";

    return 0;
}
