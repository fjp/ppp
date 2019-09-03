## Drill

1. Write a program that consists of a `while`-loop that (each time around the loop) reads in two `int`s and then prints them. 
Exit the program when a terminating `'|'` is entered.

.. literalinclude:: ../ch4-computation/drill/loop01.cpp
   :language: cpp
   :caption: loop01.cpp
   :linenos:
   
The input and output of this program is:

```
Enter two integer values seperated by a space (followed by 'Enter'):
1 2
1	2
2 1
2	1
3 5
3	5
|

Process finished with exit code 0
```

2. Change the program to write out `the smaller value is:` followed by the smaller of the numbers 
and `the larger value is:` followed by the larger value.

.. literalinclude:: ../ch4-computation/drill/loop02.cpp
   :language: cpp
   :caption: loop02.cpp
   :linenos:

Input and output of this program is:

```
Enter two integer values seperated by a space (followed by 'Enter'):
1 2
The smaller value is: 1
The larger value is: 2
3 2
The smaller value is: 2
The larger value is: 3
2 2
The smaller value is: 2
The larger value is: 2
^D
```

Notice that the output if the values are the same. The next drill handles the case if the two values are equal

3. Augment the program so that it writes the line `the numbers are equal` (only) if they are equal.

.. literalinclude:: ../ch4-computation/drill/loop03.cpp
   :language: cpp
   :caption: loop03.cpp
   :linenos:
   
   
The output is:

```
Enter two integer values separated by a space (followed by 'Enter'):
1 2
The smaller value is: 1
The larger value is: 2
3 2
The smaller value is: 2
The larger value is: 3
1 5
The smaller value is: 1
The larger value is: 5
10 1
The smaller value is: 1
The larger value is: 10
5 5
The numbers are equal.
^D
```

4. Change the program so that it uses `double`s instead of `int`s.

.. literalinclude:: ../ch4-computation/drill/loop04.cpp
   :language: cpp
   :caption: loop04.cpp
   :linenos:
   
Example input and output:

```
Enter two double values separated by a space (followed by 'Enter'):
10.0 5.0
The smaller value is: 5
The larger value is: 10
2.0 6.0
The smaller value is: 2
The larger value is: 6
1 2
The smaller value is: 1
The larger value is: 2
2.0 2.0
The numbers are equal.
1 1
The numbers are equal.
1 1.0
The numbers are equal.
1 2.0
The smaller value is: 1
The larger value is: 2
^D
```

5. Change the program so that it writes out `the numbers are almost equal` 
after writing out which is the larger and the smaller if the two numbers differ by less than 1.0/100.

.. literalinclude:: ../ch4-computation/drill/loop05.cpp
   :language: cpp
   :caption: loop05.cpp
   :linenos:
   
Output for values that are similar:

```
Enter two double values separated by a space (followed by 'Enter'):
10.0 10.0
The numbers are equal.
10.0 11.0
The smaller value is: 10
The larger value is: 11
10.0 10.0001
The smaller value is: 10
The larger value is: 10.0001
The numbers are almost equal.
1.0 0.09
The smaller value is: 0.09
The larger value is: 1
1.0 0.99
The smaller value is: 0.99
The larger value is: 1
1.0 0.999
The smaller value is: 0.999
The larger value is: 1
The numbers are almost equal.
-1.0 -0.999
The smaller value is: -1
The larger value is: -0.999
The numbers are almost equal.
-1.0 -1.01
The smaller value is: -1.01
The larger value is: -1
-1.0 -1.001
The smaller value is: -1.001
The larger value is: -1
The numbers are almost equal.
-1.0 -1.002
The smaller value is: -1.002
The larger value is: -1
The numbers are almost equal.
1 1.001
The smaller value is: 1
The larger value is: 1.001
The numbers are almost equal.
```

6. Now change the body of the loop so that it reads just one `double` each time around. 
Define two variables to keep track of which is the smallest and which is the largest value you have seen so far. 
Each time through the loop write out the value entered. 
If it’s the smallest so far, write `the smallest so far` after the number. 
If it is the largest so far, write `the largest so far` after the number.

.. literalinclude:: ../ch4-computation/drill/loop06.cpp
   :language: cpp
   :caption: loop06.cpp
   :linenos:

The following are some inputs with the resulting output:

```
Enter a double value (followed by 'Enter'):
7
7 is the first value and therefore the smallest and largest so far.
5
5 the smallest so far.
8
8 the largest so far.
6
6
7
7
2
2 the smallest so far.
10
10 the largest so far.
```

7. Add a unit to each `double` entered; that is, enter values such as `10cm`, `2.5in`, `5ft`, or `3.33m`. 
Accept the four units: `cm`, `m`, `in`, `ft`. Assume conversion factors `1m == 100cm`, `1in == 2.54cm`, `1ft == 12in`. 
Read the unit indicator into a string. 
You may consider `12 m` (with a space between the number and the unit) equivalent to `12m` (without a space).

.. literalinclude:: ../ch4-computation/drill/loop07.cpp
   :language: cpp
   :caption: loop07.cpp
   :linenos:

Here is the output of the program after entering some values:

```
Enter a double value followed by a unit with or without a space in between (followed by 'Enter'):
	cm for centimeters
	m for meters
	in for inches
	ft for feet
5 m
5m is the first value and therefore the smallest and largest so far.
7 m
7m the largest so far.
3 m
3m the smallest so far.
4 m
4m
8 m
8m the largest so far.
6 m
6m
2 cm
2cm (0.02m) the smallest so far.
1 in
1in (0.0254m)
9 ft
9ft (2.7432m)
100 ft
100ft (30.48m) the largest so far.
1 y
1 m
1m
^D
```

On Mac Mojave I had to use spaces between the value and the unit. Otherwise `cin` failed (returns false) and never enters 
the while loop (this is a [bug](https://bugs.llvm.org/show_bug.cgi?id=17782) in libc++). Everything works on linux.

8. Reject values without units or with “illegal” representations of units, such as `y`, `yard`, `meter`, `km`, and `gallons`.

.. literalinclude:: ../ch4-computation/drill/loop08.cpp
   :language: cpp
   :caption: loop08.cpp
   :linenos:

The output is:

```
Enter a double value followed by a unit with or without a space in between (followed by 'Enter'):
	cm for centimeters
	m for meters
	in for inches
	ft for feet
5 m
5m is the first value and therefore the smallest and largest so far.
7 m
7m the largest so far.
3 m
3m the smallest so far.
4 m
4m
2 cm
2cm (0.02m) the smallest so far.
9 cm
9cm (0.09m)
1 in
1in (0.0254m)
1 yard
Error: no legal unit. Enter one of 
	cm for centimeters
	m for meters
	in for inches
	ft for feet
1 m
1m
^D
```

9. Keep track of the sum of values entered (as well as the smallest and the largest) and the number of values entered. 
When the loop ends, print the smallest, the largest, the number of values, and the sum of values. 
Note that to keep the sum, you have to decide on a unit to use for that sum; use meters.

.. literalinclude:: ../ch4-computation/drill/loop09.cpp
   :language: cpp
   :caption: loop09.cpp
   :linenos:

```
Enter a double value followed by a unit with or without a space in between (followed by 'Enter'):
	cm for centimeters
	m for meters
	in for inches
	ft for feet
5 m
5m is the first value and therefore the smallest and largest so far.
2 m
2m the smallest so far.
9 m
9m the largest so far.
2 ft
2ft (0.6096m) the smallest so far.
0.5 in
0.5in (0.0127m) the smallest so far.
100 yard
Error: no legal unit. Enter one of 
	cm for centimeters
	m for meters
	in for inches
	ft for feet
2 gallons
Error: no legal unit. Enter one of 
	cm for centimeters
	m for meters
	in for inches
	ft for feet
10 cm
10cm (0.1m)
|
The smallest: 0.0127m
The largest: 9m
Number of values entered: 6
The sum of values: 16.7223m
```

10. Keep all the values entered (converted into meters) in a `vector`. At the end, write out those values.

.. literalinclude:: ../ch4-computation/drill/loop10.cpp
   :language: cpp
   :caption: loop10.cpp
   :linenos:

11. Before writing out the values from the `vector`, sort them (that’ll make them come out in increasing order).

.. literalinclude:: ../ch4-computation/drill/loop11.cpp
   :language: cpp
   :caption: loop11.cpp
   :linenos:
