#include "std_lib_facilities.h"


constexpr double cm_to_m {0.01};
constexpr double in_to_m {2.54*cm_to_m};
constexpr double ft_to_m {12.0*in_to_m};
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

double convertToMeter(double val, string unit)
{
    if ("cm" == unit)
    {
        return val * cm_to_m;
    }
    else if ("in" == unit)
    {
        return val * in_to_m;
    }
    else if ("ft" == unit)
    {
        return val * ft_to_m;
    }
    else {
        return val;
    }
}


int main() {

    cout << "Enter a double value followed by a unit with or without a space in between (followed by 'Enter'):\n";

    bool first {true};
    double val {0.0};
    double valMeter {0.0};
    double smallest {0.0};
    double largest {0.0};
    string unit {" "};

    printLegalUnits();

    while (cin >> val >> unit)
    {

        if (legalUnit(unit))
        {
            valMeter = convertToMeter(val, unit);
            cout << val << unit;
            if (unit != "m")
            {
                cout << " (" << valMeter << "m)";
            }

            if (first == true)
            {
                first = false;
                smallest = val;
                largest = val;

                cout << " is the first value and therefore the smallest and largest so far.\n";
            }
            else if (valMeter < smallest)
            {
                cout << " the smallest so far.\n";
                smallest = valMeter;
            }
            else if (valMeter > largest)
            {
                cout << " the largest so far.\n";
                largest = valMeter;
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
