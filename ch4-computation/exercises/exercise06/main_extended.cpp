#include "std_lib_facilities.h"


vector<string> stringDigits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string input {"Enter digits from 0 to 9 (either as string or integer) which will be converted to (spelled-out) digits (followed by 'Enter')\n"};

int convertStringToInt(string digit)
{
    for (int i = 0; i < stringDigits.size(); ++i)
    {
        if (stringDigits[i] == digit)
            return i;
    }
    cout << "Error: digit not in vector\n";
    cout << input;
    return -1;
}

string convertIntToString(int digit)
{
    if (0 <= digit && digit <= 9)
    {
        return stringDigits[digit];
    }
    else
    {
        cout << "Error: digit not in vector\n";
        cout << input;
        return " ";
    }
}


// Convert spelled-out digits in both directions
int main()
{
    
    
    cout << input;
    
    string digit;
    int value;
    bool validinput {true};
    while (validinput)
    {
        if (cin >> value)
        {
            string result = convertIntToString(value);
            if (" " != result)
                cout << result << '\n';

        }
        else
        {
            cin.clear(); // To use cin again after a failed read, you need to use a function call "cin.clear();" to "clear" it.
            cin >> digit;
            if (digit == "|")
                validinput = false;
            else
            {
                int result = convertStringToInt(digit);
                if (-1 != result)
                    cout << result << '\n';
            }

        }
        
    }
    
    return 0;
}
