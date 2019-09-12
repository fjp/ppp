### Exercise 11

Create a program to find all the prime numbers between 1 and 100. One
way to do this is to write a function that will check if a number is prime
(i.e., see if the number can be divided by a prime number smaller than
itself) using a `vecto`r of primes in order (so that if the `vector` is called
`primes`, `primes[0]==2`, `primes[1]==3`, `primes[2]==5`, etc.). Then write a
loop that goes from 1 to 100, checks each number to see if it is a prime,
and stores each prime found in a `vecto`r. Write another loop that lists the
primes you found. You might check your result by comparing your `vector`
of prime numbers with primes. Consider 2 the first prime.

.. literalinclude:: ../ch4-computation/exercises/exercise11/main.cpp
   :language: cpp
   :caption: primes.cpp
   :linenos:

The result of this program is:

```
Found prime numbers between 1 and 100: 
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
```
