## Drill


1. This drill is to write a program that produces a simple form letter based on user input. 
Begin by typing the code from §3.1 prompting a user to enter his or her first name and writing “Hello, first_name” where first_name is the name entered by the user. 
Then modify your code as follows: change the prompt to “Enter the name of the person you want to write to” and change the output to “Dear first_name,”. Don’t forget the comma.

The following code shows the original program from §3.1.

.. literalinclude:: ../ch3-objects_types_and_values/drill/letterformoriginal.cpp
   :language: cpp
   :caption: letterformoriginal.cpp
   
Here is the modified version to satisfy the first drill:

.. literalinclude:: ../ch3-objects_types_and_values/drill/letterform01.cpp
   :language: cpp
   :caption: letterform01.cpp
   
Executing the program results in: 

``` 
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

``` 
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

```
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

```
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

