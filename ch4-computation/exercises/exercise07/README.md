### Exercise 07

Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers written as either digits or spelled out.

.. literalinclude:: ../ch4-computation/exercises/exercise07/main.cpp
   :language: cpp
   :caption: minicalculator.cpp
   :linenos:


```
Enter three arguments: two integer operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
Operands must be digits from 0 to 9 (either as string or integer)
1 2 +
The sum of 1 and 2 is 3
Enter three arguments: two integer operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
four five *
The product of 4 and 5 is 20
Enter three arguments: two integer operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
six 3 /
The division of 6 and 3 is 2
Enter three arguments: two integer operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
seven eight -
The difference of 7 and 8 is -1
Enter three arguments: two integer operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
5 two /
The division of 5 and 2 is 2
Enter three arguments: two integer operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').
|

Process finished with exit code 0
```
