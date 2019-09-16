### Exercise 21

Modify the program from exercise 19 so that when you enter an integer,
the program will output all the names with that score or `score not found`.

.. literalinclude:: ../ch4-computation/exercises/exercise21/main.cpp
   :language: cpp
   :caption: name-and-value_pairs-score-to-names-output.cpp
   :linenos:


The result of this program is:

``` 
Enter a set of name-and-value pairs, such as 'Joe 17' and 'Barbara 22 (Terminate the input using 'NoName 0' followed by 'Enter'):
Joe 18
Barbara 18
John 22
NoName 0

The entered names are:
(Joe,18)
(Barbara,18)
(John,22)

Write a score to get the names with that score: 18
Joe
Barbara
Write a score to get the names with that score: 20
No name with that score 20
Write a score to get the names with that score: 0
No name with that score 0
Write a score to get the names with that score: 22
John
Write a score to get the names with that score: ^D
```