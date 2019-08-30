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
        << "You have " <<  pennies;
        if (1 == pennies)
            cout << " penny.\n";
        else
            cout << " pennies.\n";

        cout << "You have " <<  nickels;
        if (1 == nickels)
            cout << " nickel.\n";
        else
            cout << " nickels.\n";

        cout << "You have " <<  dimes;
        if (1 == dimes)
            cout << " dime.\n";
        else
            cout << " dimes.\n";

        cout << "You have " <<  quarters;
        if (1 == quarters)
           cout << " quarter.\n";
        else
            cout << " quarters.\n";

        cout << "You have " <<  half_dollars;
        if (1 == half_dollars)
            cout << " half dollar.\n";
        else
            cout << " half dollars.\n";

        cout << "The value of all of your coins is $" <<  cents/100.0;

    return 0;
}
