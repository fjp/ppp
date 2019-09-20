### Error Reporting

Test this program with a variety of values. Print out the values of `area1`, `area2`,
`area3`, and `ratio`. Insert more tests until all errors are caught. How do you know that
you caught all errors? This is not a trick question; in this particular example you can
give a valid argument for having caught all errors.

.. literalinclude:: ../ch5-errors/trythis/03-error_reporting/main.cpp
   :language: cpp
   :caption: errorreporting.cpp
   :linenos:

It is not possible to test this program with a variety of values because the first call to `int area2 = framed_area(1,z)` terminates the program with an error. The following program is an extension the original errorreporting.cpp to fix those issues and add tests where appropriate.

.. literalinclude:: ../ch5-errors/trythis/03-error_reporting/main_extension.cpp
   :language: cpp
   :caption: errorreportingfix.cpp
   :linenos:
