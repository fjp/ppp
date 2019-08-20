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


### narrowing

Unsafe conversions are also called “narrowing” conversions, because they put a value into an object that may be too small (“narrow”) to hold it.

### object


### operation 


### operator 


### type 


### typesafety 


### value 


### variable
