#include "std_lib_facilities.h"

// read name and age (2nd version)
// read the input in years and multiply (using the * operator) by 12. Read the age into a double to allow for 5 and a half years
// write out the age in months
int main()
{
    cout << "Please enter your first name and age (input in years of type double)\n";
    string first_name = "???"; // string variable ("???” means “don’t know the name”)
    double age = -1.0; // integer variable (–1 means “don’t know the age”)
    cin >> first_name >> age; // read a string followed by an integer
    cout << "Hello, " << first_name << " (age " << age * 12.0 << " months)\n";
}