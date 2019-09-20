### Uncaught Exception

To see what an uncaught exception error looks like, run a small program that uses error() without catching any exceptions.


.. literalinclude:: ../ch5-errors/trythis/04-5.6.3-bad_input/main.cpp
   :language: cpp
   :caption: uncaughterror.cpp
   :linenos:

Running the program shows what an uncaught error looks like:

``` 
libc++abi.dylib: terminating with uncaught exception of type std::runtime_error: Force uncaught error

Process finished with exit code 6
```
