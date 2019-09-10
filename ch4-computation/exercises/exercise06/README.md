### Exercise 06

Make a `vector` holding the ten `string` values `"zero"`, `"one"`, ... `"nine"`.
Use that in a program that converts a digit to its corresponding spelled-out value; e.g., the input `7` gives the output seven. 
Have the same program, using the same input loop, convert spelled-out numbers into their digit form; 
e.g., the input `seven` gives the output `7`.

.. literalinclude:: ../ch4-computation/exercises/exercise06/main.cpp
   :language: cpp
   :caption: digitconverter.cpp
   :linenos:



Example output:

```
Enter integer digits from 0 to 9 which will be converted to spelled-out digits (followed by 'Enter')
0
zero
1
one
2
two
3
three
4
four
5
five
6
six
7
seven
8
eight
9
nine
10
Error: value must be an integer between 0 and 9.
-1
Error: value must be an integer between 0 and 9.
|

Process finished with exit code 0
```


.. literalinclude:: ../ch4-computation/exercises/exercise06/main_extended.cpp
   :language: cpp
   :caption: digitconverterextended.cpp
   :linenos:
   
Example output:

```
Enter digits from 0 to 9 (either as string or integer) which will be converted to (spelled-out) digits (followed by 'Enter')
0
zero
1
one
2
two
3
three
4
four
5
five
6
six
7
seven
8
eight
9
nine
10
Error: digit not in vector
Enter digits from 0 to 9 (either as string or integer) which will be converted to (spelled-out) digits (followed by 'Enter')
zero
0
one
1
two
2
three
3
four
4
five
5
six
6
seven
7
eight
8
nine
9
ten
Error: digit not in vector
Enter digits from 0 to 9 (either as string or integer) which will be converted to (spelled-out) digits (followed by 'Enter')
|

Process finished with exit code 0
```
