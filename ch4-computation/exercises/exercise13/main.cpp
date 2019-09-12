#include "std_lib_facilities.h"


bool Sived(int i_nNumber, vector<int> i_naSived)
{
    for (int nSived : i_naSived)
    {
        if (nSived == i_nNumber)
            return true;
    }
    return false;
}

int main() {

    vector<int> naPrimes {};

    //cout << "Enter an integer greater than 1 that defines the maximum of a range for which primes are searched.\n";

    //int nMax;
    //bool bValidInput {false};
    //while (!bValidInput)
    //{
    //    if (cin >> nMax && nMax > 1)
    //        bValidInput = true;
    //    else
    //        cout << "Enter an integer greater than 1 (followed by 'Enter')\n";
    //}

    vector<int> naSived {};
    int nComposite {0};
    int nCount {1};
    for (int nNumber = 2; nNumber <= 100; ++nNumber)
    {
        if (!Sived(nNumber, naSived)) {
            naPrimes.push_back(nNumber);
            // Add multiples of the current prime to the sived vector
            for (int nMultiplier = 1; nMultiplier * nNumber <= 100; ++nMultiplier) {
                nComposite = nNumber * nMultiplier;
                naSived.push_back(nComposite);
                cout << nComposite << " ";
                if (nCount % 10 == 0) {
                    cout << '\n';
                }
                nCount++;
            }
        }
        else {
            cout << "\n";
        }
    }

    cout << "Found prime numbers between 1 and " << 100 << ": \n";
    int nPrime {2};
    for (int nIdx = 0; nIdx < naPrimes.size(); ++nIdx)
    {
        nPrime = naPrimes[nIdx];
        cout << nPrime << " ";
        if ((nIdx+1) % 25 == 0) // Line break after 25 primes
            cout << '\n';
    }
    cout << '\n';

    return 0;
}
