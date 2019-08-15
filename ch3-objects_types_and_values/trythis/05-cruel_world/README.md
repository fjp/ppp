### Goodbye, cruel world!

Compile the “Goodbye, cruel world!” program and examine the error messages. 
Did the compiler find all the errors? What did it suggest as the problems? 
Did the compiler get confused and diagnose more than four errors? 
Remove the errors one by one, starting with the lexically first, and see how the error messages change (and improve).

.. literalinclude:: ../ch3-objects-types-and-values/trythis/05-cruel_world/main.cpp
   :language: cpp
   :caption: cruelworld.cpp
   :linenos:

Trying to compile this program results in the following compiler output:

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

The compiler finds 3 errors in the first compile run. Fixing the found errors and running the program again results in this:


.. literalinclude:: ../ch3-objects-types-and-values/trythis/05-cruel_world/main_fix.cpp
   :language: cpp
   :caption: cruelworldfix.cpp
   :linenos:

```
Scanning dependencies of target cruelworldfix
[ 50%] Building CXX object CMakeFiles/cruelworldfix.dir/main_fix.cpp.o
/Users/fjp/git/ppp/ch3-objects_types_and_values/trythis/05-cruel_world/main_fix.cpp:7:1: warning: control reaches end of non-void function [-Wreturn-type]
}
^
1 warning generated.
[100%] Linking CXX executable cruelworldfix
Undefined symbols for architecture x86_64:
  "_main", referenced from:
     implicit entry/start for main executable
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make[3]: *** [cruelworldfix] Error 1
make[2]: *** [CMakeFiles/cruelworldfix.dir/all] Error 2
make[1]: *** [CMakeFiles/cruelworldfix.dir/rule] Error 2
make: *** [cruelworldfix] Error 2
```

This time the program compiles with only one warning but we get a linker error which tells us that the main function is missing.


Changing the `int Main()` to `int main()` fixes all errors and the program compiles and runs with the output:

.. literalinclude:: ../ch3-objects-types-and-values/trythis/05-cruel_world/main_fix2.cpp
   :language: cpp
   :caption: cruelworldfix2.cpp
   :linenos:


```
Goodbye, cruel world!
```
