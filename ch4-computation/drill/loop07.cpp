#include "std_lib_facilities.h"

int main() {
    bool first = true;
    double val;
    string unit;
    while (cin >> val >> unit)
    {
        if (first == true)
        {
            first = false;
            smallest = val;
            largest = val;
        }
        if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
        {
            cout << val << unit '\n';
            
            if (val < smallest)
            {
                cout << "The smalles so far.\n";
            }
            if (val > largest)
            {
                cout << "The largest so far\n";
            }
        }
    }

    return 0;
}
