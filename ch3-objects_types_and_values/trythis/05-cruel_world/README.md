### Goodbye, cruel world!

Compile the “Goodbye, cruel world!” program and examine the error messages. 
Did the compiler find all the errors? What did it suggest as the problems? 
Did the compiler get confused and diagnose more than four errors? 
Remove the errors one by one, starting with the lexically first, and see how the error messages change (and improve).

.. literalinclude:: ../ch3-objects-types-and-values/trythis/05-cruel_world/main.cpp
   :language: cpp
   :caption: cruelworld.cpp
   :linenos:


```
Scanning dependencies of target cruelworld
[ 50%] Building CXX object CMakeFiles/cruelworld.dir/main.cpp.o
/Users/fjp/git/ppp/ch3-objects_types_and_values/trythis/05-cruel_world/main.cpp:5:5: error: unknown type name 'STRING'
    STRING s = "Goodbye, cruel world! ";
    ^
/Users/fjp/git/ppp/ch3-objects_types_and_values/trythis/05-cruel_world/main.cpp:6:5: error: use of undeclared identifier 'cOut'; did you mean 'cout'?
    cOut << S << '\n'; 
    ^~~~
    cout
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/iostream:54:33: note: 'cout' declared here
extern _LIBCPP_FUNC_VIS ostream cout;
                                ^
/Users/fjp/git/ppp/ch3-objects_types_and_values/trythis/05-cruel_world/main.cpp:6:13: error: use of undeclared identifier 'S'
    cOut << S << '\n'; 
            ^
3 errors generated.
make[3]: *** [CMakeFiles/cruelworld.dir/main.cpp.o] Error 1
make[2]: *** [CMakeFiles/cruelworld.dir/all] Error 2
make[1]: *** [CMakeFiles/cruelworld.dir/rule] Error 2
make: *** [cruelworld] Error 2
```
