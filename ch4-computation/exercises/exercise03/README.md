### Exercise 03

Read a sequence of double values into a vector. 
Think of each value as the distance between two cities along a given route. 
Compute and print the total distance (the sum of all distances). 
Find and print the smallest and greatest distance between two neighboring cities. 
Find and print the mean distance between two neighboring cities.

.. literalinclude:: ../ch4-computation/exercises/exercise03/main.cpp
   :language: cpp
   :caption: cities.cpp
   :linenos:


Here is the output of the program:

```
Enter a series of double values, which represent the distance between two cities
(followed by '|' or a another non double/integer character):
1.0 2.0 0.5 10 50.2 30.8 22.1 |
Total distance: 116.6
Smallest distance: 0.5
Largest distance: 50.2
The mean distance between two cities is: 16.6571
```
