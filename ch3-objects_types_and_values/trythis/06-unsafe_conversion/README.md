### Unsafe Conversions

The following example shows a "narrowing" conversion, which puts a value into an object that is too small to hold this value.


.. literalinclude:: ../ch3-objects-types-and-values/trythis/06-unsafe_conversion/main_char.cpp
   :language: cpp
   :caption: unsafeconversionchar.cpp
   :linenos:


Run this program with a variety of inputs. Try small values (e.g., 2 and 3); 
try large values (larger than 127, larger than 1000); try negative values; try 56; try 89; try 128; 
try non-integer values (e.g., 56.9 and 56.2). 
In addition to showing how conversions from double to int and conversions from int to char are done on your machine, 
this program shows you what character (if any) your machine will print for a given integer value.

.. literalinclude:: ../ch3-objects-types-and-values/trythis/06-unsafe_conversion/main.cpp
   :language: cpp
   :caption: unsafeconversion.cpp
   :linenos:


The program produces the following outputs:

``` 
2
d==2 i==2 i2==2 char()
3
d==3 i==3 i2==3 char()
128
d==128 i==128 i2==-128 char(�)
1000
d==1000 i==1000 i2==-24 char(�)
-5
d==-5 i==-5 i2==-5 char(�)
89
d==89 i==89 i2==89 char(Y)
127
d==127 i==127 i2==127 char()
56.9
d==56.9 i==56 i2==56 char(8)
56.2
d==56.2 i==56 i2==56 char(8)
``` 

