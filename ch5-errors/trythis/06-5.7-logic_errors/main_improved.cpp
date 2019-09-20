// Author: Franz Pucher
// Date: 2019.09.20
// Try This 5.7 Logic errors - improved version

#include "std_lib_facilities.h"

// Absolute zero (ºF)
constexpr double min_temp {-459.67};


// Highest postulated temperature is the Planck temperature 1,417e+32 K
// Convert Kelvin to Fahrenheit
// (1,417e+32 K − 273,15) × 9/5 + 32
constexpr double max_temp {(1.417e+32 - 273.15) * 9.0/5.0 + 32.0};


int main()
{
    double sum = 0;
    double high_temp = min_temp; // initialize to impossibly low
    double low_temp = max_temp; // initialize to “impossibly high”

    int no_of_temps = 0;
    for (double temp; cin>>temp; ) { // read temp
        ++no_of_temps; // count temperatures
        sum += temp; // compute sum
        if (temp > high_temp) high_temp = temp; // find high
        if (temp < low_temp) low_temp = temp; // find low
    }
    cout << "High temperature: " << high_temp<< '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum/no_of_temps << '\n';
    
    return 0;
}
