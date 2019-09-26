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


4. List three approaches we can take to eliminate errors in programs and produce acceptable software.

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


6. What is a syntax error? Give five examples.


7. What is a type error? Give five examples.


8. What is a linker error? Give three examples.


9. What is a logic error? Give three examples.


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

