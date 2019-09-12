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

    for (int nNumber = 1; nNumber <= 100; ++nNumber)
    {
        if (IsPrime(nNumber, naPrimes))
        {
            naPrimes.push_back(nNumber);
        }
    }

    cout << "Found prime numbers between 1 and 100: \n";
    for (int nPrime : naPrimes)
    {
        cout << nPrime << " ";
    }
    cout << '\n';

    return 0;
}
