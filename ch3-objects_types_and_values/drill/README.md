1. This drill is to write a program that produces a simple form letter based on user input. 
Begin by typing the code from §3.1 prompting a user to enter his or her first name and writing “Hello, first_name” where first_name is the name entered by the user. 
Then modify your code as follows: change the prompt to “Enter the name of the person you want to write to” and change the output to “Dear first_name,”. Don’t forget the comma.

The following code shows the original program from §3.1.

.. literalinclude:: ../ch3-objects_types_and_values/drill/letterformoriginal.cpp
   :language: cpp
   :caption: letterformoriginal.cpp
   :linenos:
   
Here is the modified version to satisfy the first drill:

.. literalinclude:: ../ch3-objects_types_and_values/drill/letterform01.cpp
   :language: cpp
   :caption: letterform01.cpp
   
Executing the program results in: 

```bash
Enter the name of the person you want to write to (followed by 'enter'):
Pia
Dear Pia,
``` 


2. Add an introductory line or two, like “How are you? I am fine. I miss you.” 
Be sure to indent the first line. Add a few more lines of your choosing — it’s your letter.

.. literalinclude:: ../ch3-objects_types_and_values/drill/letterform02.cpp
   :language: cpp
   :caption: letterform02.cpp

The output will be similar to this:

```bash
Enter the name of the person you want to write to (followed by 'enter'):
Pia
Dear Pia,
	How are you? I am fine. I miss you.
I hope you had a nice day and I would've loved to spend it with you.
Luckily, next weekend is not far away, and we will meet again.
I am sure we will find something fun to do, like swimming, hiking or biking,
and maybe going out into the city in the evening.
I really look forward to seeing you again.

Process finished with exit code 0
```

3. Now prompt the user for the name of another friend, and store it in friend_name. 
Add a line to your letter: “Have you seen friend_name lately?”

.. literalinclude:: ../ch3-objects_types_and_values/drill/letterform03.cpp
   :language: cpp
   :caption: letterform03.cpp

This results in the output similar to the following:

```bash
Enter the name of the person you want to write to (followed by 'enter'):
Pia
Dear Pia,
	How are you? I am fine. I miss you.
I hope you had a nice day and I would've loved to spend it with you.
Luckily, next weekend is not far away, and we will meet again.
I am sure we will find something fun to do, like swimming, hiking or biking,
and maybe going out into the city in the evening.
I really look forward to seeing you again.
Enter the name of another friend (followed by 'enter'):
Sebastian
Have you seen Sebastian lately?

Process finished with exit code 0
```

4. Declare a char variable called `friend_sex` and initialize its value to `0`. 
Prompt the user to enter an `m` if the friend is male and an `f` if the friend is female. 
Assign the value entered to the variable `friend_sex`. Then use two if-statements to write the following:
- If the friend is male, write “If you see friend_name please ask him to call me.”
- If the friend is female, write “If you see friend_name please ask her to call me.”

.. literalinclude:: ../ch3-objects_types_and_values/drill/letterform04.cpp
   :language: cpp
   :caption: letterform04.cpp
   
   
Entering the following results in this output:

```bash
Enter the name of the person you want to write to (followed by 'enter'):
Pia
Dear Pia,
	How are you? I am fine. I miss you.
I hope you had a nice day and I would've loved to spend it with you.
Luckily, next weekend is not far away, and we will meet again.
I am sure we will find something fun to do, like swimming, hiking or biking,
and maybe going out into the city in the evening.
I really look forward to seeing you again.
Enter the name of another friend (followed by 'enter'):
Sebastian
Have you seen Sebastian lately?
Enter an 'm' if the friend is male and and 'f' if the friend is female (followed by 'enter'):
m
If you see Sebastian please ask him to call me.
```

5. Prompt the user to enter the age of the recipient and assign it to an int variable age. 
Have your program write “I hear you just had a birthday and you are age years old.” 
If age is 0 or less or 110 or more, call simple_error("you're kidding!") using simple_error() from std_lib_facilities.h.

.. literalinclude:: ../ch3-objects_types_and_values/drill/letterform05.cpp
   :language: cpp
   :caption: letterform05.cpp
   

The output when the age is inbetween 0 and 110:

```bash
Enter the name of the person you want to write to (followed by 'enter'):
Pia
Dear Pia,
	How are you? I am fine. I miss you.
I hope you had a nice day and I would've loved to spend it with you.
Luckily, next weekend is not far away, and we will meet again.
I am sure we will find something fun to do, like swimming, hiking or biking,
and maybe going out into the city in the evening.
I really look forward to seeing you again.
Enter the name of another friend (followed by 'enter'):
Sebastian
Have you seen Sebastian lately?
Enter an 'm' if the friend is male and and 'f' if the friend is female (followed by 'enter'):
m
If you see Sebastian please ask him to call me.
Enter the age of the recipient (followed by 'enter'):
29
I hear you just had a birthday and you are 29 years old.
```

Erroneous input results in:

```bash
Enter the name of the person you want to write to (followed by 'enter'):
Pia
Dear Pia,
	How are you? I am fine. I miss you.
I hope you had a nice day and I would've loved to spend it with you.
Luckily, next weekend is not far away, and we will meet again.
I am sure we will find something fun to do, like swimming, hiking or biking,
and maybe going out into the city in the evening.
I really look forward to seeing you again.
Enter the name of another friend (followed by 'enter'):
Sebastian
Have you seen Sebastian lately?
Enter an 'm' if the friend is male and and 'f' if the friend is female (followed by 'enter'):
m
If you see Sebastian please ask him to call me.
Enter the age of the recipient (followed by 'enter'):
0
I hear you just had a birthday and you are 0 years old.
Please enter a character to exit
error: you're kidding!
^D

Process finished with exit code 1
```

6. Add this to your letter:
- If your friend is under 12, write “Next year you will be age+1.”
- If your friend is 17, write “Next year you will be able to vote.”
- If your friend is over 70, write “I hope you are enjoying retirement.”

    Check your program to make sure it responds appropriately to each kind of value.
   
.. literalinclude:: ../ch3-objects_types_and_values/drill/letterform06.cpp
   :language: cpp
   :caption: letterform06.cpp
   
   
Here is the output if the friend is under 12:

```bash
Enter the age of the recipient (followed by 'enter'):
1
I hear you just had a birthday and you are 1 years old.
Next year you will be 2.
```

Here is the output if the friend is 17:

```bash
Enter the age of the recipient (followed by 'enter'):
17
I hear you just had a birthday and you are 17 years old.
Next year you will be able to vote.
```

Here is the output if the friend is over 70:

```bash
Enter the age of the recipient (followed by 'enter'):
71
I hear you just had a birthday and you are 17 years old.
I hope you are enjoying retirement.
```
   
   
7. Add “Yours sincerely,” followed by two blank lines for a signature, followed by your name.

.. literalinclude:: ../ch3-objects_types_and_values/drill/letterform07.cpp
   :language: cpp
   :caption: letterform07.cpp
   
   
This code produces:

```bash
Enter the name of the person you want to write to (followed by 'enter'):
Pia
Dear Pia,
	How are you? I am fine. I miss you.
I hope you had a nice day and I would've loved to spend it with you.
Luckily, next weekend is not far away, and we will meet again.
I am sure we will find something fun to do, like swimming, hiking or biking,
and maybe going out into the city in the evening.
I really look forward to seeing you again.
Enter the name of another friend (followed by 'enter'):
Sebastian
Have you seen Sebastian lately?
Enter an 'm' if the friend is male and and 'f' if the friend is female (followed by 'enter'):
m
If you see Sebastian please ask him to call me.
Enter the age of the recipient (followed by 'enter'):
29
I hear you just had a birthday and you are 29 years old.
Yours sincerely,


Franz

Process finished with exit code 0
```
