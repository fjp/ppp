# Chapter 3 - Objects, Types and Values Exercises

1. If you haven’t done so already, do the Try this exercises from this chapter.

2. Write a program in C++ that converts from miles to kilometers. 
Your program should have a reasonable prompt for the user to enter a number of miles. 
Hint: There are 1.609 kilometers to the mile.

3. Write a program that doesn’t do anything, but declares a number of variables with legal and illegal names 
(such as `int double = 0;`), so that you can see how the compiler reacts.

4. Write a program that prompts the user to enter two integer values. 
Store these values in `int` variables named `val1` and `val2`. Write your program to determine the smaller, 
larger, sum, difference, product, and ratio of these values and report them to the user.

5. Modify the program above to ask the user to enter floating-point values and store them in double variables. 
Compare the outputs of the two programs for some inputs of your choice. Are the results the same? Should they be? 
What’s the difference?

6. Write a program that prompts the user to enter three integer values, 
and then outputs the values in numerical sequence separated by commas. 
So, if the user enters the values `10 4 6`, the output should be `4, 6, 10`. If two values are the same, they should just be ordered together. So, the input `4 5 4` should give `4, 4, 5`.

7. Do exercise 6, but with three string values. So, if the user enters the values `Steinbeck`, `Hemingway`, `Fitzgerald`, 
the output should be `Fitzgerald, Hemingway, Steinbeck`.


8. Write a program to test an integer value to determine if it is odd or even. 
As always, make sure your output is clear and complete. In other words, don’t just output yes or no. 
Your output should stand alone, like `The value 4 is an even number`. Hint: See the remainder (modulo) operator in §3.4.


9. Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2. 
When the user inputs a number, the program should print out the corresponding digit. 
Do it for the values 0, 1, 2, 3, and 4 and write out `not a number I know` if the user enters something 
that doesn’t correspond, such as `stupid computer!`.


10. Write a program that takes an operation followed by two operands and outputs the result. For example:

```
+ 100 3.14 
* 4 5
```

Read the operation into a string called `operation` and use an if-statement to figure out which operation the user wants, 
for example, `if (operation=="+")`. Read the operands into variables of type `double`. 
Implement this for operations called +, –, *, /, plus, minus, mul, and div with their obvious meanings.


11. Write a program that prompts the user to enter some number of pennies (1-cent coins), nickels (5-cent coins), 
dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent coins), and one-dollar coins (100-cent coins). 
Query the user separately for the number of each size coin, e.g., “How many pennies do you have?” 
Then your program should print out something like this:

```
You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents.
```

Make some improvements: if only one of a coin is reported, make the output grammatically correct, 
e.g., `14 dimes` and `1 dime` (not `1 dimes`). Also, report the sum in dollars and cents, i.e., `$5.73` instead of `573 cents`.
