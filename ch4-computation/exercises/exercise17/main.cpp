#include "std_lib_facilities.h"

int main() {

    cout << "Enter a sequence of strings to get the min, max and mode (To finish, press Ctrl-D):\n";

    vector<string> straWords;
    for (string strWord; cin >> strWord; )
        straWords.push_back(strWord);


    sort(straWords); // sort sequence

    // get the min and max of the entered sequence:
    string strMin {straWords[0]}; // first entry is the "minimum"
    string strMax {straWords[straWords.size()-1]}; // last entry is the "maximum"

    // compute mode of the entered sequence:
    int nCount {1};
    int nMaxCount {1};
    string nMode {" "};
    string nPrev {straWords[0]};
    for (int nIdx = 1; nIdx < straWords.size(); ++nIdx)
    {
        // update the number count if the previous value is the same as the current one.
        if (nPrev == straWords[nIdx])
        {
            nCount++;
        } else {
            nCount = 1; // reset counter if the current value is different than the previous one.
        }

        // update the mode if necessary
        if (nMaxCount < nCount)
        {
            nMode = straWords[nIdx];
            nMaxCount = nCount;
        }

        nPrev = straWords[nIdx];
    }

    cout << "The min of the sequence is " << strMin << " and the max is " << strMax << '\n';
    cout << "The mode of the sequence is " << nMode << " with " << nMaxCount << " appareances.\n";

    return 0;

    /// moon sun earth moon saturn pluto
}
