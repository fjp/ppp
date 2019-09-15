### Exercise 17

Write a program that finds the min, max, and mode of a sequence of `string`s.

.. literalinclude:: ../ch4-computation/exercises/exercise17/main.cpp
   :language: cpp
   :caption: modestrings.cpp
   :linenos:
 
 
Example output is: 
   
``` 
Enter a sequence of strings to get the min, max and mode (To finish, press Ctrl-D):
moon
sun
earth
moon
saturn
^D
The min of the sequence is earth and the max is sun
The mode of the sequence is moon with 2 appareances.
```
Note that I needed to run this program in the debugger to get an output using Ctrl-D. 
This seems to be a bug (maybe in the C++ implementation of mac os?).