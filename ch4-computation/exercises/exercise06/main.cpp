#include "std_lib_facilities.h"

// Convert spelled-out digits
int main()
{
    vector<string> stringDigits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cout << "Enter integer digits from 0 to 9 which will be converted to spelled-out digits (followed by 'Enter')\n";
    
    int value;
    while (cin >> value)
    {
        if (0 <= value && value <= 9)
            cout << stringDigits[value] << '\n';
        else
            cout << "Error: value must be an integer between 0 and 9.\n";
    }
    
    return 0;
}
