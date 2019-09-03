## Review

1. What is a computation?


All that a program ever does is to compute; that is, it takes some inputs and produces some output. 
After all, we call the hardware on which we run the program a computer.

By computation we simply mean the act of producing some outputs based on some inputs, 
such as producing the result (output) 49 from the argument (input) 7 using the computation (function) square (see §4.5).

2. What do we mean by inputs and outputs to a computation? Give examples.

When we say “input” and “output” we generally mean information coming into and out of a computer, 
but we can also use the terms for information given to or produced by a part of a program. 
Inputs to a part of a program are often called *arguments* and outputs from a part of a program are often called *results*.

By computation we simply mean the act of producing some outputs based on some inputs, 
such as producing the result (output) 49 from the argument (input) 7 using the computation (function) square (see §4.5).

3. What are the three requirements a programmer should keep in mind when expressing computations?

Our job as programmers is to express computations

- Correctly
- Simply
- Efficiently

Please note the order of those ideals: it doesn’t matter how fast a program is if it gives the wrong results. 
Similarly, a correct and efficient program can be so complicated that it must be thrown away or 
completely rewritten to produce a new version (release). 
Remember, useful programs will always be modified to accommodate new needs, new hardware, etc. 
Therefore a program — and any part of a program — should be as simple as possible to perform its task.

4. What does an expression do?

The most basic building block of programs is an expression. 
An expression computes a value from a number of operands. 
The simplest expression is simply a literal value, such as `10`, `'a'`, `3.14`, or `"Norah"`.
Names of variables are also expressions. A variable represents the object of which it is the name.

5. What is the difference between a statement and an expression, as described in this chapter?

An expression computes a value from a set of operands using operators like the ones mentioned in §4.3. 
To produce several values, do something many times, choose among alternatives, or if you want to get input or produce output,
in C++, as in many languages, you use language constructs called statements to express those things.

Two kinds of statements are: 

- expression statements 
- declarations

An expression statement is simply an expression followed by a semicolon.
For example:

```
a = b;
++b;
```

Those are two expression statements. Note that the assignment `=` is an operator
so that `a=b` is an expression and we need the terminating semicolon to make `a=b;` a statement.

6. What is an lvalue? List the operators that require an lvalue. 
Why do these operators, and not the others, require an lvalue?

An lvalue is an expression that identifies an object that could in principle be modified 
(but obviously an lvalue that has a const type is protected against modification by the type system) 
and have its address taken. 
The complement to lvalue is rvalue, that is, an expression that identifies something that may not be modified 
or have its address taken, such as a value returned from a function (&f(x) is an error because f(x) is an rvalue).

The following operators require an lvalue on the left han side because they may modify this value. 

Assignments:

```
v = x;
v *= x;
v /= x;
v%=x
v+=x
v– =x
v>>=x
v<<=x
v&=x
v^=x
v|=x
```

Address of:

```
&v
```

(pre/post-)increment/decrement:

```
++v;
--v;
v++;
v--;
```


7. What is a constant expression?

C++ offers the notion of a symbolic constant, that is, a named object to which you can’t give a new value after it has been initialized. 
For example:

```
constexpr double pi = 3.14159;
pi = 7; // error: assignment to constant
double c = 2*pi*r; // OK: we just read pi; we don’t try to change it
```

Such constants are useful for keeping code readable. 

A constexpr symbolic constant must be given a value that is known at compile time.

```
constexpr int max = 100;
void use(int n)
{
    constexpr int c1 = max+7; // OK: c1 is 107
    constexpr int c2 = n+7; // error: we don’t know the value of c2
    // ...
}
```

To handle cases where the value of a “variable” that is initialized with a value that
is not known at compile time but never changes after initialization, C++ offers a
second form of constant (a const)

```
constexpr int max = 100;
void use(int n)
{
    constexpr int c1 = max+7; // OK: c1 is 107
    const int c2 = n+7; // OK, but don’t try to change the value of c2
    // ...
    c2 = 7; // error: c2 is a const
}
```

Such “const variables” are very common for two reasons:
- C++98 did not have constexpr, so people used const.
- "Variables" that are not constant expressions (their value is not known at compile time) 
but do not change values after initialization are in themselves widely useful.

8. What is a literal?


9. What is a symbolic constant and why do we use them?


10. What is a magic constant? Give examples.


11. What are some operators that we can use for integers and floating-point values?


12. What operators can be used on integers but not on floating-point numbers?


13. What are some operators that can be used for strings?


14. When would a programmer prefer a switch-statement to an if-statement?


15. What are some common problems with switch-statements?


16. What is the function of each part of the header line in a for-loop, 
and in what sequence are they executed?


17. When should the for-loop be used and when should the while-loop be used?


18. How do you print the numeric value of a char?


19. Describe what the line char foo(int x) means in a function definition.


20. When should you define a separate function for part of a program? List reasons.


21. What can you do to an int that you cannot do to a string?


22. What can you do to a string that you cannot do to an int?


23. What is the index of the third element of a vector?


24. How do you write a for-loop that prints every element of a vector?


25. What does vector<char> alphabet(26); do?


26. Describe what push_back() does to a vector.


27. What do vector’s member functions begin(), end(), and size() do?


28. What makes vector so popular/useful?


29. How do you sort the elements of a vector?
