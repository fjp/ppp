#include "std_lib_facilities.h"

int main() {

    cout << "Enter a series of positive integer values to get the mode (To finish, enter '|' or a another non integer character):\n";

    vector<int> naValues;
    for (int nValue; cin >> nValue; ) // read into temp
        naValues.push_back(nValue);  // put temp into vector


    sort(naValues); // sort series

    // compute mode of the entered series:
    int nCount {1};
    int nMaxCount {1};
    int nMode {0};
    int nPrev {naValues[0]};
    for (int nIdx = 1; nIdx < naValues.size(); ++nIdx)
    {
        // update the number count if the previous value is the same as the current one.
        if (nPrev == naValues[nIdx])
        {
            nCount++;
        } else {
            nCount = 1; // reset counter if the current value is different than the previous one.
        }

        // update the mode if necessary
        if (nMaxCount < nCount)
        {
            nMode = naValues[nIdx];
            nMaxCount = nCount;
        }

        nPrev = naValues[nIdx];
    }

    cout << "The mode of the series is " << nMode << " with " << nMaxCount << " appareances.\n";

    return 0;
}
