#include "std_lib_facilities.h"

// simple program to exercise operators
/*
int main()
{
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
        << "\nn+1 == " << n+1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n
        << "\nhalf of n == " << n/2
        << "\nsquare root of n == " << sqrt(n)
        << '\n'; // another name for newline (“end of line”) in output
}
 */

int main()
{
    cout << "Please enter a integer value: ";
    int n;
    cin >> n;
    int nn = 42;
    nn += n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         << "\nn squared == " << n*n
         << "\nhalf of n == " << n/2
         << "\nsquare root of n == " << sqrt(n)
         << "\nremainder of n/2 (n%2) == " << n%2
         << "\nn-5 == " << n-5
         << "\nincrement n by one n++ == " << n++
         << "\nvalue of n after post incrementation == " << n
         << "\ndecrement n before writing it to the output --n == " << --n
         << "\nincrement by nn == 42; nn += n == " << nn
         << "\ncheck if (n != 42) == " << (n != 42) // requires parentheses
         << "\ncheck if (n == 42) == " << bool(n == 42)
         << "\ncheck if (n > 42) == " << bool(n > 42)
         << '\n'; // another name for newline (“end of line”) in output
}