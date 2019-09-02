#include "std_lib_facilities.h"

int main() {
    bool first = true;
    double val;
    while (cin >> val)
    {
        if (first == true)
        {
            first = false;
            smallest = val;
            largest = val;
        }
        cout << val << '\n';
        
        if (val < smallest)
        {
            cout << "The smalles so far.\n";
        }
        if (val > largest)
        {
            cout << "The largest so far\n";
        }
    }

    return 0;
}
