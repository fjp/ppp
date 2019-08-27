### Exercise 06

Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas. 
So, if the user enters the values `10 4 6`, the output should be `4, 6, 10`. 
If two values are the same, they should just be ordered together. So, the input `4 5 4` should give `4, 4, 5`.

.. literalinclude:: ../ch3-objects_types_and_values/exercises/exercise06/main.cpp
   :language: cpp
   :caption: sort.cpp

Here are some outputs of the program:


```
Enter three integer values (followed by 'Enter')
10 4 6
4, 6, 10
```

```
Enter three integer values (followed by 'Enter')
3 2 1
1, 2, 3
```

```
Enter three integer values (followed by 'Enter')
1 2 1
1, 1, 2
```

```
Enter three integer values (followed by 'Enter')
4 5 4
4, 4, 5
```
