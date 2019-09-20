// Author: Franz Pucher
// Date: 2019.09.20
// Try This 5.7 Logic errors

#include "std_lib_facilities.h"

// This test vector yields results that are correct.
const vector<double> temps_test_ok {
        -16.5, -23.2, -24.0, -25.7, -26.1, -18.6, -9.7, -2.4,
        7.5, 12.6, 23.8, 25.3, 28.0, 34.8, 36.7, 41.5,
        40.3, 42.6, 39.7, 35.4, 12.6, 6.5, -3.7, -14.3
};

// This test vector from the book where no values are negative gives a wrong result.
const vector<double> temps_test_wrong {
        76.5, 73.5, 71.0, 73.6, 70.1, 73.5, 77.6, 85.3,
        88.5, 91.7, 95.9, 99.2, 98.2, 100.6, 106.3, 112.4,
        110.2, 103.6, 94.9, 91.7, 88.4, 85.2, 85.4, 87.7
};


// An empty test vector is the shortest input that results in a bad output
// The size of the temps vector will be zero.
// Dividing by zero results in NaN for the average value.
const vector<double> temps_test_bad_min;

int main()
{
    vector<double> temps; // temperatures
    for (double temp; cin>>temp; ) // read and put into temps
        temps.push_back(temp);


    //for (double x : temps_test_ok)
    //    temps.push_back(x);

    //for (double x : temps_test_wrong)
    //    temps.push_back(x);

    double sum = 0;
    double high_temp = 0;
    double low_temp = 0;
    for (double x : temps)
    {
        if(x > high_temp) high_temp = x; // find high
        if(x < low_temp) low_temp = x; // find low
        sum += x; // compute sum
    }

    cout << "High temperature: " << high_temp<< '\n';
    cout << "Low temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum/temps.size() << '\n';
    
    return 0;
}
