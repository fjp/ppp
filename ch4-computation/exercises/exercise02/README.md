### Exercise 02

If we define the median of a sequence as 
"a number so that exactly as many elements come before it in the sequence as come after it" 
fix the program in §4.6.3 so that it always prints out a median. Hint: A median need not be an element of the sequence.


.. literalinclude:: ../ch4-computation/exercises/exercise02/main.cpp
   :language: cpp
   :caption: meanmedian.cpp
   :linenos:

Here are two example inputs to the mean and median program:

```
Enter a series of temperatures to get the median (followed by '|' or a another non double/integer character):
1 2 3 4 5 |
Average temperature: 3
Median temperature: 3
```

```
Enter a series of temperatures to get the median (followed by '|' or a another non double/integer character):
1 2 3 4 | 
Average temperature: 2.5
Median temperature: 3
```

.. literalinclude:: ../ch4-computation/exercises/exercise02/main_solution.cpp
   :language: cpp
   :caption: meanmedianexact.cpp
   :linenos:
   
   
The following to inputs are the same as for the previous program. 
Notice that the second input is different this time, because the median computation is changed.

```
Enter a series of temperatures to get the median (followed by '|' or a another non double/integer character):
1 2 3 4 5 |
Average temperature: 3
Median temperature: 3
```

```
Enter a series of temperatures to get the median (followed by '|' or a another non double/integer character):
1 2 3 4 |
Average temperature: 2.5
Median temperature: 2.5
```
