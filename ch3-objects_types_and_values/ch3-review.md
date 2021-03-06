1. What is meant by the term prompt?

A line of code that writes out a message to the screen (terminal, console, ...) which encourages or prompts the user to take action.

```cpp
int main() 
{
  cout << "Please enter your first name (followed by 'enter'):\n"; // Prompt the user to take action
  string first_name; // first_name is a variable of type     
  string cin >> first_name; // read characters into first_name
  cout << "Hello, " << first_name << "!\n";
}
```

2. Which operator do you use to read into a variable?

The operator to read from an input (such as the keyboard) into a variable is called the right shift operator `>>`:

```cpp
string first_name; // first_name is a variable of type string 
cin >> first_name; // read characters into first_name
```


3. If you want the user to input an integer value into your program for a variable named number, 
what are two lines of code you could write to ask the user to do it and to input the value into your program?

```cpp
cout << "Please input an integer value (followed by 'enter'):\n"; // Prompt the user to take action
int number;  // It could also be assumed that the variable number was declared before, which would make this line obsolet.
cin >> number; // Read the value from the user input into the variable named number.
```

4. What is `\n` called and what purpose does it serve?

This is a special *whitespace* character and is another name for newline (“end of line”) in an output output:

```cpp
cout << "This scentence is written over\n two lines.\n"; 
```

5. What terminates input into a string?

A so called *whitespace* character. By convention, reading of strings is terminated by what is called whitespace, 
that is, space, newline, and tab characters. Otherwise, whitespace by default is ignored by `>>`. 
For example, you can add as many spaces as you like before a number to be read; 
`>>` will just skip past them and read the number.

6. What terminates input into an integer?

A *whitespace* character or an input that is not an integer.

7. How would you write

```cpp
cout << "Hello, "; 
cout << first_name; 
cout << "!\n";
```

as a single line of code?


8. What is an object?

An object is a region of memory that holds a value of a given type that specifies what kind of information can be placed in it.

9. What is a literal?

Literals represent values of various types. 
For example, the literal 12 represents the integer value “twelve”,
"Morning" represents the character string value Morning, and true represents the Boolean value true.

10. What kinds of literals are there?

Integer literals come in three varieties:
- Decimal: a series of decimal digits
Decimal digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9
- Octal: a series of octal digits starting with 0
Octal digits: 0, 1, 2, 3, 4, 5, 6, and 7
- Hexadecimal: a series of hexadecimal digits starting with 0x or 0X 
Hexadecimal digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f, A, B, C, D, E, and F
- Binary: a series of binary digits starting with 0b or 0B (C++14) Binary digits: 0, 1

A suffix u or U makes an integer literal unsigned (§25.5.3), and a suffix l or L makes it long, for example, 10u and 123456UL.

A floating-point-literal contains a decimal point (.), an exponent (e.g., e3), or a floating-point suffix (d or f). 
For example:

```cpp
123 // int (no decimal point, suffix, or exponent)
123. // double: 123.0
123.0 // double
123   // double
0.123 // double: 0.123
1.23e3 // double: 1230.0
1.23e–3 // double: 0.00123
1.23e+3 // double 1230.0
```

Floating-point-literals have type double unless a suffix indicates otherwise. 
For example:

```cpp
1.23 // double 
1.23f // float
1.23L // long double
```

The literals of type bool are true and false. The integer value of true is 1 and the integer value of false is 0.

A character literal is a character enclosed in single quotes, for example, 'a' and '@'. In addition, there are some “special characters”:

| Name            | ASCII name | C++ name |
|:---------------:|:----------:|:--------:|
| newline         |    NL      |  \n      |
| horizontal tab  |    HT      |  \t      |
| vertical tab    |    VT      |  \v      |
| backspace       |    BS      |  \b      |
| carriage return |    CR      |  \r      |
| form feed       |    FF      |  \f      |
| alert           |    BEL     |  \a      |
| backslash       |    \       |  \\      |
| question mark   |    ?       |  \?      |
| single quote    |    '       |  \'      |
| double quote    |    "       |  \"      |
| octal number    |    ooo     |  \ooo    |
| hexadecimal number | hhh     |  \xhhh   |

A special character is represented as its “C++ name” enclosed in single quotes, for example, `'\n'` (newline) and `'\t'` (tab).

The character set includes the following visible characters:

```cpp
abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 0123456789
!@#$%^&*()_+|~`{ } [ ] :";'< > ?,./
```

The value of a character, such as `'a'` for a, is implementation dependent 
(but easily discovered, for example, `cout << int('a')`).

A string literal is a series of characters enclosed in double quotes, for example, "Knuth" and "King Canute". 
A newline cannot be part of a string; instead use the special character `\n` to represent newline in a string:

```cpp
"King
Canute " // error: newline in string literal
"King\nCanute" // OK: correct way to get a newline into a string literal
```

There is only one pointer literal: the null pointer, `nullptr`. 
For compatibility, any constant expression that evaluates to `0` can also be used as the null pointer. 

For example:

```cpp
t* p1 = 0; // OK: null pointer
int* p2 = 2–2; // OK: null pointer
int* p3 = 1; // error: 1 is an int, not a pointer
int z = 0; 
int* p4 = z; // error: z is not a constant although it is set to zero initially
```

The value 0 is implicitly converted to the null pointer.

11. What is a variable?

A named object is called a variable. 
For example, character strings are put into `string` variables and integers are put into `int` variables.

12. What are typical sizes for a char, an int, and a double?

Every `int` is of the same size; that is, the compiler sets aside the same fixed
amount of memory for each `int`. On a typical desktop computer, that amount is 4
bytes (32 bits). Similarly, `bools`, `chars`, and `doubles` are fixed size. You’ll typically
find that a desktop computer uses a byte (8 bits) for a `bool` or a char and 8 bytes for
a `double`. Note that different types of objects take up different amounts of space.
In particular, a `char` takes up less space than an `int`, and `string` differs from `double`,
`int`, and `char` in that different `strings` can take up different amounts of space.

13. What measures do we use for the size of small entities in memory, such as `ints` and `strings`?

For `ints` we use usually 4 bytes which are 32 bits. A `string` is of variable size with its length stored and made up of single characters that require each 1 byte of memory. 

14. What is the difference between `=` and `==`?

`=` is the assignment operator which assigns a value to variable and is also used to initialize a variable.

`==` is the equality operator which yields a `bool` (true or false, 1 or 0) by comparing two objects.

15. What is a definition?

A definition is a declaration that sets aside memory for an object.

16. What is an initialization and how does it differ from an assignment?

The assignment operator, represented as `=` gives a variable a new value. 
For example:

```cpp
int a = 3; // a starts out with the value 3
a = 4;     // a gets the value 4 (“becomes 4”)
int b = a; // b starts out with a copy of a’s value (that is, 4)
b = a+5;   // b gets the value a+5 (that is, 9)
a = a+7;   // a gets the value a+7 (that is, 11)
```

Above, we use “starts out with” and “gets” to distinguish two similar, but logically
distinct, operations:

- Initialization (giving a variable its initial value)
- Assignment (giving a variable a new value)

These operations are so similar that C++ allows us to use the same notation (the `=`) for both:

```cpp
int y = 8;     // initialize y with 8
x = 9;         // assign 9 to x

string t = "howdy!";  // initialize t with “howdy!”
s = "G'day";          // assign “G’day” to s
```

However, logically assignment and initialization are different. 
You can tell the two apart by the type specification (like `int` or `string`) that always starts an initialization; 
an assignment does not have that. In principle, an initialization always finds the variable empty. 
On the other hand, an assignment (in principle) must clear out the old value from the variable before putting in the new value.


17. What is string concatenation and how do you make it work in C++?

For strings `+` means concatenation; that is, when `s1` and `s2` are strings, 
`s1+s2` is a `string` where the characters from `s1` are followed by the characters from `s2`. 
For example, if `s1` has the value `"Hello"` and `s2` the value `"World"`, then `s1+s2` will have the value `"HelloWorld"`.

18. Which of the following are legal names in C++? If a name is not legal, why not?

```
This_little_pig latest thing MiniMineMine
This_1_is fine the_$12_method number
2_For_1_special _this_is_ok correct?
```

In a C++ program, a name starts with a letter and contains only letters, digits, and underscores. 

For example:

```cpp
x 
number_of_elements 
Fourier_transform
z2
Polygon
```

Therefore the following are not names:

```
the_$12_method  // $ is not a letter, digit, or underscore
2_For_1_special // a name must start with a letter
correct?        // ? is not a letter, digit, or underscore
```

The `_this_is_ok` is also a legal name, however, variables beginning with an underscore are reserved for implementation and
system entities and should therefore not be used in production code. 
If you read system code or machine-generated code, you might see names starting with underscores, such as `_foo`. 
Never write those yourself; such names are reserved for implementation and system entities. 
By avoiding leading underscores, you will never find your names clashing with some name that the implementation generated.

19. Give five examples of legal names that you shouldn’t use because they are likely to cause confusion.

Names are case sensitive; that is, uppercase and lowercase letters are distinct, so `x` and `X` are different names.
However, it is not a good idea to use the following names because a programmer can get confused with names from the standard library:

```cpp
int String = 2; // Similar to string
double Int = 1.2; // Similar to int
double Double = 1.2; // Similar to doulbe
```

You can use names of facilities in the standard library, such as `string`, but you shouldn’t. 
Reuse of such a common name will cause trouble if you should ever want to use the standard library:

```cpp
int string = 7; // Possible but will lead to trouble when using std::string
```

The C++ language reserves many (about 85) names as “keywords.” 
Using variable names that are similar to those can also be confusing:

```cpp
int Static = 42;
```

Avoid names that are easy to mistype, misread, or confuse. For example:

```cpp
Name names nameS foo f00 fl
f1 fI fi
```

The characters `0` (zero), `o` (lowercase `O`), `O` (uppercase `o`), `1` (one), `I` (uppercase `i`), and `l` (lowercase L) are particularly prone to cause trouble.

20. What are some good rules for choosing names?

When you choose names for your variables, functions, types, etc., 
choose meaningful names; that is, choose names that will help people understand your program.
Don't use variables with “easy to type” names like `x1`, `x2`, `s3`, and `p7`. 
Abbreviations and acronyms can confuse people, so use them sparingly.

Short names, such as `x` and `i`, are meaningful when used conventionally; 
that is, `x` should be a local variable or a parameter (see §4.5 and §8.4) and `i` should be
a loop index (see §4.4.2.3).

Don’t use overly long names; they are hard to type, make lines so long that
they don’t fit on a screen, and are hard to read quickly.

C++ implementations use underscores to separate words in an identifier, such as element_count, rather than alternatives, 
such as elementCount and ElementCount. C++ never uses names with all capital letters, such as `ALL_CAPITAL_LETTERS`,
because that’s conventionally reserved for macros (§27.8 and §A.17.2).

We should use an initial capital letter for types we define, such as `Square` and `Graph` or following the MISRA C style:
`c` prefix for classes and `s` prefix for structs. 
The C++ language and standard library don’t use the initial-capital-letter style, 
so it’s `int` rather than `Int` and `string` rather than `String`. 
Thus, our convention helps to minimize confusion between our types and the standard ones.


21. What is type safety and why is it important?

Every object is given a type when it is defined. 
A program — or a part of a program — is type-safe when objects are used only according to the rules for their type. 
Unfortunately, there are ways of doing operations that are not type-safe. 
For example, using a variable before it has been initialized is not considered type-safe


```cpp
int main() 
{
    double x; // we “forgot” to initialize:
              // the value of x is undefined
    double y = x; // the value of y is undefined
    double z = 2.0+x; // the meaning of + and the value of z are undefined
}
```

An implementation is even allowed to give a hardware error when the uninitialized x is used. 
Always initialize your variables! There are a few — very few — exceptions to this rule, 
such as a variable we immediately use as the target of an input operation.


22. Why can conversion from `double` to `int` be a bad thing?

On a typical desktop computer architecture `double` has a fixed memory amount of 8 bytes (64 bits).
An `int` on the other hand the compiler sets aside the same fixed amount of memory, which is 4 bytes (32 bits) on most 
architectures. To convert a `double` to an `int` a narrowing conversion is required where information can get lost,
which describes an unsafe conversion.
A conversion is said to be safe if the destination type can hold the value of the source type without loosing information.

```cpp
#include <iostream>

int main() 
{
    double d = 100;
    int i = d;     // implicit safe conversion
    double dd = i;
    if (d == dd)
        cout << "No loss of information\n";
}
```

```cpp
#include <iostream>
#include <iomanip>

int main()
{
    double d = 4294967296/2-1; // 2^32 = 4294967296, 2^32/2 = 2^31 = 2147483648
    //double d = 2147483648-1; // 2^32 = 4294967296, 2^32/2 = 2^31 = 2147483648

    int i = d;     // implicit safe conversion
    double dd = i;

    if (d == dd)
        std::cout << "Safe conversion: d == dd, with d == " << std::fixed << d << "; i == " << i << "\n";
    else
        std::cout << "Unsafe conversion: d == " << std::fixed << d << "; dd == " << std::fixed << dd << "; i == " << i << "\n";
}
```

This gives the output:

```
Safe conversion: d == dd, with d == 2147483647
```

Without `std::fixed` from the `iomanip` header, the output of `d` would be rounded:

```
Safe conversion: d == dd, with d == 2.14748e+09; i == 2147483647
```

One case where information gets lost with these types, is when the value of the `double` variable is too large to fit into the `int`.

The following example shows an unsafe conversion from `double` to `int`. 
Notice that `int` ranges from `-2^31` to `2^31-1`.

```cpp
#include <iostream>
#include <iomanip>

int main()
{
    double d = 4294967296/2; // 2^32 = 4294967296, 2^32/2 = 2^31 = 2147483648
    //double d = 2147483648-1; // 2^32 = 4294967296, 2^32/2 = 2^31 = 2147483648

    int i = d;     // implicit unsafe conversion
    double dd = i;

    if (d == dd)
        std::cout << "Safe conversion: d == dd, with d == " << std::fixed << d << "; i == " << i << "\n";
    else
        std::cout << "Unsafe conversion: d == " << std::fixed << d << "; dd == " << std::fixed << dd << "; i == " << i << "\n";
}
```

The output is:

```
Unsafe conversion: d == 2147483648.000000; dd == -2147483648.000000; i == -2147483648
```

They are unsafe in the sense that the value stored might differ from the value assigned. 

Another case where an unsafe conversion happens, is when the `double` variable stores a floating-point value and is converted to an `int`. 

```cpp
double x = 2.7; // lots of code
int y = x; // y becomes 2
```

a `double`-to-`int` conversion truncates (always rounds down, toward zero) rather than using the conventional `4/5` rounding.
What happens is perfectly predictable, but there is nothing in the `int y = x;` 
to remind us that information (the `.7`) is thrown away.


23. Define a rule to help decide if a conversion from one type to another is safe or unsafe.

A conversion is unsafe if the amount of memory reserved for the destination type is less than the memory reserved for the source type or if a floating-point type is converted to a fixed-point type (with a scaling factor of `1` for the fixed-point number). Such conversion lead to a loss of information where the value is narrowed. 
A value can be implicitly turned into a value of another type that does not equal the original value.

Safe conversions happen when the source type reserves less memory than the destination type. Safe conversions are:

```
bool to char 
bool to int 
bool to double 
char to int 
char to double 
int to double
```

All of the following conversions are unsafe although they are accepted by the compiler:

```cpp
double to int 
double to char 
double to bool 
int to char
```

They are unsafe in the sense that the value stored might differ from the value assigned.
