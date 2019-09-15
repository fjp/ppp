### Exercise 18

Write a program to solve quadratic equations. A quadratic equation is of the form

```
ax2 + bx + c = 0
```

If you don't know the quadratic formula for solving such an expression, do some research. 
Remember, researching how to solve a problem is often necessary before a programmer can teach the computer how to solve it. 
Use `double`s for the user inputs for `a`, `b`, and `c`. Since there are two solutions to a quadratic equation, 
output both `x1` and `x2`.

The quadratic equation and its derivation can be found at [Wikipedia](https://en.wikipedia.org/wiki/Quadratic_equation).

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
 
 Check also that the result is correct using [wolfram alpha](https://www.wolframalpha.com/input/?i=1x%5E2+%2B+3*x+%2B+1+%3D+0)
 
 
 Another example from [Wikipedia](https://en.wikipedia.org/wiki/Quadratic_equation#Completing_the_square):
 
 ```` 
 Enter the coefficients 'a', 'b' and 'c' as double to get the results of a quadratic equation (Followed by 'Enter'):
 2 4 -4
 The solution of 2x^2 + 4x + -4 = 0 is real:
 x1 = 0.732051
 x2 = -2.73205
 ````
 
 The program is also able to compute imaginary solutions ([wolfram alpha](https://www.wolframalpha.com/input/?i=x%5E2+%2B+2*x+%2B+3+%3D+0)):
 
 ``` 
 Enter the coefficients 'a', 'b' and 'c' as double to get the results of a quadratic equation (Followed by 'Enter'):
 1 2 3
 The solution of 1x^2 + 2x + 3 = 0 is imaginary:
 x1 = -1 + 1.41421i
 x2 = -1 - 1.41421i
 ```
