#include "std_lib_facilities.h"

// Sieve of Eratosthenes algorithm:
// 1. Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).
// 2. Initially, let p equal 2, the smallest prime number.
// 3. Enumerate the multiples of p by counting in increments of p from 2p to n,
//    and mark them in the list (these will be 2p, 3p, 4p, ...; the p itself should not be marked).
// 4. Find the first number greater than p in the list that is not marked.
//    If there was no such number, stop. Otherwise, let p now equal this new number (which is the next prime),
//    and repeat from step 3.
// 5. When the algorithm terminates, the numbers remaining not marked in the list are all the primes below n.

int main()
{
    // 1. Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).
    // The indices will represent the numbers and true or false will specify if a number is marked, meaning it is no prime.
    constexpr int nMax {100};
    vector<int> baMarked(nMax+1); // Plus 1 because nMax should also be check if it is prime
    // Initially, all numbers are not marked. Composite numbers are going to be marked true. Primes will stay false.
    // This loop should not be necessary because vector is default initialized to false usually.
    for (int nIdx = 0; nIdx < baMarked.size(); ++nIdx)
    {
        baMarked[nIdx] = false;
    }

    // 2. Initially, let p equal 2, the smallest prime number.
    // 3. Enumerate the multiples of p by counting in increments of p from 2p to n,
    //    and mark them in the list (these will be 2p, 3p, 4p, ...; the p itself should not be marked).
    // 4. Find the first number greater than p in the list that is not marked.
    //    If there was no such number, stop. Otherwise, let p now equal this new number (which is the next prime),
    //    and repeat from step 3.
    int nMultiple {0};
    for (int nNumber = 2; nNumber < nMax; ++nNumber)
    {
        // If the number is not marked (false), it is a prime number
        if (false == baMarked[nNumber])
        {
            // Calculate all the multiples of that number and mark them as being a composite (not prime)
            nMultiple = {2 * nNumber};
            while (nMultiple <= nMax)
            {
                baMarked[nMultiple] = true;
                nMultiple += nNumber;
            }
        }
    }

    // 5. When the algorithm terminates, the numbers remaining not marked in the list are all the primes below n.
    cout << "The prime numbers between 1 and " << nMax << " are:\n";
    for (int nNumber = 2; nNumber < nMax; ++nNumber)
    {
        if (!baMarked[nNumber])
            cout << nNumber << " ";
    }
    cout << '\n';



    return 0;
}   
