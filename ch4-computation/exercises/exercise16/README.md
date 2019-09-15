### Exercise 16

In the drill, you wrote a program that, given a series of numbers, found the max and min of that series. 
The number that appears the most times in a sequence is called the *mode*. 
Create a program that finds the mode of a set of positive integers.


.. literalinclude:: ../ch4-computation/exercises/exercise16/main.cpp
   :language: cpp
   :caption: mode.cpp
   :linenos:
   

Here are some inputs and the resulting output:

``` 
Enter a series of positive integer values to get the mode (To finish, enter '|' or a another non integer character):
1 2 3 3 4 5 6 7 8 8 8 9 10 11 |
The mode of the series is 8 with 3 appareances.
```

``` 
Enter a series of positive integer values to get the mode (To finish, enter '|' or a another non integer character):
1 5 4 2 2 8 7 9 |
The mode of the series is 2 with 2 appareances.
```

``` 
Enter a series of positive integer values to get the mode (To finish, enter '|' or a another non integer character):
30 60 20 1 2 1 1 2 60 80 50 20 |
The mode of the series is 1 with 3 appareances.
```


In case of two numbers having equal frequencies, the smaller one is picked because of the sorting.

``` 
Enter a series of positive integer values to get the mode (To finish, enter '|' or a another non integer character):
2 2 1 1 1 3 3 3 |
The mode of the series is 1 with 3 appareances.
```
