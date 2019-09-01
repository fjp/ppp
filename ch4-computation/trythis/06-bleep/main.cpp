#include "std_lib_facilities.h"

int main() 
{
    string disliked = "Broccoli";
    for (string temp; cin>>temp; ) // read
    {
        if (disliked != temp)
            cout << temp << '\n';
        else
            cout << "BLEEP" << '\n';
    }

    return 0;
}
