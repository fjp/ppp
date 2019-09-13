### Exercise 13

Create a program to find all the prime numbers between 1 and 100. 
There is a classic method for doing this, called the "Sieve of Eratosthenes".
If you don't know that method, get on the web and look it up. 
Write your program using this method.

From [Wikipedia](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes):
To find all the prime numbers less than or equal to a given integer `n` by Eratosthenes' method:

1. Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).
2. Initially, let p equal 2, the smallest prime number.
3. Enumerate the multiples of p by counting in increments of p from 2p to n, and mark them in the list (these will be 2p, 3p, 4p, ...; the p itself should not be marked).
4. Find the first number greater than p in the list that is not marked. If there was no such number, stop. Otherwise, let p now equal this new number (which is the next prime), and repeat from step 3.
5. When the algorithm terminates, the numbers remaining not marked in the list are all the primes below n.


.. literalinclude:: ../ch4-computation/exercises/exercise13/main_simple.cpp
   :language: cpp
   :caption: sieveoferatosthenes_simple.cpp
   :linenos:

The output is:

```
The prime numbers between 1 and 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
```


Another version of the program is the following, which uses a vector: 

.. literalinclude:: ../ch4-computation/exercises/exercise13/main.cpp
   :language: cpp
   :caption: sieveoferatosthenes.cpp
   :linenos:


