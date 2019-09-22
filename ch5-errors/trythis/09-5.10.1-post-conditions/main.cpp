// Try This 5.10.1 Post-conditions
// Author: Franz Pucher
// Date: 2019.09.22

#include "std_lib_facilities.h"


int area(int length, int width)
// calculate area of a rectangle;
// pre-conditions: length and width are positive
// post-condition: returns a positive value that is the area
{
    if (length<=0 || width <=0) error("area() pre-condition");
    int a = length*width;
    if (a<=0) error("area() post-condition");
    return a;
}

int main()
{

    
    return 0;
}
