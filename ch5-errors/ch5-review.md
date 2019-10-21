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

Here are some sources of errors:
- Poor specification: If we are not specific about what a program should do, we are unlikely to adequately examine the "dark corners" and make sure that all cases are handled (i.e., that every input gives a correct answer or an adequate error message).
- Incomplete programs: During development, there are obviously cases that we haven't yet taken care of. 
That's unavoidable. What we must aim for is to know when we have handled all cases.
- Unexpected arguments: Functions take arguments. If a function is given an argument we don't handle, we have a problem. 
An example is calling the standard library square root function with `-1.2`: `sqrt(-1.2)`. Since `sqrt()` of a double returns a double, there is no possible correct return value. §5.5.3 discusses this kind of problem.
- Unexpected input: Programs typically read data (from a keyboard, from files, from GUIs, from network connections, etc.). 
A program makes many assumptions about such input, for example, that the user will input a number. What if the user inputs 'aw, shut up!' rather than the expected integer? §5.6.3 and §10.6 discuss this kind of problem.
- Unexpected state: Most programs keep a lot of data ("state") around for use by different parts of the system. 
Examples are address lists, phone directories, and vectors of temperature readings. What if such data is incomplete or wrong? The various parts of the program must still manage. §26.3.5 discusses this kind of problem.
- Logical errors: That is, code that simply doesn't do what it was supposed to do; we'll just have to find and fix such problems. §6.6 and §6.9 give examples of finding such problems. 

This list has a practical use. We can use it as a checklist when we are considering how far we have come with a program. 
No program is complete until we have considered all of these potential sources of errors. In fact, it is prudent to keep them in mind from the very start of a project, because it is most unlikely that a program that is just thrown together without thought about errors can have its errors found and removed without a serious rewrite.

11. How do you know if a result is plausible? What techniques do you have to answer such questions?

The point is that
unless we have some idea of what a correct answer will be like — even ever so
approximately — we don’t have a clue whether our result is reasonable. Always
ask yourself this question:
    1. Is this answer to this particular problem plausible?
You should also ask the more general (and often far harder) question:
    2. How would I recognize a plausible result?
    
Here, we are not asking, “What’s the exact answer?” or “What’s the correct
answer?” That’s what we are writing the program to tell us. All we want is to
know that the answer is not ridiculous. Only when we know that we have a
plausible answer does it make sense to proceed with further work.
Estimation is a noble art that combines common sense and some very simple
arithmetic applied to a few facts. Some people are good at doing estimates in
their heads, but we prefer scribbles “on the back of an envelope” because we
find we get confused less often that way. What we call estimation here is an
informal set of techniques that are sometimes (humorously) called guesstimation
because they combine a bit of guessing with a bit of calculation.


12. Compare and contrast having the caller of a function handle a run-time error vs. the called function's handling 
the run-time error.

Checking arguments in the function seems so simple, so why don't people do
that always? Inattention to error handling is one answer, sloppiness is another,
but there are also respectable reasons:
- We can't modify the function definition: The function is in a library that for
some reason can’t be changed. Maybe it’s used by others who don’t share
your notions of what constitutes good error handling. Maybe it’s owned by
someone else and you don’t have the source code. Maybe it’s in a library
where new versions come regularly so that if you made a change, you’d
have to change it again for each new release of the library.
- The called function doesn't know what to do in case of error: This is
typically the case for library functions. The library writer can detect the
error, but only you know what is to be done when an error occurs.
- The called function doesn't know where it was called from: When you get
an error message, it tells you that something is wrong, but not how the
executing program got to that point. Sometimes, you want an error
message to be more specific.
- Performance: For a small function the cost of a check can be more than
the cost of calculating the result. For example, that’s the case with area(),
where the check also more than doubles the size of the function (that is, the
number of machine instructions that need to be executed, not just the
length of the source code). For some programs, that can be critical,
especially if the same information is checked repeatedly as functions call
each other, passing information along more or less unchanged.
So what should you do? Check your arguments in a function unless you have a
good reason not to.

We can have the called function do the detailed checking, while letting
each caller handle the error as desired. This approach seems like it could work,
but it has a couple of problems that make it unusable in many cases:
- Now both the called function and all callers must test. The caller has only
a simple test to do but must still write that test and decide what to do if it
fails.
- A caller can forget to test. That can lead to unpredictable behavior further
along in the program.
- Many functions do not have an "extra" return value that they can use to
indicate an error. For example, a function that reads an integer from input
(such as `cin`'s operator `>>`) can obviously return any int value, so there is
no int that it could return to indicate failure.
The second case above — a caller forgetting to test — can easily lead to
surprises.

13. Why is using exceptions a better idea than returning an "error value"?

The fundamental idea is to separate detection of an
error (which should be done in a called function) from the handling of an error
(which should be done in the calling function) while ensuring that a detected
error cannot be ignored;

The basic idea is that if a function finds an error that it cannot handle, it does
not `return` normally; instead, it `throw`s an exception indicating what went
wrong. Any direct or indirect caller can `catch` the exception, that is, specify
what to do if the called code used `throw`. A function expresses interest in
exceptions by using a `try`-block (as described in the following subsections)
listing the kinds of exceptions it wants to handle in the `catch` parts of the `try`-block.
If no caller catches an exception, the program terminates.

14. How do you test if an input operation succeeded?

Once bad input is detected, it is dealt with using the same techniques and language features as argument errors and 
range errors. Here, we’ll just show how you can tell if your input operations succeeded. 
Consider reading a floatingpoint number:

```cpp
double d = 0;
cin >> d;
```

We can test if the last input operation succeeded by testing `cin`:

```cpp
if (cin) {
// all is well, and we can try reading again
}
else {
// the last read didn’t succeed, so we take some other action
}
```

There are several possible reasons for that input operation's failure. 
The one that should concern you right now is that there wasn't a double for `>>` to read.


15. Describe the process of how exceptions are thrown and caught.

The basic idea is that if a function finds an error that it cannot handle, it does not `return` normally; 
instead, it `throw`s an exception indicating what went wrong. 
Any direct or indirect caller can `catch` the exception, that is, specify what to do if the called code used `throw`. 
A function expresses interest in exceptions by using a `try`-block listing the kinds of exceptions it wants to handle 
in the `catch` parts of the `try`-block. If no caller catches an exception, the program terminates.

16. Why, with a `vector` called `v`, is `v[v.size()]` a range error? What would be the result of calling this?

The `size()` method of a `vector` returns the number of elements in that `vector`. C++ uses [zero-based numbering](https://en.wikipedia.org/wiki/Zero-based_numbering) which means that the first index of a `vector` or array is zero.
The last element is indexed using `v.size()-1`. 

Accessing `v[v.size()]` results in a range error because we try to access memory that we aren't allowed to read or write. It lies outside the allocated memory of the `vector` `v`.

17. Define pre-condition and post-condition; give an example (that is not the `area()` function from this chapter), 
preferably a computation that requires a loop.

To deal with bad arguments to a function, the call of a function is basically the best point 
to think about correct code and to catch errors: this is where a logically separate computation starts
(and ends on the return).

A requirement of a function upon its argument is often called a pre-condition: 
it must be true for the function to perform its action correctly.

The following example shows a function that uses a pre-condition to check if the argument is positive,
which is documented after the function signature.


```
double positive_sqrt(double a)
// check that the argument is positive
{
    if (!(0<a)) // ! means "not"
        error("bad arguments for positive_sqrt");

    return sqrt(a);
}
```

This example checks for bad arguments and reports them by throwing the string `bad arguments for positive_sqrt`
Another way to deal with bad arguments would be to ignore it and hope/assume that all callers give correct arguments.

With post-conditions we can check the return value, which is useful because we know the type that is returned from a function.

```
double rectangle_circumference(double height, double width)
// check that the arguments are positive
{
    if (!(0<height && 0<width)) // ! means "not" and && means "and"
        error("bad arguments for rectangle_circumference");
        
    double circumference = 2*height + 2*width;
    if (circumference <= 0) error("rectangle_circumference() post-condition");
    return circumference;
}
```

18. When would you not test a pre-condition?

The reasons most often given for not checking pre-conditions are:

- Nobody would give bad arguments.
- It would slow down my code.
- It is too complicated to check.

The first reason can be reasonable only when we happen to know "who" calls a function - 
and in real-world code that can be very hard to know.

The second reason is valid far less often than people think and should most
often be ignored as an example of "premature optimization." You can always
remove checks if they really turn out to be a burden. You cannot easily gain the
correctness they ensure or get back the nights' sleep you lost looking for bugsthose tests could have caught.

The third reason is the serious one. It is easy (once you are an experienced programmer) 
to find examples where checking a pre-condition would take significantly more work than executing the function. 
An example is a lookup in a dictionary: a pre-condition is that the dictionary entries are sorted - and
verifying that a dictionary is sorted can be far more expensive than a lookup.


19. When would you not test a post-condition?

Similar to the previous answer, here are two reasons not to test post-conditions:

- It would slow down my code.
- It is too complicated to check.

For example:

```cpp
int area(int length, int width)
// calculate area of a rectangle;
// pre-conditions: length and width are positive
// post-condition: returns a positive value that is the area
{
    if (length<=0 || width <=0) error(“area() pre-condition”);
    int a = length*width;
    if (a<=0) error(“area() post-condition”);
    return a;
}
```

We couldn't check the complete post-condition, but we checked the part that said that it should be positive.

20. What are the steps in debugging a program?

The activity of deliberately searching for errors and removing them is called debugging.

Debugging works roughly like this:
    1. Get the program to compile.
    2. Get the program to link.
    3. Get the program to do what it is supposed to do.
    
Basically, we go through this sequence again and again: hundreds of times, thousands of times, 
again and again for years for really large programs. 
Each time something doesn't work we have to find what caused the problem and fix it.

21. Why does commenting help when debugging?

It makes the program easy to read so that you have a chance of spotting the bugs.
Here are some advices for commenting:
- Comment your code well. That doesn't simply mean "Add a lot of comments." 
You don't say in English what is better said in code. Rather, you say in the comments - as clearly and briefly as you can - what can't be said clearly in code:
- The name of the program
- The purpose of the program
- Who wrote this code and when
- Version numbers
- What complicated code fragments are supposed to do
- What the general design ideas are
- How the source code is organized
- What assumptions are made about inputs
- What parts of the code are still missing and what cases are still not handled

22. How does testing differ from debugging?

