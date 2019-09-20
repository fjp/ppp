### Uncaught Exception

Get this program to run. Check that our input really does produce that output. 
Try to "break" the program (i.e., get it to give wrong results) by giving it other input sets. 
What is the least amount of input you can give it to get it to fail?

.. literalinclude:: ../ch5-errors/trythis/06-5.7-logic_errors/main.cpp
   :language: cpp
   :caption: logicerrorsimproved.cpp
   :linenos:


Compared to the previous program, this improved version returns the correct results for the
wrong test vector input:

``` 
-16.5 -23.2 -24.0 -25.7 -26.1 -18.6 -9.7 -2.4 
7.5 12.6 23.8 25.3 28.0 34.8 36.7 41.5
40.3 42.6 39.7 35.4 12.6 6.5 -3.7 -14.3
|
High temperature: 42.6
Low temperature: -26.1
Average temperature: 9.29583
```

.. literalinclude:: ../ch5-errors/trythis/06-5.7-logic_errors/main_improved.cpp
   :language: cpp
   :caption: logicerrorsimprovedmore.cpp
   :linenos: