### Exercise 08

Write a program to test an integer value to determine if it is odd or even. 
As always, make sure your output is clear and complete. In other words, don’t just output yes or no. 
Your output should stand alone, like `The value 4 is an even number`. Hint: See the remainder (modulo) operator in §3.4.

.. literalinclude:: ../ch3-objects_types_and_values/exercises/exercise08/main.cpp
   :language: cpp
   :caption: oddeven.cpp

The output using `2` as input is:

```
Enter an integer value (followed by 'Enter')
2
The value 2 is even.
```

```
Enter an integer value (followed by 'Enter')
3
The value 3 is odd.
```

`0` results in:

```
Enter an integer value (followed by 'Enter')
0
The value 0 is even.
```

Negativ values result in:

```
Enter an integer value (followed by 'Enter')
-1
The value -1 is odd.
```

```
Enter an integer value (followed by 'Enter')
-2
The value -2 is even.
```

```
Enter an integer value (followed by 'Enter')
-3
The value -3 is odd.
```
