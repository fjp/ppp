#include "std_lib_facilities.h"

// compute median temperatures int 
int main()
{
    cout << "Enter a series of temperatures to get the median (followed by 'Enter'):\n";

    vector<double> temps; // temperatures
    for (double temp; cin>>temp; ) // read into temp
        temps.push_back(temp);  // put temp into vector

    // compute median temperature:
    sort(temps); // sort temperatures
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';

    return 0;
}
