#include "std_lib_facilities.h"


// calculate area of a rectangle;
// return –1 to indicate a bad argument
int area(int length, int width)
{
    if (length<=0 || width <=0) return –1;
    return length*width;
}


int framed_area(int x, int y) // calculate area within frame
{
    constexpr int frame_width = 2;
    if (x–frame_width<=0 || y–frame_width<=0)
    error("non-positive area() argument called by framed_area()");
    return area(x–frame_width,y–frame_width);
}


int f(int x, int y, int z)
{
    int area1 = area(x,y);
    if (area1<=0) error("non-positive area");
    int area2 = framed_area(1,z);
    int area3 = framed_area(y,z);
    double ratio = double(area1)/area3;
    // ...
}
