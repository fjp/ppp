#include "std_lib_facilities.h"

// Number guessing program
int main()
{
    cout << "Think of a number between 1 and 100\n\n";

    int number {50};

    // define upper and lower bounds
    int upper {100};
    int lower {1};
    int range {upper - lower};

    char answer {'\0'};
    int question {1};
    while (lower != upper)
    {
        cout << question++ << ". Is the number you are thinking of " << number << "? (Enter 'y' or 'n') \n";
        cin >> answer;
        if ('y' == answer)
        {
            lower = number;
            upper = number;

        } else if ('n' == answer) {

            cout << question++ << ". Is the number you are thinking of less than " << number << "? (Enter 'y' or 'n') \n";
            cin >> answer;
            if ('y' == answer)
            {
                upper = number;
                range = upper - lower;
                number = lower + range/2;
            } else {
                lower = number;
                range = upper - lower;
                number = lower + range/2;

            }
        } else {
            cout << "Please enter 'y' or 'n' ...\n";
        }

    }

    cout << "Is the number you guessed " << number << "?\n";

    return 0;
}
