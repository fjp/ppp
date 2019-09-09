### Exercise 04

Write a program to play a numbers guessing game. 
The user thinks of a number between 1 and 100 and your program asks questions to figure out what the number is 
(e.g., "Is the number you are thinking of less than 50?"). 
Your program should be able to identify the number after asking no more than seven questions. 
Hint: Use the `<` and `<=` operators and the `if`-`else` construct.

.. literalinclude:: ../ch4-computation/exercises/exercise04/main.cpp
   :language: cpp
   :caption: numberguessing.cpp
   :linenos:


When I think of 100 the result is:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of less than 75? (Enter 'y' or 'n') 
n
3. Is the number you are thinking of less than 87? (Enter 'y' or 'n') 
n
4. Is the number you are thinking of less than 93? (Enter 'y' or 'n') 
n
5. Is the number you are thinking of less than 96? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of less than 98? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 99? (Enter 'y' or 'n') 
n
8. Is the number you are thinking of less than 100? (Enter 'y' or 'n') 
n
The number you are thinking of is 100
I needed 8 guesses.
```

Example with 99:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of less than 75? (Enter 'y' or 'n') 
n
3. Is the number you are thinking of less than 87? (Enter 'y' or 'n') 
n
4. Is the number you are thinking of less than 93? (Enter 'y' or 'n') 
n
5. Is the number you are thinking of less than 96? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of less than 98? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 99? (Enter 'y' or 'n') 
n
8. Is the number you are thinking of less than 100? (Enter 'y' or 'n') 
y
The number you are thinking of is 99
I needed 8 guesses.
```

Example with 98:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of less than 75? (Enter 'y' or 'n') 
n
3. Is the number you are thinking of less than 87? (Enter 'y' or 'n') 
n
4. Is the number you are thinking of less than 93? (Enter 'y' or 'n') 
n
5. Is the number you are thinking of less than 96? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of less than 98? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 99? (Enter 'y' or 'n') 
y
The number you are thinking of is 98
I needed 7 guesses.
```


Example with 1:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
y
2. Is the number you are thinking of less than 25? (Enter 'y' or 'n') 
y
3. Is the number you are thinking of less than 12? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of less than 6? (Enter 'y' or 'n') 
y
5. Is the number you are thinking of less than 3? (Enter 'y' or 'n') 
y
6. Is the number you are thinking of less than 2? (Enter 'y' or 'n') 
y
The number you are thinking of is 1
I needed 6 guesses.
```

Example with 2:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
y
2. Is the number you are thinking of less than 25? (Enter 'y' or 'n') 
y
3. Is the number you are thinking of less than 12? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of less than 6? (Enter 'y' or 'n') 
y
5. Is the number you are thinking of less than 3? (Enter 'y' or 'n') 
y
6. Is the number you are thinking of less than 2? (Enter 'y' or 'n') 
n
The number you are thinking of is 2
I needed 6 guesses.
```

Example with 3:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
y
2. Is the number you are thinking of less than 25? (Enter 'y' or 'n') 
y
3. Is the number you are thinking of less than 12? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of less than 6? (Enter 'y' or 'n') 
y
5. Is the number you are thinking of less than 3? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of less than 4? (Enter 'y' or 'n') 
y
The number you are thinking of is 3
I needed 6 guesses.
```


Example with 50:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of less than 75? (Enter 'y' or 'n') 
y
3. Is the number you are thinking of less than 62? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of less than 55? (Enter 'y' or 'n') 
y
5. Is the number you are thinking of less than 52? (Enter 'y' or 'n') 
y
6. Is the number you are thinking of less than 51? (Enter 'y' or 'n') 
y
The number you are thinking of is 50
I needed 6 guesses.
```

Example with 49:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
y
2. Is the number you are thinking of less than 25? (Enter 'y' or 'n') 
n
3. Is the number you are thinking of less than 37? (Enter 'y' or 'n') 
n
4. Is the number you are thinking of less than 43? (Enter 'y' or 'n') 
n
5. Is the number you are thinking of less than 46? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of less than 47? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 48? (Enter 'y' or 'n') 
n
8. Is the number you are thinking of less than 49? (Enter 'y' or 'n') 
n
The number you are thinking of is 49
I needed 8 guesses.
```

Example with 51:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of less than 75? (Enter 'y' or 'n') 
y
3. Is the number you are thinking of less than 62? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of less than 55? (Enter 'y' or 'n') 
y
5. Is the number you are thinking of less than 52? (Enter 'y' or 'n') 
y
6. Is the number you are thinking of less than 51? (Enter 'y' or 'n') 
n
The number you are thinking of is 51
I needed 6 guesses.
```


.. literalinclude:: ../ch4-computation/exercises/exercise04/main_flip_flop.cpp
   :language: cpp
   :caption: numberguessingMax7.cpp
   :linenos:



When I think of 100 the result is:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of greater than 75? (Enter 'y' or 'n') 
y
3. Is the number you are thinking of less than 88? (Enter 'y' or 'n') 
n
4. Is the number you are thinking of greater than 94? (Enter 'y' or 'n') 
y
5. Is the number you are thinking of less than 97? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of greater than 98? (Enter 'y' or 'n') 
y
7. Is the number you are thinking of less than 100? (Enter 'y' or 'n') 
n
The number you are thinking of is 100
I needed 7 guesses.
```

Example with 99:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of greater than 75? (Enter 'y' or 'n') 
y
3. Is the number you are thinking of less than 88? (Enter 'y' or 'n') 
n
4. Is the number you are thinking of greater than 94? (Enter 'y' or 'n') 
y
5. Is the number you are thinking of less than 97? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of greater than 98? (Enter 'y' or 'n') 
y
7. Is the number you are thinking of less than 100? (Enter 'y' or 'n') 
y
The number you are thinking of is 99
I needed 7 guesses.
```

Example with 98:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of greater than 75? (Enter 'y' or 'n') 
y
3. Is the number you are thinking of less than 88? (Enter 'y' or 'n') 
n
4. Is the number you are thinking of greater than 94? (Enter 'y' or 'n') 
y
5. Is the number you are thinking of less than 97? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of greater than 98? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 98? (Enter 'y' or 'n') 
n
The number you are thinking of is 98
I needed 7 guesses.
```


Example with 1:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
y
2. Is the number you are thinking of greater than 25? (Enter 'y' or 'n') 
n
3. Is the number you are thinking of less than 13? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of greater than 6? (Enter 'y' or 'n') 
n
5. Is the number you are thinking of less than 3? (Enter 'y' or 'n') 
y
6. Is the number you are thinking of greater than 2? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 2? (Enter 'y' or 'n') 
y
The number you are thinking of is 1
I needed 7 guesses.
```

Example with 2:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
y
2. Is the number you are thinking of greater than 25? (Enter 'y' or 'n') 
n
3. Is the number you are thinking of less than 13? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of greater than 6? (Enter 'y' or 'n') 
n
5. Is the number you are thinking of less than 3? (Enter 'y' or 'n') 
y
6. Is the number you are thinking of greater than 2? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 2? (Enter 'y' or 'n') 
n
The number you are thinking of is 2
I needed 7 guesses.
```

Example with 3:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
y
2. Is the number you are thinking of greater than 25? (Enter 'y' or 'n') 
n
3. Is the number you are thinking of less than 13? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of greater than 6? (Enter 'y' or 'n') 
n
5. Is the number you are thinking of less than 3? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of greater than 4? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 4? (Enter 'y' or 'n') 
y
The number you are thinking of is 3
I needed 7 guesses.
```

Example with 50:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of greater than 75? (Enter 'y' or 'n') 
n
3. Is the number you are thinking of less than 62? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of greater than 55? (Enter 'y' or 'n') 
n
5. Is the number you are thinking of less than 52? (Enter 'y' or 'n') 
y
6. Is the number you are thinking of greater than 51? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 51? (Enter 'y' or 'n') 
y
The number you are thinking of is 50
I needed 7 guesses.
```

Example with 49:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
y
2. Is the number you are thinking of greater than 25? (Enter 'y' or 'n') 
y
3. Is the number you are thinking of less than 37? (Enter 'y' or 'n') 
n
4. Is the number you are thinking of greater than 43? (Enter 'y' or 'n') 
y
5. Is the number you are thinking of less than 46? (Enter 'y' or 'n') 
n
6. Is the number you are thinking of greater than 47? (Enter 'y' or 'n') 
y
7. Is the number you are thinking of less than 49? (Enter 'y' or 'n') 
n
The number you are thinking of is 49
I needed 7 guesses.
```

Example with 51:

```
Think of a number between 1 and 100

1. Is the number you are thinking of less than 50? (Enter 'y' or 'n') 
n
2. Is the number you are thinking of greater than 75? (Enter 'y' or 'n') 
n
3. Is the number you are thinking of less than 62? (Enter 'y' or 'n') 
y
4. Is the number you are thinking of greater than 55? (Enter 'y' or 'n') 
n
5. Is the number you are thinking of less than 52? (Enter 'y' or 'n') 
y
6. Is the number you are thinking of greater than 51? (Enter 'y' or 'n') 
n
7. Is the number you are thinking of less than 51? (Enter 'y' or 'n') 
n
The number you are thinking of is 51
I needed 7 guesses.
```
