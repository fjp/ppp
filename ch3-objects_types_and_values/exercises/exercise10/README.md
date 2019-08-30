### Exercise 10

Write a program that takes an operation followed by two operands and outputs the result. For example:

```
+ 100 3.14 
* 4 5
```

Read the operation into a string called `operation` and use an if-statement to figure out which operation the user wants, 
for example, `if (operation=="+")`. Read the operands into variables of type `double`. 
Implement this for operations called +, –, *, /, plus, minus, mul, and div with their obvious meanings.


.. literalinclude:: ../ch3-objects_types_and_values/exercises/exercise10/main.cpp
   :language: cpp
   :caption: polishnotationcalculator.cpp


Here are some example inputs and the results:

```
Enter an operation ('+','-','*','/','plus','minus','mul','div') followed by two operands (followed by 'Enter')
+ 5.5 2
The result of 5.5 + 2 is 7.5
```

```
Enter an operation ('+','-','*','/','plus','minus','mul','div') followed by two operands (followed by 'Enter')
mul 5 2.1
The result of 5 mul 2.1 is 10.5
```

