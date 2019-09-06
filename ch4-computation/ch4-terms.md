## Terms

### abstraction

Our main tool for organizing a program — and for organizing our thoughts as we program — 
is to break up a big computation into many little ones. This technique comes in two variations:

- *Abstraction:* Hide details that we don’t need to use a facility ("implementation details") 
behind a convenient and general interface. For example, rather than considering the details of how to sort a phone book 
(thick books have been written about how to sort), we just call the sort algorithm from the C++ standard library.
`sort()` is a variant (§21.9) of the standard library sort algorithm (§21.8, §B.5.4) defined in `std_library.h`. 
Another example is the way we use computer memory. Direct use of memory can be quite messy,
so we access it through typed and named variables (§3.2), standard library `vectors` (§4.6, Chapters 17–19), `maps` (Chapter 21), etc.

- *"Divide and conquer":* Here we take a large problem and divide it into several little ones. 
For example, if we need to build a dictionary, we can separate that job into three: read the data, sort the data, and output the data.

### begin()

The member functions `begin()` and `end()` of a `vector` return iterators, `begin` and `end`; 
they identify the beginning and the end of the sequence. An STL sequence is what is usually called “half-open”; 
that is, the element identified by begin is part of the sequence, but the end iterator points one beyond the end of the sequence. 
The usual mathematical notation for such sequences (ranges) is `[begin:end)`.
An iterator is an object that identifies an element of a sequence.

### computation

By computation we simply mean the act of producing some outputs based on some inputs, 
such as producing the result (output) `49` from the argument (input) `7` using the computation (function) `square` (see §4.5).

All that a program ever does is to compute; that is, it takes some inputs and produces some output. 
After all, we call the hardware on which we run the program a computer.

### conditional statement

In programs, as in life, we often have to select among alternatives. 
In C++, that is done using either an `if`-statement or a `switch`-statement.

The simplest form of selection is an `if`-statement, which selects between two alternatives.
If its condition is true, the first statement is executed; otherwise, the second statement is.

A selection based on comparison of a value against several constants is so common that C++ provides a special statement for it: 
the `switch`-statement.

Conditional statements, conditional expressions and conditional constructs are features of a programming language, 
which perform different computations or actions depending on whether a programmer-specified boolean condition evaluates to true or false. This is always achieved by selectively altering the control flow based on some condition. 


The `?:` construct is called an arithmetic if or a conditional expression. 
The value of `(a>=b)?a:b` is `a` if `a>=b` and `b` otherwise. A conditional expression saves us from writing long-winded code like this:

```
int max(int a, int b) // max is global; a and b are local
{
  int m; // m is local
  if (a>=b)
      m = a;
  else
      m = b;
  return m;
}
```

Conditional expression:
`x?y:z` If `x` the result is `y`; otherwise the result is `z`.

### declaration

All the information needed to call a function is in the first line of its definition. 
For example:

```
int square(int x)
```

Given that, we know enough to say

```
int x = square(44);
```

We don't really need to look at the function body.

Almost all of the time, we are just interested in knowing how to call a function — seeing the definition would just be distracting.
C++ provides a way of supplying that information separate from the complete function definition. It is called a *function declaration*:

```
int square(int); // declaration of square
double sqrt(double); // declaration of sqrt
```

Note the terminating semicolons. 
A semicolon is used in a function declaration instead of the body used in the corresponding function definition:

```
int square(int x) // definition of square
{
    return x*x;
}
```

So, if you just want to use a function, you simply write — or more commonly `#include` — its declaration. 
The function definition can be elsewhere.

This distinction between declarations and definitions becomes essential in larger programs where we use
declarations to keep most of the code out of sight to allow us to concentrate on a single part of a program at a time (§4.2).

### definition

The syntax of a *function definition* can be described like this:

```
type identifi er ( parameter-list ) function-body
```

That is, a type (the return type), followed by an identifier (the name of the function),
followed by a list of parameters in parentheses, followed by the body of the
function (the statements to be executed). The list of arguments required by the
function is called a *parameter list* and its elements are called *parameters* (or formal
*arguments*). The list of parameters can be empty, and if we don’t want to return a
result we give `void` (meaning "nothing") as the return type. For example:

```
void write_sorry() // take no argument; return no value
{
    cout << "Sorry\n";
}
```

### divide and conquer

Our main tool for organizing a program — and for organizing our thoughts as we program — 
is to break up a big computation into many little ones. This technique comes in two variations:

- *Abstraction:* Hide details that we don’t need to use a facility ("implementation details") 
behind a convenient and general interface. For example, rather than considering the details of how to sort a phone book 
(thick books have been written about how to sort), we just call the sort algorithm from the C++ standard library.
`sort()` is a variant (§21.9) of the standard library sort algorithm (§21.8, §B.5.4) defined in `std_library.h`. 
Another example is the way we use computer memory. Direct use of memory can be quite messy,
so we access it through typed and named variables (§3.2), standard library `vectors` (§4.6, Chapters 17–19), `maps` (Chapter 21), etc.

- *"Divide and conquer":* Here we take a large problem and divide it into several little ones. 
For example, if we need to build a dictionary, we can separate that job into three: read the data, sort the data, and output the data.

### `else`

The simplest form of selection is an `if`-statement, which selects between two alternatives. 
For the second alternative the `else`-statement is used.
For example:

```cpp
int main()
{
    int a = 0;
    int b = 0;
    cout << "Please enter two integers\n";
    cin >> a >> b;
    if (a<b) // condition
             // 1st alternative (taken if condition is true):
        cout << "max(" << a << "," << b <<") is " << b <<"\n";
    else
             // 2nd alternative (taken if condition is false):
        cout << "max(" << a << "," << b <<") is " << a << "\n";
}
```

An `if`-statement chooses between two alternatives. If its condition is true, the first statement is executed; 
otherwise, the second statement is, which is defined by the `else` statement.

The general form of an `if`-statement is

```
if ( expression ) statement else statement
```

That is, an `if`, followed by an *expression* in parentheses, followed by a *statement*, followed by an `else`, followed by a *statement*. 
It is also possible to combine two `if`-statements: For that use an `if`-statement as the `else` part of an `if`-statement:

```
if ( expression ) statement else if ( expression ) statement else statement
```

For our program that gives this structure:

```cpp
if (unit == 'i')
    ...     // 1st alternative
else if (unit == 'c')
    ...     // 2nd alternative
else
    ...     // 3rd alternative
```

In this way, we can write arbitrarily complex tests and associate a statement with each alternative.

### `end()`


### expression


### `for`-statement


### range-`for`-statement


### function


### `if`-statement

The simplest form of selection is an `if`-statement, which selects between two alternatives. 
For the second alternative the `else`-statement is used.
For example:

```cpp
int main()
{
    int a = 0;
    int b = 0;
    cout << "Please enter two integers\n";
    cin >> a >> b;
    if (a<b) // condition
             // 1st alternative (taken if condition is true):
        cout << "max(" << a << "," << b <<") is " << b <<"\n";
    else
             // 2nd alternative (taken if condition is false):
        cout << "max(" << a << "," << b <<") is " << a << "\n";
}
```

An `if`-statement chooses between two alternatives. If its condition is true, the first statement is executed; 
otherwise, the second statement is, which is defined by the `else` statement.

The general form of an `if`-statement is

```
if ( expression ) statement else statement
```

That is, an `if`, followed by an *expression* in parentheses, followed by a *statement*, followed by an `else`, followed by a *statement*. 
It is also possible to combine two `if`-statements: For that use an `if`-statement as the `else` part of an `if`-statement:

```
if ( expression ) statement else if ( expression ) statement else statement
```

For our program that gives this structure:

```cpp
if (unit == 'i')
    ...     // 1st alternative
else if (unit == 'c')
    ...     // 2nd alternative
else
    ...     // 3rd alternative
```

In this way, we can write arbitrarily complex tests and associate a statement with each alternative.

### increment


### input


### iteration


### loop


### lvalue


### member function


### output


### `push_back()`


### repetition


### rvalue


### selection


### `size()`


### `sort()`


### statement


### `switch`-statement


### `vector`


### `while`-statement

