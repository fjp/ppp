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


Example games:

```
Let's play 'Rock, Paper, Scissors'. Finish when one wins 2 games and repeat on draws.
1. Round:
	Enter an integer which I will use to generate a random gesture.
1
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Rock
Rock, Paper, Scissors
	I win with Paper against your Rock gesture.
	Score: Player 0:1 Computer

2. Round:
	Enter an integer which I will use to generate a random gesture.
2
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Rock
Rock, Paper, Scissors
	You win with Rock against my Scissors gesture.
	Score: Player 1:1 Computer

3. Round:
	Enter an integer which I will use to generate a random gesture.
2
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Rock
Rock, Paper, Scissors
	You win with Rock against my Scissors gesture.
	Score: Player 2:1 Computer

You win this game with a score of 2:1
```


```
Let's play 'Rock, Paper, Scissors'. Finish when one wins 2 games and repeat on draws.
1. Round:
	Enter an integer which I will use to generate a random gesture.
500
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Scissors
Rock, Paper, Scissors
	Draw! We both threw Scissors ... Repeat
	Score: Player 0:0 Computer

1. Round:
	Enter an integer which I will use to generate a random gesture.
1
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Paper
Rock, Paper, Scissors
	Draw! We both threw Paper ... Repeat
	Score: Player 0:0 Computer

1. Round:
	Enter an integer which I will use to generate a random gesture.
320
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Stone
Please try again. Enter 'Rock', 'Paper' or 'Scissors'
Rock
Rock, Paper, Scissors
	You win with Rock against my Scissors gesture.
	Score: Player 1:0 Computer

2. Round:
	Enter an integer which I will use to generate a random gesture.
160
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Paper
Rock, Paper, Scissors
	Draw! We both threw Paper ... Repeat
	Score: Player 1:0 Computer

2. Round:
	Enter an integer which I will use to generate a random gesture.
750
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Paper
Rock, Paper, Scissors
	You win with Paper against my Rock gesture.
	Score: Player 2:0 Computer

You win this game with a score of 2:0
```

The next game shows that the random generator is missing:

```
Let's play 'Rock, Paper, Scissors'. Finish when one wins 2 games and repeat on draws.
1. Round:
	Enter an integer which I will use to generate a random gesture.
2
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Paper
Rock, Paper, Scissors
	I win with Scissors against your Paper gesture.
	Score: Player 0:1 Computer

2. Round:
	Enter an integer which I will use to generate a random gesture.
2
	Enter a gesture ('Rock', 'Paper', 'Scissors'):
Paper
Rock, Paper, Scissors
	I win with Scissors against your Paper gesture.
	Score: Player 0:2 Computer

I win this game with a score of 0:2
```

