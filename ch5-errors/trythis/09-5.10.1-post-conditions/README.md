### Post-conditions

Find a pair of values so that the pre-condition of this version of area holds, 
but the post-condition doesn't.

.. literalinclude:: ../ch5-errors/trythis/09-5.10.1-post-conditions/main.cpp
   :language: cpp
   :caption: postconditions.cpp
   :linenos:
   
Entering large numbers that produce an overflow satisfy the pre-conditions of `area()` 
but can violate the post-condition in case the reult is zero or negative. 


``` 
Enter integer length and width to get the area of the rectangle:
(Negative numbers will violate the pre-conditions while large numbers
will produce an overflow and violate the post-condition of area())
60000 60000
Area is area() a: -694967296
Error: area() post-condition
```

Another input where the result would be zero because of an overflow:

``` 
Enter integer length and width to get the area of the rectangle:
(Negative numbers will violate the pre-conditions while large numbers
will produce an overflow and violate the post-condition of area())
65536 65536
Area is area() a: 0
Error: area() post-condition
```

Here is an input that violates the pre-condition:

``` 
Enter integer length and width to get the area of the rectangle:
(Negative numbers will violate the pre-conditions while large numbers
will produce an overflow and violate the post-condition of area())
-1 1
Area is Error: area() pre-condition
```