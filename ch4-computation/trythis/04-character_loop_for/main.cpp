#include "std_lib_facilities.h"

int main() 
{

    for (int i = 0; i < 26; ++i)
    {
        int val = 'a' + i;
        cout << char(val) << '\t' << int(val) << '\n';
    }
    return 0;
}
