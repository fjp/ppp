### Compiler Response

Try to compile those examples and see how the compiler responds.

.. literalinclude:: ../ch5-errors/trythis/01-compiler_response/main.cpp
   :language: cpp
   :caption: compilerresponse.cpp
   :linenos:
   
The output of clang to this program is:

```
/Users/fjp/git/ppp/ch5-errors/trythis/01-compiler_response/main.cpp:7:20: error: expected ')'
    int s1 = area(7; // error: ) missing
                   ^
/Users/fjp/git/ppp/ch5-errors/trythis/01-compiler_response/main.cpp:7:18: note: to match this '('
    int s1 = area(7; // error: ) missing
                 ^
/Users/fjp/git/ppp/ch5-errors/trythis/01-compiler_response/main.cpp:8:14: error: no matching function for call to 'area'
    int s2 = area(7) // error: ; missing
             ^~~~
/Users/fjp/git/ppp/ch5-errors/trythis/01-compiler_response/main.cpp:3:5: note: candidate function not viable: requires 2 arguments, but 1 was provided
int area(int length, int width); // calculate area of a rectangle
    ^
/Users/fjp/git/ppp/ch5-errors/trythis/01-compiler_response/main.cpp:10:19: error: use of undeclared identifier 'ʻ7'
    int s4 = area(ʻ7); // error: non-terminated character (’ missing)
                  ^
3 errors generated.
```
