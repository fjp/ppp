#include "std_lib_facilities.h"


const vector<string> straGesture {"Rock", "Paper", "Scissors"};

string PlayerThrow()
{
    string strPlayerThrow;
    while (true)
    {
        if (cin >> strPlayerThrow)
        {
            for (string strGesture : straGesture)
            {
                if (strGesture == strPlayerThrow)
                    return strPlayerThrow;
            }
        }
        else 
        {
            cout << "Please try again. Enter 'Rock', 'Paper' or 'Scissors'\n";
            cin.clear();   
        }
    }
}


int main() {


    return 0;
}
