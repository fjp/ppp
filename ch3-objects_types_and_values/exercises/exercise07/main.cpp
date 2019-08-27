#include "std_lib_facilities.h"

int main()
{
    cout << "Enter three strings (followed by 'Enter')\n";
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    string smallest, middle, largest;

    if (str1 < str2)
    {
        smallest = str1;
        largest = str2;
    } else {
        smallest = str2;
        largest = str1;
    }
    
    // Put str3 in the correct place
    if (str3 <= smallest)
    {
        middle = smallest;
        smallest = str3;
    }
    else if (smallest < str3 && str3 < largest)
    {
        middle = str3;
    }
    else if (largest <= str3)
    {
        middle = largest;
        largest = str3;
    }

    cout << smallest << ", " << middle << ", " << largest << "\n";

    return 0;
}
