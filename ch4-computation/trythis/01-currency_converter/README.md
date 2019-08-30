### Currency Converter

.. literalinclude:: ../ch4-computation/trythis/01-currency_converter/main.cpp
   :language: cpp
   :caption: cminchconverter.cpp
   :linenos:
   
Output of the cm to inch converter:

```
Please enter a length followed by a unit (c or i):
1 c
1cm == 0.393701in
```

And the output when converting inch to cm:

```
Please enter a length followed by a unit (c or i):
1 i
1in == 2.54cm
```

Use the example above as a model for a program that converts yen, euros, and pounds into dollars. If you like realism, you can find conversion rates on the web.



.. literalinclude:: ../ch4-computation/trythis/01-currency_converter/main_solution.cpp
   :language: cpp
   :caption: currencyconverter.cpp
   :linenos:
   

Here are some example inputs and their resulting output:

```
Please enter an amount followed by a currency (y, e or p):
1 y
1yen == 0.00940203dollar
```

```
Please enter an amount followed by a currency (y, e or p):
1 e
1euro == 1.0989dollar
```

```
Please enter an amount followed by a currency (y, e or p):
1 p
1pound == 1.21951dollar
```
