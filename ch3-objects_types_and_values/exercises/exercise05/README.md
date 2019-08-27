### Exercise 05

Modify the program from exercise 04 to ask the user to enter floating-point values and store them in double variables. 
Compare the outputs of the two programs for some inputs of your choice. 
Are the results the same? Should they be? What’s the difference?

.. literalinclude:: ../ch3-objects_types_and_values/exercises/exercise05/main.cpp
   :language: cpp
   :caption: val1val2float.cpp

This program outpus the following:

```
Enter two double values (followed by 'Enter')
2 3
smaller = 2
larger = 3
sum = 5
difference = -1
product = 6
ratio = 0.666667
```

The ratio is different between this and the program of exercise 04, because floating-point values are not truncated when using `double` instead of `int`. 

```
Enter two double values (followed by 'Enter')
3 2
smaller = 2
larger = 3
sum = 5
difference = 1
product = 6
ratio = 1.5
```

```
Enter two double values (followed by 'Enter')
3 3
smaller = 3
larger = 3
sum = 6
difference = 0
product = 9
ratio = 1
```
