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
