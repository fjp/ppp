## Terms


### assignment

An assignment is an operator, denoted by the `=` sign. This operator assings a new value to a variable. 
For example:

```cpp
int a = 3; // a starts out with the value 3
a = 4; // a gets the value 4 (“becomes 4”)
int b = a; // b starts out with a copy of a’s value (that is, 4)
b = a+5; // b gets the value a+5 (that is, 9) a:
a = a+7; // a gets the value a+7 (that is, 11)
```

That last assignment deserves notice. First of all it clearly shows that `=` does not mean equals — clearly, 
a doesn’t equal `a+7`. It means assignment, that is, to place a new value in a variable. 
What is done for `a=a+7` is the following:

1. First, get the value of `a`; that’s the integer `4`. 
2. Next, add `7` to that `4`, yielding the integer `11`. 
3. Finally, put that `11` into `a`.

### cin

The name cin refers to the standard input stream (pronounced “see-in,” for “character input”) defined in the standard library. It is used to read characters from input (keyboard) into a variable:

```cpp
string first_name;
cin >> first_name; // read characters into variable first_name
```
It is used in combination with the right shift operator `>>` where the second operand specifies where the (keyboard) input goes.

### concatenation 

For strings `+` means concatenation; that is, when `s1` and `s2` are strings,
`s1+s2` is a string where the characters from `s1` are followed by the characters from `s2`. 
For example, if `s1` has the value `"Hello"` and `s2` the value `"World"`, then `s1+s2` will have the value `"HelloWorld"`.

### conversion 

Conversion means to convert one type to another where a possible loss of information is possible. Because of this, conversions can be categorized to be safe and unsafe.

Safe conversion means that a type which requires less memory than another one, can be converted to that type and back without loss of information. 
For example, a `char`, which usually requires one byte of of memory, can be converted to an `int`, which is usually made up of four bytes and back again. The twice converted value will be the same as the original one.

```cpp
char c = 'x'; 
int i1 = c; 
int i2 = 'x';

// i1 == i2
```

Here both `i1` and `i2` the the same value `120`.
The following are safe conversions for standard types:

```cpp
bool to char 
bool to int 
bool to double 
char to int 
char to double 
int to double
```

A useful conversion is int to double because it allows us to mix ints and doubles in expressions.

(Implicit) unsafe conversion on the other hand can lose information. Unsafe means, that a value can be implicitly turned into a value of another type that does not equal the original value.

```cpp
int a = 20000; 
char c = a;     // try to squeeze a large int into a small char 
int b = c;

// a != b
```

### declaration 

A declaration is a statement that gives a name to an object.

### decrement

C++ provides a special syntax for decrementing (that is, subtracting `1` from it) a variable:

```
int a = 10;
a--; // post decrement
--a; // pre decrement
```

Both decrement operators result in `a = a - 1;`. Post and pre decrement are useful, for example, when indexing arrays.


### definition

A definition is a declaration that sets aside memory for an object.

### increment 

Incrementing a variable (that is, adding `1` to it) is so common in programs that C++ provides a special syntax for it. 
For example:

```
++counter
```

means

```cpp
counter = counter + 1
```

There are many other common ways of changing the value of a variable based on its current value. 
For example, we might like to add `7` to it, to subtract `9`, or to multiply it by `2`. 
Such operations are also supported directly by C++. For example:

```cpp
a += 7; // means a = a+7
b –= 9; // means b = b–9
c *= 2; // means c = c*2
```

In general, for any binary operator `oper`, `a oper= b` means `a = a oper b`. For starters, 
that rule gives us operators `+=`, `–=`, `*=`, `/=`, and `%=`. 
This provides a pleasantly compact notation that directly reflects our ideas. 
For example, in many application domains `*=` and `/=` are referred to as “scaling.”

### initialization

An initialization gives a variable its initial value. 
Assignments are similar to initialization which is illustrated in the following example:

```cpp
string a = "alpha"; // a starts out with the value “alpha” a: alpha
a = "beta"; // a gets the value “beta” (becomes “beta”) a: beta
string b = a; // b starts out with a copy of a’s value (that is, “beta”)
b = a+"gamma"; // b gets the value a+“gamma” (that is, “betagamma”)
a = a+"delta"; // a gets the value a+“delta” (that is, “betadelta”)
```

Above, we use “starts out with” and “gets” to distinguish two similar, but logically
distinct, operations:

- Initialization (giving a variable its initial value)
- Assignment (giving a variable a new value)

These operations are so similar that C++ allows us to use the same notation (the `=`) for both:

```cpp
int y = 8; // initialize y with 8
x = 9;  // assign 9 to x
string t = "howdy!"; // initialize t with “howdy!”
s = "G'day";  // assign “G’day” to s
```

However, logically assignment and initialization are different. 
You can tell the two apart by the type specification (like int or string) that always starts an initialization; 
an assignment does not have that. In principle, an initialization always finds the variable empty. On the other hand, 
an assignment (in principle) must clear out the old value from the variable before putting in the new value.


### name 

We name our variables so that we can remember them and refer to them from other parts of a program. 
In a C++ program, a name starts with a letter and contains only letters, digits, and underscores.

```cpp
x 
number_of_elements 
Fourier_transform
z2
Polygon
```

The following are not names:

```cpp
2x              // a name must start with a letter
time$to$market  // $ is not a letter, digit, or underscore
Start menu      // space is not a letter, digit, or underscore
```

When we say “not names,” we mean that a C++ compiler will not accept them as names.
If you read system code or machine-generated code, you might see names starting with underscores, 
such as `_foo`. Never write those yourself; such names are reserved for implementation and system entities. 
By avoiding leading underscores, you will never find your names clashing with some name that the implementation generated.
Names are case sensitive; that is, uppercase and lowercase letters are distinct, so `x` and `X` are different names.

### narrowing

Unsafe conversions are also called “narrowing” conversions, because they put a value into an object that may be too small (“narrow”) to hold it.

### object

An object is some memory that holds a value of a given type.

### operation 

The type of a variable determines what operations we can apply to it and what they mean. 
For example:

```cpp
int count; // >> reads an integer into count
cin >> count; 
string name; 
cin >> name; // >> reads a string into name
int c2 = count+2; // + adds integers
string s2 = name + " Jr. "; // + appends characters
int c3 = count–2; // – subtracts integers
string s3 = name – " Jr. "; // error: – isn’t defined for strings
```

By “error” we mean that the compiler will reject a program trying to subtract strings. 
The compiler knows exactly which operations can be applied to each variable and can therefore prevent many mistakes.

### operator 

An operator is a function that has one ore two operands of the same or possibly different type, which yields a result.

| assignment | increment, decrement | arithmetic | logical  | comparison | member access | other    |
|:----------:|:--------------------:|:----------:|:--------:|:----------:|:-------------:|:--------:|
| `a = b`    | `++a`                | `+a`       | `!a`     | `a == b`   |   `a[b]`      | `a(...)` |
| `a += b`   | `--a`                | `-a`       | `a && b` | `a != b`   |   `*a`        | `a, b`   |
| `a -= b`   | `a++`                | `a + b`    | `a II b` | `a < b`    |   `&a`        | `? :`    |
| `a *= b`   | `a--`                | `a - b`    |          | `a > b`    |   `a->b`      |          |
| `a /= b`   |                      | `a * b`    |          | `a <= b`   |   `a.b`       |          |
| `a %= b`   |                      | `a / b`    |          | `a >= b`   |   `a->*b`     |          |
| `a &= b`   |                      | `a % b`    |          | `a <=> b`  |   `a.*b`      |          |
| `a I= b`   |                      | `~a`       |          |            |               |          |
| `a ^= b`   |                      | `a & b`    |          |            |               |          |
| `a <<= b`  |                      | `a I b`    |          |            |               |          |
| `a >>= b`  |                      | `a ^ b`    |          |            |               |          |
|            |                      | `a << b`   |          |            |               |          |
|            |                      | `a >> b`   |          |            |               |          |

https://en.cppreference.com/w/cpp/language/operators


### type

An object is described by a type which specifies what kind of information can be placed into that object.
Put another way, a type specifies how a region of memory, describing that object, should be interpreted. 

Consider the following named object (variable):

```cpp
int a = 42;
```

The type of the variable `a` is `int` which is suitable to describe the integer value `42`.

It is not possible to put values of the wrong type into a variable:

```cpp
string name2 = 39; // error: 39 isn’t a string
int number_of_steps = "Annemarie"; // error: “Annemarie” is not an int
```

Here are the five most important types:

```cpp
int number_of_steps = 39;  // int for integers
double flying_time = 3.5;  // double for floating-point numbers
char decimal_point = '.';  // char for individual characters
string name = "Annemarie"; // string for character strings
bool tap_on = true;        // bool for logical variables
```

Note that each of these types has its own characteristic style of literals.

In addition to specifying what values can be stored in a variable, 
the type of a variable determines what operations we can apply to it and what they mean.
Check the example of the term [operation](operation).


### typesafety 


### value 


### variable
