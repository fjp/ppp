### Uncaught Exception

Look it up. 
Check some information sources to pick good values for the `min_temp` 
(the "minimum temperature") and `max_temp` (the "maximum temperature") constants for our program. 
Those values will determine the limits of usefulness of our program.

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

The following program uses no magic constants `1000` and `-1000` for the 
`min_temp` and `max_temp` values. 
Instead, the [absolute zero](https://en.wikipedia.org/wiki/Absolute_zero) and 
[absolute hot](https://en.wikipedia.org/wiki/Absolute_hot) temperature values are taken:

.. literalinclude:: ../ch5-errors/trythis/06-5.7-logic_errors/main_improved.cpp
   :language: cpp
   :caption: logicerrorsimprovedmore.cpp
   :linenos: