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
    if (area2<=0) error("non-positive area"); // add this test
    int area3 = framed_area(y,z);
    if (area3<=0) error("non-positive area"); // add this test
    double ratio = double(area1)/area3;
    // The missing tests are not relevant for framed_area because it does error checking on its own.
    // In case of an invalid input, the function terminates the program uisng error() from std_lib_facilicties header.
    // ...
}

int main()
{
    cout << "Enter three integers separated by space (followed by 'Enter')\n";
    int x, y, z;
    while (cin >> x >> y >> z)
    {
        f(x, y, z);
    }
    
    return 0;
}
