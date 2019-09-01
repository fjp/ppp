### Currency Converter `switch`

Rewrite your currency converter program from the previous Try this to use a switch-statement. 
Add conversions from yuan and kroner. 
Which version of the program is easier to write, understand, and modify? Why?


.. literalinclude:: ../ch4-computation/trythis/02-currency_converter/main.cpp
   :language: cpp
   :caption: currencyconverterswitch.cpp
   :linenos:


Output of the currency converter program using switch statement:

```
Please enter an amount followed by a currency (y, e or p):
1 u
1yuan == 0.139665dollar
```

This version of the currency converter program is easier to write and understand than the version using
if statements. However, using switch-statement it is not possible to compare strings.
For this example is was necessary to use the character 'u' for yuan because 'y' was already taken for yen.

