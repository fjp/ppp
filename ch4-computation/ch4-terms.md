## Terms

### abstraction

Our main tool for organizing a program — and for organizing our thoughts as we program — 
is to break up a big computation into many little ones. This technique comes in two variations:

- *Abstraction:* Hide details that we don’t need to use a facility ("implementation details") 
behind a convenient and general interface. For example, rather than considering the details of how to sort a phone book 
(thick books have been written about how to sort), we just call the sort algorithm from the C++ standard library.
`sort()` is a variant (§21.9) of the standard library sort algorithm (§21.8, §B.5.4) defined in `std_library.h`. 
Another example is the way we use computer memory. Direct use of memory can be quite messy,
so we access it through typed and named variables (§3.2), standard library `vectors` (§4.6, Chapters 17–19), `maps` (Chapter 21), etc.

- *"Divide and conquer":* Here we take a large problem and divide it into several little ones. 
For example, if we need to build a dictionary, we can separate that job into three: read the data, sort the data, and output the data.

### begin()

The member functions `begin()` and `end()` of a `vector` return iterators, `begin` and `end`; 
they identify the beginning and the end of the sequence. An STL sequence is what is usually called “half-open”; 
that is, the element identified by begin is part of the sequence, but the end iterator points one beyond the end of the sequence. 
The usual mathematical notation for such sequences (ranges) is `[begin:end)`.
An iterator is an object that identifies an element of a sequence.

### computation

By computation we simply mean the act of producing some outputs based on some inputs, 
such as producing the result (output) `49` from the argument (input) `7` using the computation (function) `square` (see §4.5).

All that a program ever does is to compute; that is, it takes some inputs and produces some output. 
After all, we call the hardware on which we run the program a computer.

### conditional statement

The `?:` construct is called an arithmetic if or a conditional expression. 
The value of `(a>=b)?a:b` is `a` if `a>=b` and `b` otherwise. A conditional expression saves us from writing long-winded code like this:

```
int max(int a, int b) // max is global; a and b are local
{
  int m; // m is local
  if (a>=b)
      m = a;
  else
      m = b;
  return m;
}
```

Conditional expression:
`x?y:z` If `x` the result is `y`; otherwise the result is `z`.



### declaration


### definition


### divide and conquer


### else


### end()


### expression


### for-statement


### range-for-statement


### function


### if-statement


### increment


### input


### iteration


### loop


### lvalue


### member function


### output


### push_back()


### repetition


### rvalue


### selection


### size()


### sort()


### statement


### switch-statement


### vector


### while-statement

