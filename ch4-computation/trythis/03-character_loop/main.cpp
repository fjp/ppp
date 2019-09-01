#include "std_lib_facilities.h"

int main() 
{

    int i = 0;

    while (i<26) // the loop condition testing the loop variable i
    {
        int val = 'a' + i;
        cout << char(val) << '\t' << int(val) << '\n';
        ++i ; // increment the loop variable i
    }
    return 0;
}
