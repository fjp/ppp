## Review

1. What is meant by the term prompt?

A line of code that writes out a message to the screen (terminal, console, ...) which encourages or prompts the user to take action.

```cpp
int main() 
{
  cout << "Please enter your first name (followed by 'enter'):\n"; // Prompt the user to take action
  string first_name; // first_name is a variable of type     
  string cin >> first_name; // read characters into first_name
  cout << "Hello, " << first_name << "!\n";
}
```

2. Which operator do you use to read into a variable?


3. If you want the user to input an integer value into your program for a variable named number, 
what are two lines of code you could write to ask the user to do it and to input the value into your program?

4. What is `\n` called and what purpose does it serve?

5. What terminates input into a string?

6. What terminates input into an integer?

7. How would you write

```cpp
cout << "Hello, "; 
cout << first_name; 
cout << "!\n";
```

as a single line of code?


8. What is an object?

9. What is a literal?

Literals represent values of various types. 
For example, the literal 12 represents the integer value “twelve”,
"Morning" represents the character string value Morning, and true represents the Boolean value true.

10. What kinds of literals are there?

11. What is a variable?

12. What are typical sizes for a char, an int, and a double?

13. What measures do we use for the size of small entities in memory, such as ints and strings?

14. What is the difference between = and ==?

15. What is a definition?

16. What is an initialization and how does it differ from an assignment?

17. What is string concatenation and how do you make it work in C++?

18. Which of the following are legal names in C++? If a name is not legal, why not?

```
This_little_pig latest thing MiniMineMine
This_1_is fine the_$12_method number
2_For_1_special _this_is_ok correct?
```

19. Give five examples of legal names that you shouldn’t use because they are likely to cause confusion.


20. What are some good rules for choosing names?


21. What is type safety and why is it important?


22. Why can conversion from double to int be a bad thing?


23. Define a rule to help decide if a conversion from one type to another is safe or unsafe.

