# Chapter 2 - Hello, World!

1. What is the purpose of the “Hello, World!” program?

To check your program environment and to get acquainted with the tools and to see if everything is setup correctly.
Its purpose is to get us acquainted with the basic tools of programming. It is here to learn the basics of a programming tool.
This helps later on the be not distracted when learning more complex language constructs.

2. Name the four parts of a function.

- A return type, here int (meaning “integer”), which specifies what kind of result, if any, the function will return to whoever asked for it to be executed. 
The word int is a reserved word in C++ (a keyword), so int cannot be used as the name of anything else (see §A.3.1).
- A name, here main.
- A parameter list enclosed in parentheses (see §8.2 and §8.6), here (); in this case, the parameter list is empty.
- A function body enclosed in a set of “curly braces,” { }, which lists the actions (called statements) that the function is to perform.

```
int main()
{
    // statements
}
```


3. Name a function that must appear in every C++ program.

Every C++ program must have a function called main to tell it where to start executing.

4. In the “Hello, World!” program, what is the purpose of the line return 0;?

main() is called by “the system,” we won’t use that return value. However, on some systems (notably Unix/Linux) it can be used to check whether the program succeeded. A zero (0) returned by main() indicates that the program terminated successfully.

5. What is the purpose of the compiler?

C++ is a compiled language. That means that to get a program to run, you must first translate it from the human-readable form to something a machine can "understand".
That translation is done by a program called a compiler. What you read and write is called source code or program text, and what the computer executes is called executable, object code, or machine code. Typically C++ source code files are given the suffix .cpp (e.g., hello_world.cpp) or .h (as in std_lib_facilities.h), and object code files are given the suffix .obj (on Windows) or .o (Unix).


The compiler reads your source code and tries to make sense of what you wrote. It looks to see if your program is grammatically correct, if every word has a defined meaning, and if there is anything obviously wrong that can be detected without trying to actually execute the program.

6. What is the purpose of the #include directive?

It instructs the computer to make available (“to include”) facilities from a file (header) that is followed by the `#include` directive. Header includes are either enclosed in a pair of " if they are local header files relative to the file they are included to or in opening and closing angle braces < > if the headers are globally available to the project such as the standard includes. 

7. What does a .h suffix at the end of a file name signify in C++?

A file included using `#include` usually has the suffix .h and is called a header or a header file. A header contains definitions of terms, such as cout, that we use in our program.

8. What does the linker do for your program?

A program usually consists of several separate parts, often developed by different people. 
For example, the “Hello, World!” program consists of the part we wrote plus parts of the C++ standard library. 
These separate parts (sometimes called translation units) must be compiled and the resulting object code files must be linked together to form an executable program. 
The program that links such parts together is (unsurprisingly) called a linker.

Please note that object code and executables are not portable among systems. 
For example, when you compile for a Windows machine, you get object code for Windows that will not run on a Linux machine.

9. What is the difference between a source file and an object file?

What you read and write is called source code or program text, and what the computer executes is called executable, object code, or machine code. Typically C++ source code files are given the suffix .cpp (e.g., hello_world.cpp) or .h (as in std_lib_facilities.h), and object code files are given the suffix .obj (on Windows) or .o (Unix). Object code files are generate by the compiler while source code files are generated by the programmer or can be generated automatically using tools. 

10. What is an IDE and what does it do for you?

To program, we use a programming language. We also use a compiler to translate our source code into object code and a linker to link our object code into an executable program. 
In addition, we use some program to enter our source code text into the computer and to edit it. 
These are just the first and most crucial tools that constitute our programmer’s tool set or “program development environment.”

An IDE (“interactive development environment” or “integrated development environment”) usually includes an editor with helpful features like color coding to help distinguish between comments,
keywords, and other parts of your program source code, plus other facilities to help you debug your code, compile it, and run it.

11. If you understand everything in the textbook, why is it necessary to practice?

The purpose of a drill is to establish or reinforce your practical programming skills and give you experience with programming environment tools.
A traditional set of exercises is designed to test your initiative, cleverness, or inventiveness.

Repetition and practice are necessary to develop programming skills. In this regard, programming is like athletics, music, dance, or any skill-based craft. 
Imagine people trying to compete in any of those fields without regular practice. You know how well they would perform. 
Constant practice — for professionals that means lifelong constant practice — is the only way to develop and maintain a high-level practical skill.