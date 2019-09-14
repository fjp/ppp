#include "std_lib_facilities.h"


// Check if the number can be divided by a prime number smaller than itself
bool IsPrime(int i_nNumber, vector<int> i_naPrimes)
{
    for (int prime : i_naPrimes)
    {
        if (i_nNumber < prime || i_nNumber % prime == 0)
            return false;
    }
    return true;
}

int main() {

    vector<int> naPrimes {2};

    cout << "Enter an integer greater than 1 that defines the number of primes from 1 to n that are searched.\n";

    int nN;
    bool bValidInput {false};
    while (!bValidInput)
    {
        if (cin >> nN && nN > 1)
            bValidInput = true;
        else
            cout << "Enter an integer greater than 1 (followed by 'Enter')\n";
    }

    int nNumber {1};
    while (naPrimes.size() < nN)
    {
        if (IsPrime(nNumber, naPrimes))
        {
            naPrimes.push_back(nNumber);
        }
        nNumber++;

    }

    cout << "Found "<< nN << " prime numbers between 1 and " << naPrimes[naPrimes.size()-1] << ": \n";
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
