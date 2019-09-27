1. Name four major types of errors and briefly define each one.

- *Compile-time errors:* Errors found by the compiler. We can further classify compile-time errors based on which language rules they violate, for example: 
    - Syntax errors
    - Type errors
- *Link-time errors:* Errors found by the linker when it is trying to combine object files into an executable program.
- *Run-time errors:* Errors found by checks in a running program. We can further classify run-time errors as 
    - Errors detected by the computer (hardware and/or operating system) 
    - Errors detected by a library (e.g., the standard library) 
    - Errors detected by user code
- *Logic errors:* Errors found by the programmer looking for the causes of erroneous results.

2. What kinds of errors can we ignore in student programs?

We will assume that your program 
    1. Should produce the desired results for all legal inputs 
    2. Should give reasonable error messages for all illegal inputs 
    3. Need not worry about misbehaving hardware 
    4. Need not worry about misbehaving system software 
    5. Is allowed to terminate after finding an error

Essentially all programs for which assumptions 3, 4, or 5 do not hold can be considered advanced and beyond the scope of this book. 
However, assumptions 1 and 2 are included in the definition of basic professionalism.

3. What guarantees should every completed project offer?

We will assume that your program 
    1. Should produce the desired results for all legal inputs 
    2. Should give reasonable error messages for all illegal inputs 
    3. Need not worry about misbehaving hardware 
    4. Need not worry about misbehaving system software 
    5. Is allowed to terminate after finding an error

Essentially all programs for which assumptions 3, 4, or 5 do not hold can be considered advanced and beyond the scope of this book. 
However, assumptions 1 and 2 are included in the definition of basic professionalism.

4. List three approaches we can take to eliminate errors in programs and produce acceptable software.

Basically, we offer three approaches to producing acceptable software:
- Organize software to minimize errors.
- Eliminate most of the errors we made through debugging and testing.
- Make sure the remaining errors are not serious.
None of these approaches can completely eliminate errors by itself; we have to use all three. 

Experience matters immensely when it comes to producing reliable programs, that is,
programs that can be relied on to do what they are supposed to do with an acceptable error rate. 
Please don't forget that the ideal is that our programs always do the right thing. 
We are usually able only to approximate that ideal, but that's no excuse for not trying very hard.


Start thinking about debugging before you write the first line of code. 
Once you have a lot of code written it's too late to try to simplify debugging. 
Decide how to report errors: "Use `error()` and catch exception in `main()`" will be your default answer in this book.

Make the program easy to read so that you have a chance of spotting the bugs:

- Comment your code well. That doesn't simply mean "Add a lot of comments." You don't say in English what is better said in code. 
Rather, you say in the comments — as clearly and briefly as you can — what can't be said clearly in code:
    - The name of the program
    - The purpose of the program
    - Who wrote this code and when
    - Version numbers
    - What complicated code fragments are supposed to do
    - What the general design ideas are
    - How the source code is organized
    - What assumptions are made about inputs
    - What parts of the code are still missing and what cases are still not handled
- Use meaningful names. 
That doesn't simply mean “Use long names.”
- Use a consistent layout of code. 
Your IDE tries to help, but it can't do everything and you are the one responsible.
- Break code into small functions, each expressing a logical action. 
Try to avoid functions longer than a page or two; most functions will be much shorter.
- Avoid complicated code sequences. Try to avoid nested loops, nested `if`-statements, complicated conditions, etc. 
Unfortunately, you sometimes need those, but remember that complicated code is where bugs can most easily hide
- Use library facilities rather than your own code when you can. 
A library is likely to be better thought out and better tested than what you could produce as an alternative while busily solving your main problem.

5. Why do we hate debugging?

Debugging works roughly like this:
    1. Get the program to compile.
    2. Get the program to link.
    3. Get the program to do what it is supposed to do.
Basically, we go through this sequence again and again: hundreds of times, thousands of times,
again and again for years for really large programs. Each time something doesn't work we have
to find what caused the problem and fix it. I consider debugging the most tedious and timewasting
aspect of programming and will go to great lengths during design and programming to
minimize the amount of time spent hunting for bugs. Others find that hunt thrilling and the
essence of programming — it can be as addictive as any video game and keep a programmer
glued to the computer for days and nights (I can vouch for that from personal experience also).

6. What is a syntax error? Give five examples.

```cpp
int s1 = area(7; // error: ) missing
int s2 = area(7) // error: ; missing
Int s3 = area(7); // error: Int is not a type
int s4 = area('7); // error: non-terminated character (' missing)
int s5 = area(7): // error: semicolon missing

string x1 = "5; // error: non-terminated string (" missing)
vector<int> v(10); v(3) = 2; // error: wrong access operator () instead of []
```

Each of those lines has a syntax error; that is, they are not well formed according to the C++ grammar, 
so the compiler will reject them. Unfortunately, syntax errors are not always easy to report in a way that you, 
the programmer, find easy to understand. That's because the compiler may have to read a bit further than the error to be 
sure that there really is an error. The effect of this is that even though syntax errors tend to be completely trivial 
(you'll often find it hard to believe you have made such a mistake once you find it), 
the reporting is often cryptic and occasionally refers to a line further on in the program. 
So, for syntax errors, if you don't see anything wrong with the line the compiler points to, 
also look at previous lines in the program.

7. What is a type error? Give five examples.

Type errors are mismatches between the types you declared (or forgot to declare) for your variables,
functions, etc. and the types of values or expressions you assign to them, pass as function
arguments, etc. For example:

```cpp
int x0 = arena(7); // error: undeclared function
int x1 = area(7); // error: wrong number of arguments in case area requires two arguments
int x2 = area("seven",2); // error: 1st argument has a wrong type
int x3 = area("seven","three"); // error: both arguments have a wrong type
int x4 = area(1,"three"); // error: 2nd argument has a wrong type
string x5 = area(7); // error: wrong return type if area is returning an int. There is no direct conversion from int to string
```

8. What is a linker error? Give three examples.

A program consists of several separately compiled parts, called translation units. Every function
in a program must be declared with exactly the same type in every translation unit in which it is
used. We use header files to ensure that; see §8.3. Every function must also be defined exactly
once in a program. If either of these rules is violated, the linker will give an error. 
Here is an example of a program that might give a typical linker error:

```cpp
int area(int length, int width); // calculate area of a rectangle
int main()
{
int x = area(2,3);
}
```

Unless we somehow have defined area() in another source file and linked the code generated from that source file to this code, 
the linker will complain that it didn't find a definition of `area()`.

The definition of `area()` must have exactly the same types (both the return type and the argument types) as we used in our file, 
that is:

```cpp
int area(int x, int y) { /* . . . */ } // "our" area()
```

Functions with the same name but different types will not match and will be ignored:

```cpp
double area(double x, double y) { /* . . . */ } // not "our" area()
int area(int x, int y, char unit) { /* . . . */ } // not "our" area()
```

Note that a misspelled function name doesn't usually give a linker error. Instead, the compiler
gives an error immediately when it sees a call to an undeclared function. Compile-time
errors are found earlier than link-time errors and are typically easier to fix.
The linkage rules for functions, as stated above, also hold for all other entities of a program,
such as variables and types: there has to be exactly one definition of an entity with a given name,
but there can be many declarations, and all have to agree exactly on its type. For more details,
see §8.2–3.

9. What is a logic error? Give three examples.

Once we have removed the initial compiler and linker errors, the program runs. 
Typically, what happens next is that no output is produced or that the output that the program produces is just wrong. 
This can occur for a number of reasons. Maybe your understanding of the underlying program logic is flawed; 
maybe you didn't write what you thought you wrote; or maybe you made some "silly error" in one of your if-statements, or whatever. 
Logic errors are usually the most difficult to find and eliminate, because at this stage the computer does what you asked it to.

The following program would output nothing because variable `a` is assigned zero again in the parentheses of the `if`-statement
instead of using the equal operator `==`.

```cpp
int a = 0;
if (a = 0)
    cout << "a is equal to zero\n";
```

Another mistake can happen when `<` and `>` are mistakenly swapped. 
In the following example, the block of the `while`-loop would never be entered. 

```cpp
// initialize a
int a = 0;
while (a > 10)
{   
    // ... do something
    ++a;
}
```

The following function tries to find the minimum integer in a vector and return it:

```cpp
int findMinimum(vector<int> v)
{
    int minimum = 0;
    for (int element : v)
    {
        if (element < minimum)
            minimum = element;
    }
    return minimum;
}
``` 

Calling this function with a vector that contains only positive numbers results in a wrong return value. 
At least logically according to what the function was intended to do.

```cpp
int main()
{
    vector<int> v = {1, 5, 6, 1};
    cout << "Minimum of v is: " << findMinimum(v) << '\n';
}
```


10. List four potential sources of program errors discussed in the text.


11. How do you know if a result is plausible? What techniques do you have to answer such questions?


12. Compare and contrast having the caller of a function handle a run-time error vs. the called function's handling 
the run-time error.


13. Why is using exceptions a better idea than returning an “error value”?


14. How do you test if an input operation succeeded?


15. Describe the process of how exceptions are thrown and caught.


16. Why, with a vector called v, is v[v.size()] a range error? What would be the result of calling this?


17. Define pre-condition and post-condition; give an example (that is not the area() function from this chapter), 
preferably a computation that requires a loop.


18. When would you not test a pre-condition?


19. When would you not test a post-condition?


20. What are the steps in debugging a program?


21. Why does commenting help when debugging?


22. How does testing differ from debugging?

