#include "std_lib_facilities.h"

int main()
{
    cout << "Enter two double values (followed by 'Enter')\n";
    double val1, val2;
    cin >> val1 >> val2;

    double smaller, larger;
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

    double sum = val1 + val2;
    double difference = val1 - val2;
    double product = val1 * val2;
    double ratio = val1/val2;

    cout << "smaller = " << smaller << "\n"
        << "larger = " << larger  << "\n"
        << "sum = " << sum << "\n"
        << "difference = " << difference << "\n"
        << "product = " << product << "\n"
        << "ratio = " << ratio << "\n";

    return 0;
}
