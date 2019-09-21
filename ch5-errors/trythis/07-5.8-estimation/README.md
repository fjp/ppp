### Estimation - Hexagon Area

Our hexagon was regular with 2cm sides. 
Did we get that answer right? Just do the "back of the envelope" calculation. 
Take a piece a paper and scribble on it. Don't feel that's beneath you. 
Many famous scientists have been greatly admired for their ability to come
up with an approximate answer using a pencil and the back of an envelope (or a napkin). 
This is an ability — a simple habit, really — that can save us a lot of time and confusion.


In a [regular hexagon](https://en.wikipedia.org/wiki/Hexagon) the lengths of each side are the same as the radius of a  circumscribed circle that goes through each of the six corners. Therefore we can calculate the area of a circle to approximate the area of the hexagon. 
Assuming we know that the area of a circle is r^2*pi (`pow(r,2)*PI`) the area with radius r = 2cm is 12.566cm^3.
This result is reasonable, because we know that the area of the circumscribed circle is larger than that of the hexagon. 
In the book the value of the program that calculates the area of a hexagon is 10.3923cm^3, which is smaller than 12.566cm^3.
A hexagon can be partitioned into six [equilateral triangles](https://en.wikipedia.org/wiki/Equilateral_triangle) where the area can be found using the [Pythagorean theorem](https://en.wikipedia.org/wiki/Pythagorean_theorem) to be: `sqrt(3)/4*r^2`.
Multiplying this formula with 6 results in the exact area of the hexagon: `3*sqrt(3)/2*r^2`. 
However, using the area of circle is a faster approximation than the exact formula.
