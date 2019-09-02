#include "std_lib_facilities.h"


const vector<string> legal_units {"cm", "m", "in", "ft"};

bool legalUnit(string unit)
{
    bool legal = false;
    for (auto legal_unit : legal_units)
    {
        if (unit == legal_unit)
        {
            legal = true;
        }

    }
    return legal;
}

void printLegalUnits()
{
    cout << "\tcm for centimeters\n"
            << "\tm for meters\n"
            << "\tin for inches\n"
            << "\tft for feet\n";
}


int main() {
    bool first {true};
    double val {0.0};
    double smallest {0.0};
    double largest {0.0};
    string unit {" "};

    cout << "Enter a double value followed by a unit with or without a space in between (followed by 'Enter'):\n";
    printLegalUnits();

    while (cin >> val >> unit)
    {

        if (legalUnit(unit))
        {
            cout << val << unit;

            if (first == true)
            {
                first = false;
                smallest = val;
                largest = val;

                cout << " is the first value and therefore the smallest and largest so far.\n";
            }
            else if (val < smallest)
            {
                cout << " the smallest so far.\n";
                smallest = val;
            }
            else if (val > largest)
            {
                cout << " the largest so far.\n";
                largest = val;
            }
            else
            {
                cout << '\n';
            }
        }
        else {
            cout << "Error: no legal unit. Enter one of \n";
            printLegalUnits();
        }
    }

    return 0;
}
