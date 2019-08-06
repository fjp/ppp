## Chapter 2 - Terms

// - Anything written after the token // (that’s the character /, called “slash,” twice) on a line is a comment. Comments are ignored by the compiler and written for the benefit of programmers who read the code. Double forward slashes are used for comments. Comments are meant to explain the source code to other programmers and yourself after a long not reading it for a long time.

```
// output “Hello, World!”
```

<< - Is the output operator and is used to output strings or characters to the standard output using `cout`. 

```
cout << "Hello, World!\n"; // output “Hello, World!”
```

It can also be used to shift bits.

C++ - Is a programming language
comment - Comments are written to describe what the program is intended to do and in general to provide information useful for humans that can’t be directly ex- pressed in code. The person most likely to benefit from the comments in your code is you — when you come back to that code next week, or next year, and have forgotten exactly why you wrote the code the way you did. 
Used to explain the source code to other programmers and yourself after not reading it for a long time.  

compiler - C++ is a compiled language. That means that to get a program to run, you must first translate it from the human-readable form to something a machine can 
“understand.” That translation is done by a program called a compiler. What you read and write is called source code or program text, and what the computer executes is called executable, object code, or machine code. Typically C++ source code files are given the suffix .cpp (e.g., hello_world.cpp) or .h (as in std_lib_facilities.h), 
and object code files are given the suffix .obj (on Windows) or .o (Unix). 

The compiler reads your source code and tries to make sense of what you wrote. It looks to see if your program is grammatically correct, if every word has a defined meaning, and if there is anything obviously wrong that can be detected without trying to actually execute the program.
A program that checks the syntax of a source code and translates it to object code.


compile-time - Errors found by the compiler are called compile-time errors, errors found by the linker are called link-time errors, and errors not found until the program is run are called run-time errors or logic errors. Generally, compile-time errors are easier to un- derstand and fix than link-time errors, and link-time errors are often easier to find and fix than run-time errors and logic errors. The time the compiler is analyzing the source code and translating it to object code. At this state compile-time errors are captured. 
error - Errors can be categorized into compile-time (missing include or syntax errors such wrong spelling of standard types or missing semicolons), link-time errors (used declarations but without finding the definitions) and runtime or logical-errors (accessing null pointers or memory addresses that was already deleted, stack variables passed as references).  

cout - The name `cout` refers to a standard output stream. Characters “put into cout” using the output operator `<<` will appear on the screen. The name `cout` is pronounced “see-out” and is an abbreviation of “character output stream. Function in the standard iostream header to write strings and characters to the standard output stream.

executable - What the computer executes is called executable, object code, or machine code. Typically C++ object code files are given the suffix .obj (on Windows) or .o (Unix). A program or an application that is the final result of compiling source files to object files and linking them to an executable that can be executed. 

function - A function is basically a named sequence of instructions for the computer to execute in the order in which they are written. A function has four parts:

- A return type, here int (meaning “integer”), which specifies what kind of result, if any, the function will return to whoever asked for it to be exe- cuted. The word int is a reserved word in C++ (a keyword), so int cannot be used as the name of anything else (see §A.3.1).
- A name, here main.
- A parameter list enclosed in parentheses (see §8.2 and §8.6), here (); in this case, the parameter list is empty.
- A function body enclosed in a set of “curly braces,” { }, which lists the actions (called statements) that the function is to perform.

```
int main()
{
    // statements 
}
``` 

A piece of source code that encapsulates statements inside curyly braces that are executed in order. A function can have a parameter list and has a return type which can be void. 

header - A file included using #include usually has the suffix .h and is called a header or a header file. A header contains definitions of terms, such as cout, that we use in our program. 
A file that contains souce code declarations and definitions which is usally included using an #include directive.

IDE - IDE (“interactive development environment” or “integrated development environment”) usually include an editor with helpful features like color coding to help distinguish between comments, keywords, and other parts of your program source code, plus other facilities to help you debug your code, compile it, and run it. To program, we use a programming language. We also use a compiler to translate our source code into object code and a linker to link our object code into an executable program. 
In addition, we use some program to enter our source code text into the computer and to edit it. Inegrated or Interactive Development Envornment is a tool with helpful features for creating new programs. 

#include - An “#include directive.” instructs the computer to make available (“to include”) facilities from a file. A preprocessor directive to include a header file that can contain required definitions for example from the standard library.

```
#include "std_lib_facilities.h" // facilities from a header file locally available within a file relative to the current file.
#include <vector> // facility from the standard library ("globally" available) 
```

library - A library is simply some code — usually written by others — that we access using declarations found in an #included file. A declaration is a program statement specifying how a piece of code can be used. A collection of facilities (such as functions or classes) that can be reused and make it easier to create new applications. 

linker - A program usually consists of several separate parts, often developed by different people. For example, the “Hello, World!” program consists of the part we wrote plus parts of the C++ standard library. These separate parts (sometimes called translation units) must be compiled and the resulting object code files must be linked together to form an executable program. The program that links such parts to- gether is (unsurprisingly) called a linker. One program in the build process that links one ore more object files together to create an executable.

main() - The main entry point of every C++ program. It returns an integer denoting the success of the program and can have command line arguments as its input parameters.
object code - A file with ending .obj on Windows and .o on Linux which contains object code. Is created invoking the compiler on a source code file (.h or .cpp).
output - For example the text a program outpus using cout.
program - An executable program or application that is the result of compiling source codes files to object files and linking them to an executable program. 
source code - Instructions of a program that are written in a text editor inside a header (.h) or source code file (.cpp).
statement - A line of source code that is terminated by a semicolon inside a block of curly braces for example of a function.
