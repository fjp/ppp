### Exercise 10

Write a program that plays the game "Rock, Paper, Scissors". 
If you are not familiar with the game do some research (e.g., on the web using Google). 
Research is a common task for programmers. Use a `switch`-statement to solve this exercise. 
Also, the machine should give random answers (i.e., select the next rock, paper, or scissors randomly). 
Real randomness is too hard to provide just now, 
so just build a vector with a sequence of values to be used as "the next value".
If you build the vector into the program, it will always play the same game, 
so maybe you should let the user enter some values. 
Try variations to make it less easy for the user to guess which move the machine will make next.

.. literalinclude:: ../ch4-computation/exercises/exercise10/main.cpp
   :language: cpp
   :caption: rockpaperscissors.cpp
   :linenos:
