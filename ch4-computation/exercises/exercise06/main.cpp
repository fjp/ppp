#include "std_lib_facilities.h"

// Convert spelled-out digits
int main()
{
    vector<string> stringDigits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cout << "Enter integer digits from 0 to 9 which will be converted to spelled-out digits (follwed by 'Enter')\n";
    
    int value;
    while (cin >> value)
    {
        cout << stringDigits[value] << '\n';
    }
    
    return 0;
}
