// converts yen, euros, and pounds into dollars 
// a suffix ‘y’, ‘e’ or 'p' indicates the currency of the input
// any other suffix is an error
#include "std_lib_facilities.h"

int main() 
{
    constexpr double yens_per_dollar = 106.36; // number of yen in a dollar
    constexpr double euros_per_dollar = 0.91; // number of euro in a dollar
    constexpr double pounds_per_dollar = 0.82; // number of pounds in a dollar
    constexpr double kroner_per_dollar = 6.78; // number of kroners in a dollar
    constexpr double yuan_per_dollar = 7.16; // number of yuans in a dollar

    double amount = 1.0; // amount entered by the user (unit is yen, euro or pound) 

    char currency = ' '; // a space is not a currency

    cout<< "Please enter an amount followed by a currency (y, e or p):\n"; 
    cin >> amount >> currency;
    
    switch (currency)
    {
        case 'y':
            cout << amount << "yen == " << amount / yens_per_dollar << "dollar\n";
            break;
        case 'e':
            cout << amount << "euro == " << amount / euros_per_dollar << "dollar\n";
            break;
        case 'p':
            cout << amount << "pound == " << amount / pounds_per_dollar << "dollar\n";
            break;
        case 'k':
            cout << amount << "kroner == " << amount / kroner_per_dollar << "dollar\n";
            break;
        case 'u': // y is already taken for yen
            cout << amount << "yuan == " << amount / yuan_per_dollar << "dollar\n";
            break;
        default:
            cout << "Sorry, I don't know a currency called '" << currency << "'\n";
            break;
    }


    return 0;
}
