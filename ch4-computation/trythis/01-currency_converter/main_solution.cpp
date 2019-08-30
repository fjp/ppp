// converts yen, euros, and pounds into dollars 
// a suffix ‘y’, ‘e’ or 'p' indicates the currency of the input
// any other suffix is an error
#include "std_lib_facilities.h"

int main() 
{
    constexpr double yens_per_dollar = 106.36; // number of yen in a dollar
    constexpr double euros_per_dollar = 0.91; // number of euro in a dollar
    constexpr double pounds_per_dollar = 0.82; // number of pounds in a dollar

    double amount = 1.0; // amount entered by the user (unit is yen, euro or pound) 

    char currency = ' '; // a space is not a currency

    cout<< "Please enter an amount followed by a currency (y, e or p):\n"; 
    cin >> amount >> currency;
    if ('y' == currency)
        cout << amount << "yen == " << amount / yens_per_dollar << "dollar\n";
    else if ('e' == currency)
        cout << amount << "euro == " << amount / euros_per_dollar << "dollar\n";
    else if ('p' == currency)
        cout << amount << "pound == " << amount / pounds_per_dollar << "dollar\n";
    else
        cout << "Sorry, I don't know a currency called '" << currency << "'\n";

    return 0;
}
