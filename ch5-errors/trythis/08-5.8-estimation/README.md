### Estimation - Driving Times

Estimate those driving times. Also, estimate the corresponding flight times (using ordinary commercial air travel). 
Then, try to verify your estimates by using appropriate sources, such as maps and timetables. We'd use online sources.

In this "try this" we search for the driving and flight times from New York City to Denver and from London to Nice.
The estimated driving times can be calculated from air (flying) distance between the cities and an average speed that underestimates the true average speed. 
Both guesses (distance and average speed) should never overestimate the true values to get a useful estimation 
(see also [admissible heuristic](https://en.wikipedia.org/wiki/Admissible_heuristic) in path finding algorithms such as [A*](https://en.wikipedia.org/wiki/A*_search_algorithm)).


Using an online air (flying) distance calculator such as [distancecalculator](https://www.distancecalculator.net/), 
we find the following distances. Note that this calculator uses the [Haversine formula](https://en.wikipedia.org/wiki/Haversine_formula) which determines the [great-circle distance](https://en.wikipedia.org/wiki/Great-circle_distance) between two points on a sphere given their longitudes and latitudes.

| City A   | City B | Air distance (km) | Air distance (mi) |
|:--------:|:------:|:-----------------:|:-----------------:|
| New York | Denver | 2618.51           | 1627.07           |
| London   | Nice   | 1027.82           | 638.66            |

We underestimate the driving speed with an average of 200km/h (124m/hr) and the flying speed ([cruise](https://en.wikipedia.org/wiki/Cruise_(aeronautics))) 1000km/h (621m/hr) which gives the following driving and flying times:

| City A   | City B | Driving time      | Flying time       |
|:--------:|:------:|:-----------------:|:-----------------:|
| New York | Denver | 13h 5minutes    | 2h 37minutes   |
| London   | Nice   | 5h 8minutes     | 1h 2minutes    |

To verify these driving time results we can use Google Maps:

| City A   | City B | Exact driving distance (km) | Driving time        | Average speed(km/h) |
|:--------:|:------:|:---------------------------:|:-------------------:|:-------------------:|
| New York | Denver | 2883.0                      | 26h                 | 111                 |
| London   | Nice   | 1396                        | 13h 1minute        | 107                 |

According to [flighttime-calculator](https://flighttime-calculator.com/) these are the true flight times between the cities:

| City A   | City B | Exact flying distance (km) | Flight time          | Average speed(km/h) |
|:--------:|:------:|:---------------------------:|:-------------------:|:-------------------:|
| New York | Denver | 2629.72                     | 3h 31minutes        | 747.78              |
| London   | Nice   | 1030.88                     | 1h 37minutes        | 637.65              |
