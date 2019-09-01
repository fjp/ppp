#include "std_lib_facilities.h"

int main() 
{
    vector<string> dislikedVector = {"Broccoli", "Puree", "Cauliflower", "Cabbage"};
    bool disliked = false;
    for (string temp; cin>>temp; ) // read
    {
        for (auto word : dislikedVector)
        {
            if (word == temp)
            {
                disliked = true;
                break;
            }
        }
        if (disliked)
            cout << "BLEEP" << '\n';
        else
            cout << temp << '\n';

        disliked = false;
    }

    return 0;
}
