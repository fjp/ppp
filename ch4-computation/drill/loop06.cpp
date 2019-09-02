#include "std_lib_facilities.h"

int main() {
    bool first {true};
    double val {0.0};
    double smallest {0.0};
    double largest {0.0};
    string unit {" "};

    cout << "Enter a double value (followed by 'Enter'):\n";
    while (cin >> val)
    {
        cout << val;
        if (first == true)
        {
            first = false;
            smallest = val;
            largest = val;
            cout << " is the first value and therefore the smallest and largest so far.\n";
        }
        else if (val < smallest)
        {
            cout << " the smallest so far.\n";
            smallest = val;
        }
        else if (val > largest)
        {
            cout << " the largest so far.\n";
            largest = val;
        }
        else
        {
            cout << '\n';
        }
    }

    return 0;
}
