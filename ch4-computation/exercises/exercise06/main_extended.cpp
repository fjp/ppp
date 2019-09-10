#include "std_lib_facilities.h"


vector<string> stringDigits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int convert(string digit)
{
    for (int i = 0; i < stringDigits.size(); ++i)
    {
        if (d == digit)
            return i;
    }
    cout << "Error: digit not in vector\n";
    return -1;
}

string convert(int digit)
{
    if (0 <= digit && digit <= 9)
    {
        return stringDigits[digit];
    }
    else
    {
        cout << "Error: digit not in vector\n";
        return "";
    }
}


// Convert spelled-out digits in both directions
int main()
{
    
    
    cout << "Enter digits from 0 to 9 (either as string or integer) which will be converted to (spelled-out) digits (follwed by 'Enter')\n";
    
    string digit;
    int value;
    bool validinput {true};
    while (validinput)
    {
        if (cin >> value)
        {
            cout << convert(value) << '\n';
        }
        else
        {
            cin.clear(); // To use cin again after a failed read, you need to use a function call "cin.clear();" to "clear" it.
            cin >> digit;
            if (digit == "|")
                validinput = false;
            else
                cout << convert(digit) << '\n';
        }
        
    }
    
    return 0;
}
