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

The member functions `begin()` and `end()` of a `vector` return iterators, `begin` and `end`; 
they identify the beginning and the end of the sequence. An STL sequence is what is usually called “half-open”; 
that is, the element identified by begin is part of the sequence, 
but the end iterator points one beyond the end of the sequence. 
The usual mathematical notation for such sequences (ranges) is `[begin:end)`.
An iterator is an object that identifies an element of a sequence.

### expression

The most basic building block of programs is an expression. An expression computes
a value from a number of operands. The simplest expression is simply a literal value, such as `10`, `'a'`, `3.14`, or `"Norah"`.
Names of variables are also expressions. A variable represents the object of which it is the name.

### `for`-statement

Iterating over a sequence of numbers is so common that C++, like most other programming languages, has a special syntax for it. 
A `for`-statement is like a `while`-statement except that the management of the control variable is concentrated at the top 
where it is easy to see and understand. 
For example:

```cpp
// calculate and print a table of squares 0–99
int main()
{
  for (int i = 0; i<100; ++i)
    cout << i << '\t' << square(i) << '\n';
}
```

This means "Execute the body with `i` starting at `0` incrementing i after each execution of the body until we reach `100`." 
A `for`-statement is always equivalent to some `while`-statement. The corresponding `while`-statement would look like:

```cpp
{
    int i = 0;  // the for-statement initializer
    while (i<100) {   // the for-statement condition
        cout << i << '\t' << square(i) << '\n';   // the for-statement body
        ++i; // the for-statement increment
    }
}
```

Using a `for`-statement yields more easily understood and more maintainable code whenever a loop can be defined as a `for`-statement 
with a simple initializer, condition, and increment operation. Use a `while`-statement only when that's not the case.
Never modify the loop variable inside the body of a `for`-statement. 
That would violate every reader's reasonable assumption about what a loop is doing.

### range-`for`-statement

The language takes advantage of the notion of a half-open sequence to provide a simple loop over all the elements of a sequence, 
such as the elements of a `vector`. 
For example:

```cpp
vector<int> v = {5, 7, 9, 4, 6, 8};
for (int x : v) // for each x in v
    cout << x << '\n';
```

This is called a range-`for`-loop because the word range is often used to mean the same as "sequence of elements". 
We read `for (int x : v)` as "for each `int` `x` in `v`" and the meaning of the loop is exactly like the equivalent loop over 
the subscripts `[0:v.size())`. 
We use the range-`for`-loop for simple loops over all the elements of a sequence looking at one element at a time. 
More complicated loops, such as looking at every third element of a vector, looking at only the second half of a vector, 
or comparing elements of two vectors, are usually better done using the more complicated and more general traditional `for`-statement (§4.4.2.3).

### function

A function is a named sequence of statements. A *function* can return a result (also called a *return value*).
The standard library provides a lot of useful functions, such as the square root function `sqrt()` that we used in §3.4. 
However, we write many functions ourselves.

Here is a plausible definition of `square`:

```cpp
int square(int x) // return the square of x
{
    return x*x;
}
```

The first line of this definition tells us that this is a function (that's what the parentheses mean), that it is called `square`, 
that it takes an `int` argument (here, called `x`), and that it returns an `int` 
(the type of the result always comes first in a function declaration); that is, we can use it like this:

```cpp
int main()
{
    cout << square(2) << '\n'; // print 4
    cout << square(10) << '\n'; // print 100
}
```

We don't have to use the result of a function call, but we do have to give a function exactly the arguments it requires.

The *function body* is the block (§4.4.2.2) that actually does the work.

```cpp
{
    return x*x; // return the square of x
}
```

The syntax of a *function definition* can be described like this:

```
type identifi er ( parameter-list ) function-body
```

That is, a type (the return type), followed by an identifier (the name of the function), followed by a list of parameters in parentheses,
followed by the body of the function (the statements to be executed). 
The list of arguments required by the function is called a *parameter list* and its elements are called *parameters* 
(or formal *arguments*). The list of parameters can be empty, and if we don’t want to return a result we give void (meaning "nothing") 
as the return type. 

For example:

```cpp
void write_sorry() // take no argument; return no value
{
    cout << "Sorry\n";
}
```

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

The increment operators `a++`, `++a`, `a+=n` is defined for types `int` and `double` to increment by one or `n` respectively.

Incrementing a variable (that is, adding 1 to it) is so common in programs that C++ provides a special syntax for it. 

For example:

```cpp
++counter
```

means

```cpp
counter = counter + 1
```

There are many other common ways of changing the value of a variable based on its current value. 
For example, we might like to add 7 to it, to subtract 9, or to multiply it by 2. 
Such operations are also supported directly by C++. 

For example:

```cpp
a += 7;  // means a = a+7
b –= 9;  // means b = b–9
c *= 2;  // means c = c*2
```

In general, for any binary operator `oper`, `a oper= b` means `a = a oper b` (§A.5). 
For starters, that rule gives us operators `+=`, `–=`, `*=`, `/=`, and `%=`. 
This provides a pleasantly compact notation that directly reflects our ideas. 
For example, in many application domains `*=` and `/=` are referred to as "scaling".

### input

From one point of view, all that a program ever does is to compute; that is, it takes some inputs and produces some output.
After all, we call the hardware on which we run the program a computer. 
This view is accurate and reasonable as long as we take a broad view of what constitutes input and output.

The input can come from a keyboard, from a mouse, from a touch screen, from files, from other input devices, 
from other programs, from other parts of a program. "Other input devices" is a category that contains most really 
interesting input sources: music keyboards, video recorders, network connections, temperature sensors, 
digital camera image sensors, etc. The variety is essentially infinite.
To deal with input, a program usually contains some data, sometimes referred to as its *data structures* or its *state*.

When we say "input" and “output” we generally mean information coming into and out of a computer, 
but the terms can also be used for information given to or produced by a part of a program. 
Inputs to a part of a program are often called *arguments* and outputs from a part of a program are often called *results*.
By computation we simply mean the act of producing some outputs based on some inputs, 
such as producing the result (output) `49` from the argument (input) `7` using the computation (function) `square` (see §4.5).

### iteration

Programming languages provide convenient ways of doing something several times. 
This is called *repetition* or — especially when you do something to a series of elements of a data structure — *iteration*.



### loop

In C++ a loop can be a `while`-statement or a `for`-statement. These statements are ways to repeat some statement (to loop).
For this we need:

- A variable to keep track of how many times we have been through the loop (a loop variable or a control variable), 
for example the `int` called `i`
- An initializer for the loop variable, for example `int i = 0`
- A termination criterion, for example that we want to go through the loop 100 times
- Something to do each time around the loop (the body of the loop)

For example:

```cpp
while (i<100) // the loop condition testing the loop variable i {
cout << i << '\t' << square(i) << '\n';
++i ; // increment the loop variable i }
```


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

### `switch`-statement


### `vector`


### `while`-statement

