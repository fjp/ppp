### Exercise 04

Write a program that prompts the user to enter two integer values. 
Store these values in `int`  variables named `val1` and `val2`. 
Write your program to determine the smaller, larger, sum, difference, 
product, and ratio of these values and report them to the user.

.. literalinclude:: ../ch3-objects_types_and_values/exercises/exercise04/main.cpp
   :language: cpp
   :caption: val1val2.cpp

The output of this program is:

```
Enter two integer values (followed by 'Enter')
2 3
smaller = 2
larger = 3
sum = 5
difference = -1
product = 6
ratio = 0
```

Note that the ratio is zero because the values after the decimal point are truncated when using `int`.


```
Enter two integer values (followed by 'Enter')
3 2
smaller = 2
larger = 3
sum = 5
difference = 1
product = 6
ratio = 1
```

```
Enter two integer values (followed by 'Enter')
3 3
smaller = 3
larger = 3
sum = 6
difference = 0
product = 9
ratio = 1
```


