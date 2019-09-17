### Compiler Response 2

Try to compile those examples and see how the compiler responds.
Try thinking of a few more errors yourself, and try those.

.. literalinclude:: ../ch5-errors/trythis/02-compiler_response/main.cpp
   :language: cpp
   :caption: compilerresponse2.cpp
   :linenos:
   
The output of clang to this program is:

```
/Users/fjp/git/ppp/ch5-errors/trythis/02-compiler_response/main.cpp:7:14: error: use of undeclared identifier 'arena'
    int x0 = arena(7); // error: undeclared function
             ^
/Users/fjp/git/ppp/ch5-errors/trythis/02-compiler_response/main.cpp:8:14: error: no matching function for call to 'area'
    int x1 = area(7); // error: wrong number of arguments
             ^~~~
/Users/fjp/git/ppp/ch5-errors/trythis/02-compiler_response/main.cpp:3:5: note: candidate function not viable: requires 2 arguments, but 1 was provided
int area(int length, int width); // calculate area of a rectangle
    ^
/Users/fjp/git/ppp/ch5-errors/trythis/02-compiler_response/main.cpp:9:14: error: no matching function for call to 'area'
    int x2 = area("seven",2); // error: 1st argument has a wrong type
             ^~~~
/Users/fjp/git/ppp/ch5-errors/trythis/02-compiler_response/main.cpp:3:5: note: candidate function not viable: no known conversion from 'const char [6]' to 'int' for 1st argument
int area(int length, int width); // calculate area of a rectangle
    ^
3 errors generated.
```
