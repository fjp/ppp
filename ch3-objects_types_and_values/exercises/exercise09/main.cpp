#include "std_lib_facilities.h"

int main()
{
    cout << "Enter a number from 0 to 4 as a string, e.g. 'zero' (followed by 'Enter')\n";
    string val;
    cin >> val;

    int digit = -1;
    if ("zero" == val)
    {
        digit = 0;
    }
    else if ("one" == val)
    {
        digit = 1;
    }
    else if ("two" == val)
    {
        digit = 2;
    }
    else if ("three" == val)
    {
        digit = 3;
    }
    else if ("four" == val)
    {
        digit = 4;
    }

    if (-1 != digit)
    {
        cout << "The spelled-out number " << val << " corresponds to " << digit << ".\n";
    }
    else
    {
        cout << "not a number I know\n";
    }
        
    return 0;
}
