#include "std_lib_facilities.h"

int main()
{
    cout << "Enter three strings (followed by 'Enter')\n";
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    string smallest, middle, largest;

    if (str1 < str2)
    {
        smaller = str1;
        larger = str2;
    } else {
        smaller = str2;
        larger = str1;
    }
    
    // Put str3 in the correct place
    if (str3 <= smallest)
    {
        middle = smallest;
        smallest = val3;
    }
    else if (smallest < str3 && str3 < largest)
    {
        middle = val3;
    }
    else if (largest <= str3)
    {
        middle = largest;
        largest = str3;
    }

    cout << smallest << ", " << middle << ", " << largest "\n"

    return 0;
}
