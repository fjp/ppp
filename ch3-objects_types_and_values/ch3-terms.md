## Terms


### assignment

An assignment is an operator, denoted by the `=` sign. This operator assings a new value (literal) to a variable. 
For example:

```
int a = 3; // a starts out with the value 3

a = 4; // a gets the value 4 (“becomes 4”)

int b = a; // b starts out with a copy of a’s value (that is, 4)

b = a+5; // b gets the value a+5 (that is, 9) a:

a = a+7; // a gets the value a+7 (that is, 11)
```

That last assignment deserves notice. First of all it clearly shows that `=` does not mean equals — clearly, 
a doesn’t equal `a+7`. It means assignment, that is, to place a new value in a variable. 
What is done for `a=a+7` is the following:

1. First, get the value of `a`; that’s the integer `4`. 
2. Next, add `7` to that `4`, yielding the integer `11`. 
3. Finally, put that `11` into `a`.

### cin


### concatenation 


### conversion 


### declaration 


### decrement


### definition 


### increment 


### initialization

Assignments are similar to initialization which is illustrated in the following example:

```
string a = "alpha"; // a starts out with the value “alpha” a: alpha
a = "beta"; // a gets the value “beta” (becomes “beta”) a: beta
string b = a; // b starts out with a copy of a’s value (that is, “beta”)
b = a+"gamma"; // b gets the value a+“gamma” (that is, “betagamma”)
a = a+"delta"; // a gets the value a+“delta” (that is, “betadelta”)
```

Above, we use “starts out with” and “gets” to distinguish two similar, but logically
distinct, operations:

- Initialization (giving a variable its initial value)
- Assignment (giving a variable a new value)

These operations are so similar that C++ allows us to use the same notation (the `=`) for both:

```
int y = 8; // initialize y with 8
x = 9;  // assign 9 to x
string t = "howdy!"; // initialize t with “howdy!”
s = "G'day";  // assign “G’day” to s
```

However, logically assignment and initialization are different. 
You can tell the two apart by the type specification (like int or string) that always starts an initialization; 
an assignment does not have that. In principle, an initialization always finds the variable empty. On the other hand, 
an assignment (in principle) must clear out the old value from the variable before putting in the new value.


### name 


### narrowing 


### object


### operation 


### operator 


### type 


### typesafety 


### value 


### variable
