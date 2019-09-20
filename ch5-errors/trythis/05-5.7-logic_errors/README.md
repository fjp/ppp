### Uncaught Exception

Get this program to run. Check that our input really does produce that output. 
Try to "break" the program (i.e., get it to give wrong results) by giving it other input sets. 
What is the least amount of input you can give it to get it to fail?

.. literalinclude:: ../ch5-errors/trythis/05-5.7-logic_errors/main.cpp
   :language: cpp
   :caption: logicerrors.cpp
   :linenos:


As stated in the book, the following input:

``` 
-16.5 -23.2 -24.0 -25.7 -26.1 -18.6 -9.7 -2.4 
7.5 12.6 23.8 25.3 28.0 34.8 36.7 41.5
40.3 42.6 39.7 35.4 12.6 6.5 -3.7 -14.3
```

results in the expected an in this case correct output of:

```
-16.5 -23.2 -24.0 -25.7 -26.1 -18.6 -9.7 -2.4 
7.5 12.6 23.8 25.3 28.0 34.8 36.7 41.5
40.3 42.6 39.7 35.4 12.6 6.5 -3.7 -14.3
|
High temperature: 42.6
Low temperature: -26.1
Average temperature: 9.29583
```

The next input:

``` 
76.5 73.5 71.0 73.6 70.1 73.5 77.6 85.3
88.5 91.7 95.9 99.2 98.2 100.6 106.3 112.4
110.2 103.6 94.9 91.7 88.4 85.2 85.4 87.7
```

yields a wrong result:

``` 
76.5 73.5 71.0 73.6 70.1 73.5 77.6 85.3
88.5 91.7 95.9 99.2 98.2 100.6 106.3 112.4
110.2 103.6 94.9 91.7 88.4 85.2 85.4 87.7
|
High temperature: 112.4
Low temperature: 0
Average temperature: 89.2083
```

The shortest input to "break" the program, is to enter no `double`.
Entering no values results in a bad output because the `size` of the `temps` `vector` will be zero. 
Dividing by zero results in NaN for the average value.

``` 
|
High temperature: 0
Low temperature: 0
Average temperature: nan
```

Another case where the program "breaks" is when an overflow of `double` happens,
which is basically the same error as the previous one:
`cin` gets in a bad state and therefore the `vector` is empty.

``` 
1e350
High temperature: 0
Low temperature: 0
Average temperature: nan
```

With too high values, the average becomes `inf`, depending on wheater this is considered
a wrong result with these high values:

``` 
1.79e308 1.79e301 1.79e302 1.79e305 1.79e308
|
High temperature: 1.79e+308
Low temperature: 0
Average temperature: inf
```