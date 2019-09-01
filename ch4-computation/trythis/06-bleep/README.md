### Bleep

Write a program that “bleeps” out words that you don’t like; 
that is, you read in words using cin and print them again on cout. 
If a word is among a few you have defined, you write out `BLEEP` instead of that word. 
Start with one “disliked word” such as

```
string disliked = “Broccoli”;
```

When that works, add a few more.


.. literalinclude:: ../ch4-computation/trythis/06-bleep/main.cpp
   :language: cpp
   :caption: bleep.cpp
   :linenos:

This program outputs:

```
Tomato
Tomato
Apple
Apple
Lemon
Lemon
Broccoli
BLEEP
^D
```

The extended program uses more disliked words:


.. literalinclude:: ../ch4-computation/trythis/06-bleep/main_extended.cpp
   :language: cpp
   :caption: bleep_extended.cpp
   :linenos:


It outputs:

``` 
Broccoli
BLEEP
Apple
Apple
Cauliflower
BLEEP
Lemon
Lemon
```
