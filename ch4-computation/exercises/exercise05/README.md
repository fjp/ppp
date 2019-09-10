### Exercise 05

Write a program that performs as a very simple calculator. 
Your calculator should be able to handle the four basic math operations — 
add, subtract, multiply, and divide — on two input values. 
Your program should prompt the user to enter three arguments: two `double` values and a character to represent an operation. 
If the entry arguments are `35.6`, `24.1`, and `'+'`, the program output should be `The sum of 35.6 and 24.1 is 59.7`. 
In Chapter 6 we look at a much more sophisticated simple calculator.

.. literalinclude:: ../ch4-computation/exercises/exercise05/main.cpp
   :language: cpp
   :caption: simplecalculator.cpp
   :linenos:
   
   
   
Example output:

```
Enter three arguments: two double operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
5.2 6.5 +
The sum of 5.2 and 6.5 is 11.7
Enter three arguments: two double operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
7.2 8.9 -
The difference of 7.2 and 8.9 is -1.7
Enter three arguments: two double operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
2.2 5.0 *
The product of 2.2 and 5 is 11
Enter three arguments: two double operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
10.0 2.0 /
The division of 10 and 2 is 5
Enter three arguments: two double operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
7.3 1.2 %
The operator % is not supported!
Enter three arguments: two double operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
|

Process finished with exit code 0
```
