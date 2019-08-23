## Review

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
For example, character strings are put into string variables and integers are put into int variables.

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

16. What is an initialization and how does it differ from an assignment?

17. What is string concatenation and how do you make it work in C++?

18. Which of the following are legal names in C++? If a name is not legal, why not?

```
This_little_pig latest thing MiniMineMine
This_1_is fine the_$12_method number
2_For_1_special _this_is_ok correct?
```

19. Give five examples of legal names that you shouldn’t use because they are likely to cause confusion.


20. What are some good rules for choosing names?


21. What is type safety and why is it important?


22. Why can conversion from double to int be a bad thing?


23. Define a rule to help decide if a conversion from one type to another is safe or unsafe.

