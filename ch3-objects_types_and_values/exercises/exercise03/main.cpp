#include "std_lib_facilities.h"


int main()
{
    cout << "Enter a number of miles (followed by 'Enter'):\n";
    double miles;
    cin >> miles;
    const double kilometersToMile = 1.609;
    if (1.0 == miles)
    {
        cout << miles << " mile is equal to " << miles * kilometersToMile << " kilometers.\n";
    }
    else {
        double kilometers = miles * kilometersToMile;
        if (1.0 == kilometers) {
            cout << miles << " miles are equal to " << kilometers << " kilometer.\n";
        }
        else {
            cout << miles << " miles are equal to " << kilometers << " kilometers.\n";
        }
    }

    return 0;
}
