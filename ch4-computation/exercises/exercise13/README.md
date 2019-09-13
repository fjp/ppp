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

The following output shows the sieved number blocks for every iteration of the outer for loop.
The amount of sieved numbers reduces because most of them are already marked as not being prime.

```
2 4 6 8 10 12 14 16 18 20 
22 24 26 28 30 32 34 36 38 40 
42 44 46 48 50 52 54 56 58 60 
62 64 66 68 70 72 74 76 78 80 
82 84 86 88 90 92 94 96 98 100 


3 6 9 12 15 18 21 24 27 30 
33 36 39 42 45 48 51 54 57 60 
63 66 69 72 75 78 81 84 87 90 
93 96 99 

5 10 15 20 25 30 35 
40 45 50 55 60 65 70 75 80 85 
90 95 100 

7 14 21 28 35 42 49 
56 63 70 77 84 91 98 

11 22 33 
44 55 66 77 88 99 

13 26 39 52 
65 78 91 

17 34 51 68 85 

19 38 
57 76 95 

23 46 69 92 

29 58 87 


31 62 93 

37 74 

41 82 

43 86 

47 
94 

53 

59 

61 

67 

71 

73 

79 

83 

89 


97 

Found prime numbers between 1 and 100: 
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
```
