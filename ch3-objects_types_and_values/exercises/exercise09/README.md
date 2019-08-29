### Exercise 09

Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2. 
When the user inputs a number, the program should print out the corresponding digit. 
Do it for the values 0, 1, 2, 3, and 4 and write out `not a number I know` if the user enters something 
that doesn’t correspond, such as `stupid computer!`.

.. literalinclude:: ../ch3-objects_types_and_values/exercises/exercise09/main.cpp
   :language: cpp
   :caption: spelledoutnumbers.cpp


Here are some example input and outputs:

```
Enter a number from 0 to 4 as a string, e.g. 'zero' (followed by 'Enter')
one
The spelled-out number one corresponds to 1.
```


```
Enter a number from 0 to 4 as a string, e.g. 'zero' (followed by 'Enter')
five
not a number I know
```

