#include "std_lib_facilities.h"

// compute median temperatures int 
int main()
{
    cout << "Enter a series of temperatures to get the median (followed by 'Enter'):\n";

    vector<double> temps; // temperatures
    for (double temp; cin>>temp; ) // read into temp
        temps.push_back(temp);  // put temp into vector


    // compute mean temperature:
    double sum = 0;
    for (int x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    // compute median temperature:
    sort(temps); // sort temperatures

    double median = -1;
    if (temps.size() > 1 && 0 == temps.size() % 2)
        median = (temps[temps.size()/2 - 1] - temps[temps.size()/2]) / 2.0;
    else
        median = temps[temps.size()/2];

    cout << "Median temperature: " << median << '\n';

    return 0;
}
