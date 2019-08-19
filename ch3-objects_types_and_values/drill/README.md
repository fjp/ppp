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