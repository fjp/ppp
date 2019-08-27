#include "std_lib_facilities.h"

int main()
{
    cout << "Enter three integer values (followed by 'Enter')\n";
    int val1, val2, val3;
    cin >> val1 >> val2 >> val3;

    int smallest, middle, largest;

    if (val1 < val2)
    {
        smaller = val1;
        larger = val2;
    } else {
        smaller = val2;
        larger = val1;
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

    cout << smallest << ", " << middle << ", " << largest "\n"

    return 0;
}
