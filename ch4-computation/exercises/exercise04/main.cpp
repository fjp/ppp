#include "std_lib_facilities.h"

// Number guessing game
int main()
{
    int number {50};

    // define upper and lower bounds
    int upper {100};
    int lower {1};
    int range {upper - lower};
    int half {range/2};

    char answer {'\0'};
    int question {0};

    cout << "Think of a number between " << lower << " and " << upper << "\n\n";
    while (lower != upper)
    {

        range = upper - lower;
        if (range == 1 && number < half)
        {
            number = upper;
        }
        else if (range == 1 && number > half)
        {
            number = upper;
        }
        else
            number = lower + range/2;

        cout << "upper: " << upper << " lower: " << lower << " range: " << range << '\n';

        cout << question + 1 << ". Is the number you are thinking of less than " << number << "? (Enter 'y' or 'n') \n";

        cin >> answer;
        if ('y' == answer)
        {
            upper = number-1;
            question++;

        } else if ('n' == answer) {
            lower = number;
            question++;

        } else {
            cout << "Please enter 'y' or 'n' ...\n";
        }

        cout << "upper: " << upper << " lower: " << lower << " range: " << range << '\n';

    }


    cout << "The number you are thinking of is " << lower << "\n";
    cout << "I needed " << question << " guesses.\n";

    return 0;
}
