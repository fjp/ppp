#include "std_lib_facilities.h"

int main()
{
    cout << "Enter three integer values (followed by 'Enter')\n";
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;

    int smallest, middle, largest;

    if (val1 < val2)
    {
        smallest = val1;
        largest = val2;
    } else {
        smallest = val2;
        largest = val1;
    }
    
    // Put val3 in the correct place
    if (val3 <= smallest)
    {
        middle = smallest;
        smallest = val3;
    }
    else if (smallest < val3 && val3 < largest)
    {
        middle = val3;
    }
    else if (largest <= val3)
    {
        middle = largest;
        largest = val3;
    }

    cout << smallest << ", " << middle << ", " << largest << "\n";

    return 0;
}
