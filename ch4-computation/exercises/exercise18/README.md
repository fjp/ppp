### Exercise 18

Write a program to solve quadratic equations. A quadratic equation is of the form

```
ax2 + bx + c = 0
```

If you don't know the quadratic formula for solving such an expression, do some research. 
Remember, researching how to solve a problem is often necessary before a programmer can teach the computer how to solve it. 
Use `double`s for the user inputs for `a`, `b`, and `c`. Since there are two solutions to a quadratic equation, 
output both `x1` and `x2`.

.. literalinclude:: ../ch4-computation/exercises/exercise18/main.cpp
   :language: cpp
   :caption: quadraticequation.cpp
   :linenos:
 
 
 
 Here are some example input and the output result:
 
 ``` 
 Enter the coefficients 'a', 'b' and 'c' as double to get the results of a quadratic equation (Followed by 'Enter'):
 1 3 1
 The solution of 1x^2 + 3x + 1 = 0 is real:
 x1 = -0.381966
 x2 = -2.61803
 ```
 
 
 The program is also able to compute imaginary solutions:
 
 ``` 
 Enter the coefficients 'a', 'b' and 'c' as double to get the results of a quadratic equation (Followed by 'Enter'):
 1 2 3
 The solution of 1x^2 + 2x + 3 = 0 is imaginary:
 x1 = -1 + 1.41421i
 x2 = -1 - 1.41421i
 ```
