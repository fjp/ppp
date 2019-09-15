### Exercise 19

Write a program where you first enter a set of name-and-value pairs, such as `Joe 17` and `Barbara 22`. 
For each pair, add the name to a `vector` called `names` and the number to a `vector` called `scores`
(in corresponding positions, so that if `names[7]=="Joe"` then `scores[7]==17`). Terminate input with `NoName 0`. 
Check that each name is unique and terminate with an error message if a name is entered twice. 
Write out all the (name,score) pairs, one per line.

.. literalinclude:: ../ch4-computation/exercises/exercise19/main.cpp
   :language: cpp
   :caption: name-and-value_pairs.cpp
   :linenos:


The program results in the following:

```
Enter a set of name-and-value pairs, such as 'Joe 17' and 'Barbara 22 (Terminate the input using 'NoName 0' followed by 'Enter'):
Joe 17
Barbara 22
NoName 0
(Joe,17)
(Barbara,22)
(NoName,0)
```