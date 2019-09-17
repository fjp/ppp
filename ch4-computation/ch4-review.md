1. What is a computation?

By computation we simply mean the act of producing some outputs based on some inputs, 
such as producing the result (output) `49` from the argument (input) `7` using the computation (function) `square` (see §4.5).

All that a program ever does is to compute; that is, it takes some inputs and produces some output. 
After all, we call the hardware on which we run the program a computer.

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
v=x;
v*=x;
v/=x;
v%=x
v+=x
v–=x
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

To handle cases where the value of a “variable” that is initialized with a value that
is not known at compile time but never changes after initialization, C++ offers a second form (beside `constexpr`) of constant (a `const`)

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

Literals represent values of various types. For example, the literal `12` represents
the integer value "twelve", `"Morning"` represents the character string value *Morning*,
and `true` represents the Boolean value *true*.

9. What is a symbolic constant and why do we use them?

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

10. What is a magic constant? Give examples.

Non-obvious literals in code (outside definitions of symbolic constants) are derisively referred to as magic constants.
For example:

```
299792458 // fundamental onstant of the universe: speed of light in vacuum measured in meters per second
3.14159 // approximation to pi
```

Use constants with descriptive names and not use these magic constants (literals) directly in an expression.

11. What are some operators that we can use for integers and floating-point values?

|                       |   Name                 | Comment                                    |
|:---------------------:|:-----------------------|:-------------------------------------------|
| `a+b`                 |  add                   |                                            |
| `a-b`                 |  subtract              |                                            |
| `out<<b`              |  write `b` to `out`    | where `out` is an `ostream`                |
| `in>>b`               |  read from `in` to `b` | where `in` is an `istream`                 |
| `a<b`                 |  less than             | result is `bool`                           |
| `a<=b`                |  less than or equal    | result is `bool`                           |
| `a>b`                 |  greater than          | result is `bool`                           |
| `a>=b`                |  greater than or equal | result is `bool`                           |
| `a==b`                |  equal                 | not to be confused with `=`                |
| `a!=b`                |  not equal             | result is `bool`                           |
| `a&&b`                |  logical and           | result is `bool`                           |
| <code>a&#124;a&#124;b</code> |  logical or     | result is `bool`                           |
| `lval=a`              |  assignment            | not to be confused with `==`               |
| `lval*=a`             |  compound assignment   | `lval=lval*a`; also for `/`, `%`, `+`, `-` |

12. What operators can be used on integers but not on floating-point numbers?


|                       |   Name                 | Comment                                    |
|:---------------------:|:-----------------------|:-------------------------------------------|
| `a%b`                 |  modulo (remainder)    |  only for integer types                    |

13. What are some operators that can be used for strings?

|                       |   Name                 | Comment                                    |
|:---------------------:|:-----------------------|:-------------------------------------------|
| `a+b`                 |  add                   |                                            |
| `out<<b`              |  write `b` to `out`    | where `out` is an `ostream`                |
| `in>>b`               |  read from `in` to `b` | where `in` is an `istream`                 |
| `a<b`                 |  less than             | result is `bool`                           |
| `a<=b`                |  less than or equal    | result is `bool`                           |
| `a>b`                 |  greater than          | result is `bool`                           |
| `a>=b`                |  greater than or equal | result is `bool`                           |
| `a==b`                |  equal                 | not to be confused with `=`                |
| `a!=b`                |  not equal             | result is `bool`                           |
| `lval=a`              |  assignment            | result is `bool`                           |
| `lval+=a`             |  compound assignment   | `lval=lval+a`                              |

14. When would a programmer prefer a `switch`-statement to an `if`-statement?

A selection based on comparison of a value against several constants can be tedious to write using `if` and `else`
statements. C++ offers a `switch`-statement which is archaic but still clearer than nested `if`-statements, 
especially when we compare against many constants. 

Here are some technical details about switch-statements:
- The value on which we switch must be of an integer, `char`, or enumeration (§9.5) type. 
In particular, you cannot switch on a `string`.
- The values in the case labels must be constant expressions (§4.3.1). 
In particular, you cannot use a variable in a case label.
- You cannot use the same value for two case labels.
- You can use several case labels for a single case.
- Don't forget to end each case with a `break`. Unfortunately, the compiler probably won't warn you if you forget.

15. What are some common problems with `switch`-statements?

The most common error with `switch`-statements is to forget to terminate a case
with a `break`.

For example:

```
int main() // example of bad code (a break is missing) 
{
    constexpr double cm_per_inch = 2.54; // number of centimeters in // an inch
    double length = 1; // length in inches or // centimeters
    char unit = 'a';
    cout << "Please enter a length followed by a unit (c or i):\n"; cin >> length >> unit;
    switch (unit) 
    { 
    case 'i':
        cout << length << "in == " << cm_per_inch*length << "cm\n"; 
    case 'c':
        cout << length << "cm == " << length/cm_per_inch << "in\n"; 
    }
}
```

Unfortunately, the compiler will accept this, and when you have finished case `'i'` you’ll just “drop through” 
into case `'c'`, so that if you enter `2i` the program will output

```
2in == 5.08cm 
2cm == 0.787402in
```

To select based on `string` you have to use an `if`-statement or a `map`.

```
int main() // you can switch only on integers, etc. 
{
    cout << "Do you like fish?\n"; 
    string s;
    cin >> s;
    switch (s) // error: the value must be of integer, char, or enum type
    { 
        case "no": 
            // ...
            break; 
        case "yes":
            // ...
            break; 
    }
}

```

Case label values must be constants and distinct. 

For example:

```
int main() // case labels must be constants 
{
    // define alternatives:
    int y = 'y'; // this is going to cause trouble constexpr char n = 'n';
    constexpr char m = '?';
    cout << "Do you like fish?\n";
    char a;
    cin >> a;
    switch (a) {
    case n:
        // ...
        break; 
    case y: // error: variable in case label
        // ...
        break; 
    case m:
        // . . .
        break; 
    case 'n': // error: duplicate case label (n’s value is ‘n’)
        // ...
        break; 
    default:
        // ...
        break; 
    }
}
```

16. What is the function of each part of the header line in a `for`-loop, 
and in what sequence are they executed?

A `for`-statement is like a `while`-statement except that the management of the control variable is concentrated
at the top where it is easy to see and understand.

For example:

```
// calculate and print a table of squares 0–99
int main()
{
    for (int i = 0; i<100; ++i)
        cout << i << '\t' << square(i) << '\n';
}
```

This means “Execute the body with i starting at 0 incrementing i after each execution
of the body until we reach 100.” A for-statement is always equivalent to some
while-statement. In this case

```
for (int i = 0; i<100; ++i)
cout << i << '\t' << square(i) << '\n';
```

means

```
{
    int i = 0; // the for-statement initializer
    while (i<100) { // the for-statement condition
        cout << i << '\t' << square(i) << '\n'; // the for-statement body
        ++i; // the for-statement increment
    }
}
```

Never modify the loop variable inside the body of a `for`-statement. That would
violate every reader’s reasonable assumption about what a loop is doing.

17. When should the `for`-loop be used and when should the `while`-loop be used?

Some novices prefer `while`-statements and some novices prefer `for`-statements.
However, using a `for`-statement yields more easily understood and more maintainable code
whenever a loop can be defined as a `for`-statement with a simple initializer, condition, and increment operation. 
Use a `while`-statement only when that’s not the case.

18. How do you print the numeric value of a `char`?

The value of a character, such as `'a'` for `a`, is implementation dependent (but easily discovered, for example, `cout << int('a')`).

19. Describe what the line `char foo(int x)` means in a function definition.

The line of this definition tells us that this is a function (that’s what the parentheses mean), 
that it is called `foo`, that it takes an `int` argument (here, called `x`), and that it returns a `char` 
(the type of the result always comes first in a function declaration);

20. When should you define a separate function for part of a program? List reasons.

We define a function when we want a separate computation with a name because doing so

- Makes the computation logically separate
- Makes the program text clearer (by naming the computation)
- Makes it possible to use the function in more than one place in our program
- Eases testing

21. What can you do to an `int` that you cannot do to a `string`?

The following operators can be applied to an `int` but not to a `string`.

|                       |   Name                 | Comment                                    |
|:---------------------:|:-----------------------|:-------------------------------------------|
| `a-b`                 |  subtract              |                                            |
| `a*b`                 |  multiplication        |                                            |
| `a/b`                 |  division              |                                            |
| `a%b`                 |  remainder (modulo)    |                                            |
| `a++`                 |  increment by 1        |                                            |
| `a--`                 |  decrement by 1        |                                            |
| `a+=n`                |  increment by n        |                                            |
| `a+=n`                |  decrement by n        |                                            |
| `a*=b`                |  multiply and assign   |                                            |
| `a/=b`                |  divide and assign     |                                            |
| `a%=b`                |  remainder and assign  |                                            |

22. What can you do to a `string` that you cannot do to an `int`?

|                       |   Name                   | Comment                                    |
|:---------------------:|:-------------------------|:-------------------------------------------|
| `a+b`                 |  concatenate             |                                            |
| `a+=b`                |  add to end              |                                            |
| `a[i]`                |  index an `char` element |                                            |
| `a[i]='b'`            |  change a character      |                                            |
| `a.size()`            |  get the size            |                                            |

23. What is the index of the third element of a `vector`?

The first element of a `vector` has index 0, the second index 1, and so on. 
We refer to an element by subscripting the name of the vector with the element’s index, 
for example, `v[0]` for the value of the first element, the value of v[1] yields the second element, and so on. 
Indices for a vector always start with 0 and increase by 1. The index of the third element is therefore `v[2]`.

```
vector<int> vec = {0, 1, 2};
int i3 = vec[2];
```

24. How do you write a `for`-loop that prints every element of a `vector`?

To print every value of a vector, a range-based `for`-loop can be used:

```
vector<int> vec = {0, 1, 2, 3, 4, 5};
for (auto element : vec)
{
    cout << element;
}
```

A vector “knows” its size, so we can print the elements of a vector like this:

```
vector<int> v = {5, 7, 9, 4, 6, 8}; 
for (int i=0; i<v.size(); ++i)
    cout << v[i] << '\n';
```

The call `v.size()` gives the number of elements of the `vector` called `v`. 
In general, `v.size()` gives us the ability to access elements of a vector without accidentally referring to an element
outside the vector’s range. The range for a vector `v` is `[0:v. size())`. 
That’s the mathematical notation for a half-open sequence of elements. 
The first element of `v` is `v[0]` and the last `v[v.size()–1]`. If `v.size==0`, `v` has no elements, that is, 
`v` is an empty vector. 
This notion of half-open sequences is used throughout C++ and the C++ standard library (§17.3, §20.3).


The language takes advantage of the notion of a half-open sequence to provide a simple loop over all the elements of a 
sequence, such as the elements of a vector. 

For example:

```
vector<int> v = {5, 7, 9, 4, 6, 8}; 
for (int x : v) // for each x in v
    cout << x << '\n';
```  
 
This is called a range-for-loop because the word range is often used to mean the same as "sequence of elements".
We read `for (int x : v)` as “for each `int` `x` in `v`” and the meaning of the loop is exactly like the equivalent loop
over the subscripts `[0:v.size())`. 
We use the range-`for`-loop for simple loops over all the elements of a sequence looking at one element at a time.

25. What does `vector<char> alphabet(26);` do?

This initializes a vector that can hold 26 elements of type `char` which are initialized to `'\0'`, the null/empty char.

This defines a vector of a given size, 26 in this case, without specifying the element values. 
In that case, we use the `(n)` notation where `n` is the number of elements, and the elements are given a default value 
according to the element type. 

For example:

```
vector<int> vi(6); // vector of 6 ints initialized to 0 
vector<string> vs(4); // vector of 4 strings initialized to ""
```

26. Describe what `push_back()` does to a vector.

The operation `push_back()` adds a new element to a `vector`. 
The new element becomes the last element of the `vector`.

For example:

```
vector<double> v; // start off empty; that is, v has no elements
v.push_back(2.7); // add an element with the value 2.7 at end (“the back”) of v
                  // v now has one element and v[0]==2.7
v.push_back(5.6); // add an element with the value 5.6 at end of v
                  // v now has two elements and v[1]==5.6
```

Note the syntax for a call of `push_back()`. It is called a member function call; 
`push_back()` is a member function of `vector` and must be called using this dot notation:

```
member-function-call:
    object_name.member-function-name ( argument-list )
```

27. What do vector’s member functions `begin()`, `end()`, and `size()` do?

The member functions `begin()` and `end()` of a `vector` return iterators, `begin` and `end`; 
they identify the beginning and the end of the sequence. An STL sequence is what is usually called “half-open”; 
that is, the element identified by begin is part of the sequence, 
but the end iterator points one beyond the end of the sequence. 
The usual mathematical notation for such sequences (ranges) is `[begin:end)`.
An iterator is an object that identifies an element of a sequence.

The member function `size()` returns the number of elements stored in a `vector`.
The call `v.size()` gives the number of elements of the vector called `v`. 
In general, `v.size()` gives us the ability to access elements of a vector without accidentally referring to an element 
outside the `vector`'s range. The range for a `vector` `v` is `[0:v.size())`. 
That's the mathematical notation for a half-open sequence of elements. 
The first element of `v` is `v[0]` and the last `v[v.size()–1]`. 
If `v.size==0`, `v` has no elements, that is, `v` is an empty `vector`. 
This notion of half-open sequences is used throughout C++ and the C++ standard library (§17.3, §20.3).


28. What makes vector so popular/useful?

A `vector` is similar to an array in C and other languages. 
However, you need not specify the size (length) of a `vector` in advance, and you can add as many elements as you like.
The C++ standard `vector` has other useful properties.

29. How do you sort the elements of a `vector`?

C++ offers a variant of the standard library `sort` algorithm, `sort()`:

```
vector<double> temps = {33.0, 23.9, 25.7, 21.2, 28.5, 19.8};
sort(temps); // modifies temps vector to be in sorted order
```
