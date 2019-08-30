#include "std_lib_facilities.h"

int main()
{
    cout << "How many pennies do you have? (followed by 'Enter'):\n";
    int pennies;
    cin >> pennies;

    cout << "How many nickels do you have? (followed by 'Enter'):\n";
    int nickels;
    cin >> nickels;

    cout << "How many dimes do you have? (followed by 'Enter'):\n";
    int dimes;
    cin >> dimes;

    cout << "How many quarters do you have? (followed by 'Enter'):\n";
    int quarters;
    cin >> quarters;

    cout << "How many half dollars do you have? (followed by 'Enter'):\n";
    int half_dollars;
    cin >> half_dollars;

    cout << "How many dollars do you have? (followed by 'Enter'):\n";
    int dollars;
    cin >> dollars;


    int cents = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50 + dollars * 100;


    cout
        << "You have " <<  pennies << " pennies.\n"
        << "You have " <<  nickels << " nickels.\n"
        << "You have " <<  dimes << " dimes.\n"
        << "You have " <<  quarters << " quarters.\n"
        << "You have " <<  half_dollars << " half dollars.\n"
        << "The value of all of your coins is " <<  cents << " cents.\n";

    return 0;
}
