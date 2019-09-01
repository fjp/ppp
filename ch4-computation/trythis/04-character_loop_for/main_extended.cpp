#include "std_lib_facilities.h"

int main() 
{

    for (int i = 0; i < 26; ++i)
    {
        int val = 'a' + i;
        int valUpper = 'A' + i;
        cout << char(val) << '\t' << int(val) << "\t\t" << char(valUpper) << '\t' << int(valUpper) << '\n';
    }
    return 0;
}
