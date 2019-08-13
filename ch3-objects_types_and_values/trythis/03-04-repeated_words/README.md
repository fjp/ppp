### Repeated Words


Execute this program yourself using a piece of paper. Use the input `The cat cat jumped`. Even experienced programmers use this technique to visualize the actions of small sections of code that somehow don’t seem completely obvious.


.. literalinclude:: ../ch3-objects-types-and-values/trythis/03-04-repeated_words/main.cpp
   :language: cpp
   :caption: repeatedwords.cpp
   :linenos:

| Line | previous | current   | current == equal | 
|------|----------|-----------|-------------------
|  6   | " "      |  "The"    |  false           |
|  10  | "The"    |  "The"    |  false           |
|  6   | "The"    |  "cat"    |  false           |
|  10  | "cat"    |  "cat"    |  false           | 
|  6   | "cat"    |  "cat"    |  true            | 
|  10  | "cat"    |  "cat"    |  true            | 
|  6   |  "cat"   |  "jumped" |  false           | 
|  10  | "jumped" |  "jumped" | false            |
|  6   | "jumped" |  eof      |  -               |


Get the “repeated word detection program” to run. Test it with the sentence

`She she laughed He He He because what he did did not look very very good good.` 

How many repeated words were there? Why? What is the definition of word used here? What is the definition of repeated word? (For example, is She she a repetition?)

The output of the program is:

```
repeated word: He
repeated word: He
repeated word: did
repeated word: very
^D

Process finished with exit code 0
```

which means that there were four repeated words according to this program.
`She` and `she` are not equal here because the capitalization do not match.
The program also did not get `good` and `good.` as equal because of the period at the end of the sentence.
Here a word is defined to be sequence of characters that is sparated by a white-space character.
A repeated word is defined to be a word that matches its previous word exactly regarding case sensitivity and its containing characters. 
