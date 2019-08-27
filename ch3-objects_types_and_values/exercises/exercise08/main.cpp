#include "std_lib_facilities.h"

int main()
{
    cout << "Enter an integer value (followed by 'Enter')\n";
    int val;
    cin >> val;

    if (0 == val % 2)
    {
        cout << "The value " << val << " is even.\n";
    }
    else
    {
        cout << "The value " << val << " is odd.\n";
    }

    return 0;
}
