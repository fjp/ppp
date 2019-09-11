### Exercise 09

Try to calculate the number of rice grains that the inventor asked for in exercise 8 above. 
You'll find that the number is so large that it won't fit in an `int` or a `double`. 
Observe what happens when the number gets too large to represent exactly as an `int` and as a `double`. 
What is the largest number of squares for which you can calculate the exact number of grains (using an `int`)? 
What is the largest number of squares for which you can calculate the approximate number of grains (using a `double`)?

.. literalinclude:: ../ch4-computation/exercises/exercise09/main.cpp
   :language: cpp
   :caption: chessgrainsmax.cpp
   :linenos:
   
   
Program output:
   
```
Square: 1
	Grains on current square [in]: 1, [double]: 1
	Rice on previous squares [int]: 0, [double]: 0
	Total rice grains [int]: 1, [double]: 1
Square: 2
	Grains on current square [in]: 2, [double]: 2
	Rice on previous squares [int]: 1, [double]: 1
	Total rice grains [int]: 3, [double]: 3
Square: 3
	Grains on current square [in]: 4, [double]: 4
	Rice on previous squares [int]: 3, [double]: 3
	Total rice grains [int]: 7, [double]: 7
Square: 4
	Grains on current square [in]: 8, [double]: 8
	Rice on previous squares [int]: 7, [double]: 7
	Total rice grains [int]: 15, [double]: 15
Square: 5
	Grains on current square [in]: 16, [double]: 16
	Rice on previous squares [int]: 15, [double]: 15
	Total rice grains [int]: 31, [double]: 31
Square: 6
	Grains on current square [in]: 32, [double]: 32
	Rice on previous squares [int]: 31, [double]: 31
	Total rice grains [int]: 63, [double]: 63
Square: 7
	Grains on current square [in]: 64, [double]: 64
	Rice on previous squares [int]: 63, [double]: 63
	Total rice grains [int]: 127, [double]: 127
Square: 8
	Grains on current square [in]: 128, [double]: 128
	Rice on previous squares [int]: 127, [double]: 127
	Total rice grains [int]: 255, [double]: 255
Square: 9
	Grains on current square [in]: 256, [double]: 256
	Rice on previous squares [int]: 255, [double]: 255
	Total rice grains [int]: 511, [double]: 511
Square: 10
	Grains on current square [in]: 512, [double]: 512
	Rice on previous squares [int]: 511, [double]: 511
	Total rice grains [int]: 1023, [double]: 1023
Square: 11
	Grains on current square [in]: 1024, [double]: 1024
	Rice on previous squares [int]: 1023, [double]: 1023
	Total rice grains [int]: 2047, [double]: 2047
Square: 12
	Grains on current square [in]: 2048, [double]: 2048
	Rice on previous squares [int]: 2047, [double]: 2047
	Total rice grains [int]: 4095, [double]: 4095
Square: 13
	Grains on current square [in]: 4096, [double]: 4096
	Rice on previous squares [int]: 4095, [double]: 4095
	Total rice grains [int]: 8191, [double]: 8191
Square: 14
	Grains on current square [in]: 8192, [double]: 8192
	Rice on previous squares [int]: 8191, [double]: 8191
	Total rice grains [int]: 16383, [double]: 16383
Square: 15
	Grains on current square [in]: 16384, [double]: 16384
	Rice on previous squares [int]: 16383, [double]: 16383
	Total rice grains [int]: 32767, [double]: 32767
Square: 16
	Grains on current square [in]: 32768, [double]: 32768
	Rice on previous squares [int]: 32767, [double]: 32767
	Total rice grains [int]: 65535, [double]: 65535
Square: 17
	Grains on current square [in]: 65536, [double]: 65536
	Rice on previous squares [int]: 65535, [double]: 65535
	Total rice grains [int]: 131071, [double]: 131071
Square: 18
	Grains on current square [in]: 131072, [double]: 131072
	Rice on previous squares [int]: 131071, [double]: 131071
	Total rice grains [int]: 262143, [double]: 262143
Square: 19
	Grains on current square [in]: 262144, [double]: 262144
	Rice on previous squares [int]: 262143, [double]: 262143
	Total rice grains [int]: 524287, [double]: 524287
Square: 20
	Grains on current square [in]: 524288, [double]: 524288
	Rice on previous squares [int]: 524287, [double]: 524287
	Total rice grains [int]: 1048575, [double]: 1.04858e+06
Square: 21
	Grains on current square [in]: 1048576, [double]: 1.04858e+06
	Rice on previous squares [int]: 1048575, [double]: 1.04858e+06
	Total rice grains [int]: 2097151, [double]: 2.09715e+06
Square: 22
	Grains on current square [in]: 2097152, [double]: 2.09715e+06
	Rice on previous squares [int]: 2097151, [double]: 2.09715e+06
	Total rice grains [int]: 4194303, [double]: 4.1943e+06
Square: 23
	Grains on current square [in]: 4194304, [double]: 4.1943e+06
	Rice on previous squares [int]: 4194303, [double]: 4.1943e+06
	Total rice grains [int]: 8388607, [double]: 8.38861e+06
Square: 24
	Grains on current square [in]: 8388608, [double]: 8.38861e+06
	Rice on previous squares [int]: 8388607, [double]: 8.38861e+06
	Total rice grains [int]: 16777215, [double]: 1.67772e+07
Square: 25
	Grains on current square [in]: 16777216, [double]: 1.67772e+07
	Rice on previous squares [int]: 16777215, [double]: 1.67772e+07
	Total rice grains [int]: 33554431, [double]: 3.35544e+07
Square: 26
	Grains on current square [in]: 33554432, [double]: 3.35544e+07
	Rice on previous squares [int]: 33554431, [double]: 3.35544e+07
	Total rice grains [int]: 67108863, [double]: 6.71089e+07
Square: 27
	Grains on current square [in]: 67108864, [double]: 6.71089e+07
	Rice on previous squares [int]: 67108863, [double]: 6.71089e+07
	Total rice grains [int]: 134217727, [double]: 1.34218e+08
Square: 28
	Grains on current square [in]: 134217728, [double]: 1.34218e+08
	Rice on previous squares [int]: 134217727, [double]: 1.34218e+08
	Total rice grains [int]: 268435455, [double]: 2.68435e+08
Square: 29
	Grains on current square [in]: 268435456, [double]: 2.68435e+08
	Rice on previous squares [int]: 268435455, [double]: 2.68435e+08
	Total rice grains [int]: 536870911, [double]: 5.36871e+08
Square: 30
	Grains on current square [in]: 536870912, [double]: 5.36871e+08
	Rice on previous squares [int]: 536870911, [double]: 5.36871e+08
	Total rice grains [int]: 1073741823, [double]: 1.07374e+09
Square: 31
	Grains on current square [in]: 1073741824, [double]: 1.07374e+09
	Rice on previous squares [int]: 1073741823, [double]: 1.07374e+09
	Total rice grains [int]: 2147483647, [double]: 2.14748e+09
Square: 32
	Grains on current square [in]: -2147483648, [double]: 2.14748e+09
	Rice on previous squares [int]: 2147483647, [double]: 2.14748e+09
	Total rice grains [int]: -1, [double]: 4.29497e+09
Square: 33
	Grains on current square [in]: 0, [double]: 4.29497e+09
	Rice on previous squares [int]: -1, [double]: 4.29497e+09
	Total rice grains [int]: -1, [double]: 8.58993e+09
Square: 34
	Grains on current square [in]: 0, [double]: 8.58993e+09
	Rice on previous squares [int]: -1, [double]: 8.58993e+09
	Total rice grains [int]: -1, [double]: 1.71799e+10
Square: 35
	Grains on current square [in]: 0, [double]: 1.71799e+10
	Rice on previous squares [int]: -1, [double]: 1.71799e+10
	Total rice grains [int]: -1, [double]: 3.43597e+10
Square: 36
	Grains on current square [in]: 0, [double]: 3.43597e+10
	Rice on previous squares [int]: -1, [double]: 3.43597e+10
	Total rice grains [int]: -1, [double]: 6.87195e+10
Square: 37
	Grains on current square [in]: 0, [double]: 6.87195e+10
	Rice on previous squares [int]: -1, [double]: 6.87195e+10
	Total rice grains [int]: -1, [double]: 1.37439e+11
Square: 38
	Grains on current square [in]: 0, [double]: 1.37439e+11
	Rice on previous squares [int]: -1, [double]: 1.37439e+11
	Total rice grains [int]: -1, [double]: 2.74878e+11
Square: 39
	Grains on current square [in]: 0, [double]: 2.74878e+11
	Rice on previous squares [int]: -1, [double]: 2.74878e+11
	Total rice grains [int]: -1, [double]: 5.49756e+11
Square: 40
	Grains on current square [in]: 0, [double]: 5.49756e+11
	Rice on previous squares [int]: -1, [double]: 5.49756e+11
	Total rice grains [int]: -1, [double]: 1.09951e+12
Square: 41
	Grains on current square [in]: 0, [double]: 1.09951e+12
	Rice on previous squares [int]: -1, [double]: 1.09951e+12
	Total rice grains [int]: -1, [double]: 2.19902e+12
Square: 42
	Grains on current square [in]: 0, [double]: 2.19902e+12
	Rice on previous squares [int]: -1, [double]: 2.19902e+12
	Total rice grains [int]: -1, [double]: 4.39805e+12
Square: 43
	Grains on current square [in]: 0, [double]: 4.39805e+12
	Rice on previous squares [int]: -1, [double]: 4.39805e+12
	Total rice grains [int]: -1, [double]: 8.79609e+12
Square: 44
	Grains on current square [in]: 0, [double]: 8.79609e+12
	Rice on previous squares [int]: -1, [double]: 8.79609e+12
	Total rice grains [int]: -1, [double]: 1.75922e+13
Square: 45
	Grains on current square [in]: 0, [double]: 1.75922e+13
	Rice on previous squares [int]: -1, [double]: 1.75922e+13
	Total rice grains [int]: -1, [double]: 3.51844e+13
Square: 46
	Grains on current square [in]: 0, [double]: 3.51844e+13
	Rice on previous squares [int]: -1, [double]: 3.51844e+13
	Total rice grains [int]: -1, [double]: 7.03687e+13
Square: 47
	Grains on current square [in]: 0, [double]: 7.03687e+13
	Rice on previous squares [int]: -1, [double]: 7.03687e+13
	Total rice grains [int]: -1, [double]: 1.40737e+14
Square: 48
	Grains on current square [in]: 0, [double]: 1.40737e+14
	Rice on previous squares [int]: -1, [double]: 1.40737e+14
	Total rice grains [int]: -1, [double]: 2.81475e+14
Square: 49
	Grains on current square [in]: 0, [double]: 2.81475e+14
	Rice on previous squares [int]: -1, [double]: 2.81475e+14
	Total rice grains [int]: -1, [double]: 5.6295e+14
Square: 50
	Grains on current square [in]: 0, [double]: 5.6295e+14
	Rice on previous squares [int]: -1, [double]: 5.6295e+14
	Total rice grains [int]: -1, [double]: 1.1259e+15
Square: 51
	Grains on current square [in]: 0, [double]: 1.1259e+15
	Rice on previous squares [int]: -1, [double]: 1.1259e+15
	Total rice grains [int]: -1, [double]: 2.2518e+15
Square: 52
	Grains on current square [in]: 0, [double]: 2.2518e+15
	Rice on previous squares [int]: -1, [double]: 2.2518e+15
	Total rice grains [int]: -1, [double]: 4.5036e+15
Square: 53
	Grains on current square [in]: 0, [double]: 4.5036e+15
	Rice on previous squares [int]: -1, [double]: 4.5036e+15
	Total rice grains [int]: -1, [double]: 9.0072e+15
Square: 54
	Grains on current square [in]: 0, [double]: 9.0072e+15
	Rice on previous squares [int]: -1, [double]: 9.0072e+15
	Total rice grains [int]: -1, [double]: 1.80144e+16
Square: 55
	Grains on current square [in]: 0, [double]: 1.80144e+16
	Rice on previous squares [int]: -1, [double]: 1.80144e+16
	Total rice grains [int]: -1, [double]: 3.60288e+16
Square: 56
	Grains on current square [in]: 0, [double]: 3.60288e+16
	Rice on previous squares [int]: -1, [double]: 3.60288e+16
	Total rice grains [int]: -1, [double]: 7.20576e+16
Square: 57
	Grains on current square [in]: 0, [double]: 7.20576e+16
	Rice on previous squares [int]: -1, [double]: 7.20576e+16
	Total rice grains [int]: -1, [double]: 1.44115e+17
Square: 58
	Grains on current square [in]: 0, [double]: 1.44115e+17
	Rice on previous squares [int]: -1, [double]: 1.44115e+17
	Total rice grains [int]: -1, [double]: 2.8823e+17
Square: 59
	Grains on current square [in]: 0, [double]: 2.8823e+17
	Rice on previous squares [int]: -1, [double]: 2.8823e+17
	Total rice grains [int]: -1, [double]: 5.76461e+17
Square: 60
	Grains on current square [in]: 0, [double]: 5.76461e+17
	Rice on previous squares [int]: -1, [double]: 5.76461e+17
	Total rice grains [int]: -1, [double]: 1.15292e+18
Square: 61
	Grains on current square [in]: 0, [double]: 1.15292e+18
	Rice on previous squares [int]: -1, [double]: 1.15292e+18
	Total rice grains [int]: -1, [double]: 2.30584e+18
Square: 62
	Grains on current square [in]: 0, [double]: 2.30584e+18
	Rice on previous squares [int]: -1, [double]: 2.30584e+18
	Total rice grains [int]: -1, [double]: 4.61169e+18
Square: 63
	Grains on current square [in]: 0, [double]: 4.61169e+18
	Rice on previous squares [int]: -1, [double]: 4.61169e+18
	Total rice grains [int]: -1, [double]: 9.22337e+18
Square: 64
	Grains on current square [in]: 0, [double]: 9.22337e+18
	Rice on previous squares [int]: -1, [double]: 9.22337e+18
	Total rice grains [int]: -1, [double]: 1.84467e+19
```

The maximum number of squares for an `int` is 31, 
which results exactly in the total positive value that a 32 bit integer can represent 2,147,483,647 = 2^31 - 1.
Afterwards the total value overflows and is negative from square 32 on.

```
Square: 31
	Grains on current square [in]: 1073741824, [double]: 1.07374e+09
	Rice on previous squares [int]: 1073741823, [double]: 1.07374e+09
	Total rice grains [int]: 2147483647, [double]: 2.14748e+09
Square: 32
	Grains on current square [in]: -2147483648, [double]: 2.14748e+09
	Rice on previous squares [int]: 2147483647, [double]: 2.14748e+09
	Total rice grains [int]: -1, [double]: 4.29497e+09
```


For `double` square 1024 resulted in an `inf` value of total grains:

```
Square: 1023
	Grains on current square [in]: 0, [double]: 4.49423e+307
	Rice on previous squares [int]: -1, [double]: 4.49423e+307
	Total rice grains [int]: -1, [double]: 8.98847e+307
Square: 1024
	Grains on current square [in]: 0, [double]: 8.98847e+307
	Rice on previous squares [int]: -1, [double]: 8.98847e+307
	Total rice grains [int]: -1, [double]: inf
```

Square 1023 yields the "maximum displayable" `double` value of 8.98847e+307. 
Afterwards the total number of rice grains is inf.
