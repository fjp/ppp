### Exercise 11

Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), 
dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins), and one-dollar coins (100-cent coins). 
Query the user separately for the number of each size coin, e.g., “How many pennies do you have?” 
Then your program should print out something like this:

```
You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents.
```

I assume that the output for dollars is missing in the task above which is why I added it in my solution:

.. literalinclude:: ../ch3-objects_types_and_values/exercises/exercise11/main.cpp
   :language: cpp
   :caption: pennies.cpp

The output of the above program is:

``` 
How many pennies do you have? (followed by 'Enter'):
23
How many nickels do you have? (followed by 'Enter'):
17
How many dimes do you have? (followed by 'Enter'):
14
How many quarters do you have? (followed by 'Enter'):
7
How many half dollars do you have? (followed by 'Enter'):
3
How many dollars do you have? (followed by 'Enter'):
0
You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
You have 0 dollars.
The value of all of your coins is 573 cents.
```


Make some improvements: if only one of a coin is reported, make the output grammatically correct, 
e.g., `14 dimes` and `1 dime` (not `1 dimes`). Also, report the sum in dollars and cents, i.e., `$5.73` instead of `573 cents`.


.. literalinclude:: ../ch3-objects_types_and_values/exercises/exercise11/main_improved.cpp
   :language: cpp
   :caption: penniesimproved.cpp
