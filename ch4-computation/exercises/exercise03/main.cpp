#include "std_lib_facilities.h"

// compute median temperatures int 
int main()
{
    cout << "Enter a series of double values, which represent the distance between two cities\n"
            "(followed by '|' or a another non double/integer character):\n";

    vector<double> distances; // city distances
    for (double ditance; cin >> distance; ) // read into distance
        distances.push_back(distance);  // put distance into vector


    // compute total distance:
    double sum {0.0};
    for (double distance : distances)
        sum += distance;
    cout << "Total distance: " << sum/distances.size() << '\n';

    // compute smallest and largest distance:
    sort(distances); // sort distances
    cout << "Smalles distance: " << distances[0] << '\n'
         << "Largest distance: " << distances[distances.size()-1] << '\n';
         
         
    cout << "The mean distance between two cities is: " << sum/distances.size() << '\n';

    return 0;
}
