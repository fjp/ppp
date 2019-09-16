### Exercise 20

Modify the program from exercise 19 so that when you enter a name, the
program will output the corresponding score or `name not found`.

.. literalinclude:: ../ch4-computation/exercises/exercise20/main.cpp
   :language: cpp
   :caption: name-and-value_pairs-name-score-output.cpp
   :linenos:


``` 
Enter a set of name-and-value pairs, such as 'Joe 17' and 'Barbara 22 (Terminate the input using 'NoName 0' followed by 'Enter'):
Joe 17
Barbara 22
NoName 0
(Joe,17)
(Barbara,22)
Write a name to get the score: Joe
Score for Joe is 17
Write a name to get the score: Barbara
Score for Barbara is 22
Write a name to get the score: John
name not found
Write a name to get the score: ^D
```