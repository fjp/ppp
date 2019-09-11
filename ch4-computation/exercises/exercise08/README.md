### Exercise 08

There is an old story that the emperor wanted to thank the inventor of
the game of chess and asked the inventor to name his reward. The inventor
asked for one grain of rice for the first square, 2 for the second, 4 for
the third, and so on, doubling for each of the 64 squares. That may sound
modest, but there wasn't that much rice in the empire! Write a program to
calculate how many squares are required to give the inventor at least 1000
grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains.
You'll need a loop, of course, and probably an `int` to keep track of which
square you are at, an `int` to keep the number of grains on the current
square, and an `int` to keep track of the grains on all previous squares. We
suggest that you write out the value of all your variables for each iteration
of the loop so that you can see what's going on.

.. literalinclude:: ../ch4-computation/exercises/exercise08/main.cpp
   :language: cpp
   :caption: chessgrains.cpp
   :linenos:


Output of the program:

```
Square: 1
	Grains at current square: 1
	Rice on previous squares: 0
	Total rice grains: 1
Square: 2
	Grains at current square: 2
	Rice on previous squares: 1
	Total rice grains: 3
Square: 3
	Grains at current square: 4
	Rice on previous squares: 3
	Total rice grains: 7
Square: 4
	Grains at current square: 8
	Rice on previous squares: 7
	Total rice grains: 15
Square: 5
	Grains at current square: 16
	Rice on previous squares: 15
	Total rice grains: 31
Square: 6
	Grains at current square: 32
	Rice on previous squares: 31
	Total rice grains: 63
Square: 7
	Grains at current square: 64
	Rice on previous squares: 63
	Total rice grains: 127
Square: 8
	Grains at current square: 128
	Rice on previous squares: 127
	Total rice grains: 255
Square: 9
	Grains at current square: 256
	Rice on previous squares: 255
	Total rice grains: 511
To give the inventor at least 1000 grains, 10 squares are required.
Grains at square 10: 512
With the rice on the previous squares this results in 1023 total grains for the inventor.

Square: 1
	Grains at current square: 1
	Rice on previous squares: 0
	Total rice grains: 1
Square: 2
	Grains at current square: 2
	Rice on previous squares: 1
	Total rice grains: 3
Square: 3
	Grains at current square: 4
	Rice on previous squares: 3
	Total rice grains: 7
Square: 4
	Grains at current square: 8
	Rice on previous squares: 7
	Total rice grains: 15
Square: 5
	Grains at current square: 16
	Rice on previous squares: 15
	Total rice grains: 31
Square: 6
	Grains at current square: 32
	Rice on previous squares: 31
	Total rice grains: 63
Square: 7
	Grains at current square: 64
	Rice on previous squares: 63
	Total rice grains: 127
Square: 8
	Grains at current square: 128
	Rice on previous squares: 127
	Total rice grains: 255
Square: 9
	Grains at current square: 256
	Rice on previous squares: 255
	Total rice grains: 511
Square: 10
	Grains at current square: 512
	Rice on previous squares: 511
	Total rice grains: 1023
Square: 11
	Grains at current square: 1024
	Rice on previous squares: 1023
	Total rice grains: 2047
Square: 12
	Grains at current square: 2048
	Rice on previous squares: 2047
	Total rice grains: 4095
Square: 13
	Grains at current square: 4096
	Rice on previous squares: 4095
	Total rice grains: 8191
Square: 14
	Grains at current square: 8192
	Rice on previous squares: 8191
	Total rice grains: 16383
Square: 15
	Grains at current square: 16384
	Rice on previous squares: 16383
	Total rice grains: 32767
Square: 16
	Grains at current square: 32768
	Rice on previous squares: 32767
	Total rice grains: 65535
Square: 17
	Grains at current square: 65536
	Rice on previous squares: 65535
	Total rice grains: 131071
Square: 18
	Grains at current square: 131072
	Rice on previous squares: 131071
	Total rice grains: 262143
Square: 19
	Grains at current square: 262144
	Rice on previous squares: 262143
	Total rice grains: 524287
To give the inventor at least 1000000 grains, 20 squares are required.
Grains at square 20: 524288
With the rice on the previous squares this results in 1048575 total grains for the inventor.

Square: 1
	Grains at current square: 1
	Rice on previous squares: 0
	Total rice grains: 1
Square: 2
	Grains at current square: 2
	Rice on previous squares: 1
	Total rice grains: 3
Square: 3
	Grains at current square: 4
	Rice on previous squares: 3
	Total rice grains: 7
Square: 4
	Grains at current square: 8
	Rice on previous squares: 7
	Total rice grains: 15
Square: 5
	Grains at current square: 16
	Rice on previous squares: 15
	Total rice grains: 31
Square: 6
	Grains at current square: 32
	Rice on previous squares: 31
	Total rice grains: 63
Square: 7
	Grains at current square: 64
	Rice on previous squares: 63
	Total rice grains: 127
Square: 8
	Grains at current square: 128
	Rice on previous squares: 127
	Total rice grains: 255
Square: 9
	Grains at current square: 256
	Rice on previous squares: 255
	Total rice grains: 511
Square: 10
	Grains at current square: 512
	Rice on previous squares: 511
	Total rice grains: 1023
Square: 11
	Grains at current square: 1024
	Rice on previous squares: 1023
	Total rice grains: 2047
Square: 12
	Grains at current square: 2048
	Rice on previous squares: 2047
	Total rice grains: 4095
Square: 13
	Grains at current square: 4096
	Rice on previous squares: 4095
	Total rice grains: 8191
Square: 14
	Grains at current square: 8192
	Rice on previous squares: 8191
	Total rice grains: 16383
Square: 15
	Grains at current square: 16384
	Rice on previous squares: 16383
	Total rice grains: 32767
Square: 16
	Grains at current square: 32768
	Rice on previous squares: 32767
	Total rice grains: 65535
Square: 17
	Grains at current square: 65536
	Rice on previous squares: 65535
	Total rice grains: 131071
Square: 18
	Grains at current square: 131072
	Rice on previous squares: 131071
	Total rice grains: 262143
Square: 19
	Grains at current square: 262144
	Rice on previous squares: 262143
	Total rice grains: 524287
Square: 20
	Grains at current square: 524288
	Rice on previous squares: 524287
	Total rice grains: 1048575
Square: 21
	Grains at current square: 1048576
	Rice on previous squares: 1048575
	Total rice grains: 2097151
Square: 22
	Grains at current square: 2097152
	Rice on previous squares: 2097151
	Total rice grains: 4194303
Square: 23
	Grains at current square: 4194304
	Rice on previous squares: 4194303
	Total rice grains: 8388607
Square: 24
	Grains at current square: 8388608
	Rice on previous squares: 8388607
	Total rice grains: 16777215
Square: 25
	Grains at current square: 16777216
	Rice on previous squares: 16777215
	Total rice grains: 33554431
Square: 26
	Grains at current square: 33554432
	Rice on previous squares: 33554431
	Total rice grains: 67108863
Square: 27
	Grains at current square: 67108864
	Rice on previous squares: 67108863
	Total rice grains: 134217727
Square: 28
	Grains at current square: 134217728
	Rice on previous squares: 134217727
	Total rice grains: 268435455
Square: 29
	Grains at current square: 268435456
	Rice on previous squares: 268435455
	Total rice grains: 536870911
To give the inventor at least 1000000000 grains, 30 squares are required.
Grains at square 30: 536870912
With the rice on the previous squares this results in 1073741823 total grains for the inventor.
```
