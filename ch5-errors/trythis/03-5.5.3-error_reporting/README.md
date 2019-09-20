### Error Reporting

Test this program with a variety of values. Print out the values of `area1`, `area2`,
`area3`, and `ratio`. Insert more tests until all errors are caught. How do you know that
you caught all errors? This is not a trick question; in this particular example you can
give a valid argument for having caught all errors.

To run the given example function `f(int x, int y, int z)` I added the required functions `area(int x, int y)` from section 5.5.3 and `framed_area(int x, int y)` from section 5.5.2 including the `error()` function from the `std_lib_facilities.h` header.

.. literalinclude:: ../ch5-errors/trythis/03-error_reporting/main.cpp
   :language: cpp
   :caption: errorreporting.cpp
   :linenos:

It is not possible to test this program with a variety of values because the first call to `int area2 = framed_area(1,z)` terminates the program with an error. This happens because the first input argument `1` yields a negative value when subtracted by the `constexpr int frame_width = 2`. The following program is an extension to the original `errorreporting.cpp` to fix those issues and add tests where appropriate. In this version `framed_area()` does not use `error()`. 
Instead the return value of `area()` is return directly which is `-1` in case of an error. 

.. literalinclude:: ../ch5-errors/trythis/03-error_reporting/main_extension.cpp
   :language: cpp
   :caption: errorreportingfix.cpp
   :linenos:


Here is one output that is equal for both programs:

```
Enter three integers separated by space (followed by 'Enter')
1 1 1
libc++abi.dylib: terminating with uncaught exception of type std::runtime_error: non-positive area() argument called by framed_area()
```

Here is the output with values that are working:

```
Enter three integers separated by space (followed by 'Enter')
3 3 3
area1: 9
area3: 1
ratio: 9
area4: 1
area5: 5
```

Calling area with values that result in an area greater than the size of an integer (32 bit) will result
in an unrecognized overflow error. The following output returns 1.
To solve such errors the callee (in this case area) should check if its result is greater than its inputs.


Narrowing conversion errors, which are a result of entering doubles instead of ints, are not caught by this program.
This could be checked by letting the user enter doubles and then convert them to ints if possible
(or compare them afterwards)
If the user enters a double value cin gets in a bad state and the program returns without any output.

To throw if a conversion is not possible use:

```cpp
int x1 = narrow_cast<int>(2.9); // throws
int x2 = narrow_cast<int>(2.0); // OK
char c1 = narrow_cast<char>(1066); // throws
char c2 = narrow_cast<char>(85); // OK
```