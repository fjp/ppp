// Author: Franz Pucher
// Date: 2019.09.20
// Try This 5.5.3 Error reporting

#include "std_lib_facilities.h"

// calculate area of a rectangle;
// return –1 to indicate a bad argument
int area(int length, int width)
{
    if (length<=0 || width <=0) return -1;
    return length*width;
}


int framed_area(int x, int y) // calculate area within frame
{
    // Let the error checking be done by area and the caller.
    constexpr int frame_width = 2;
    //if (x–frame_width <= 0 || y–frame_width <= 0)
    //    error("non-positive area() argument called by framed_area()");
    return area(x-frame_width, y-frame_width);
}


int f(int x, int y, int z)
{
    // The function area checks its arguments and returns -1
    // This requires the test weather the returned area is positive
    int area1 = area(x,y);
    if (area1<=0) error("non-positive area");

    // Calls to framed_area in this version do not directly check the arguments
    // Instead the arguments modified by constexpr int framed_width are passed to area which does the checking.

    // This call to framed_area with an rvalue of 1 does not make much sense because it will always return an error
    // as long as constexpr int framed_with = 2. Therefore this call is commented out
    //int area2 = framed_area(1,z);

    // This call to framed area will subtract the constexpr int framed_width from its input arguments and let
    // area do the checking.
    int area3 = framed_area(y,z);
    if (area3<=0) error("non-positive area"); // add this test


    double ratio = double(area1)/area3;
    // The missing tests are not relevant for framed_area because it does error checking on its own.
    // In case of an invalid input, the function terminates the program uisng error() from std_lib_facilicties header.
    // ...

    // Calling area with values that result in an area greater than the size of an integer (32 bit) will result
    // in an unrecognized overflow error. The following output returns 1.
    int area4 = area(2e16, 2e16);
    int area5 = area(2e32, 5);


    cout << "area1: " << area1 << '\n';
    //cout << "area2: " << area2 << '\n';
    cout << "area3: " << area3 << '\n';
    cout << "ratio: " << ratio << '\n';
    cout << "area4: " << area4 << '\n';
    cout << "area5: " << area5 << '\n';
}

int main()
{
    constexpr int frame_width = 2;
    
    cout << "Enter three integers separated by space (followed by 'Enter')\n";
    int x {0};
    int y {0};
    int z {0};
    while (cin >> x >> y >> z)
    {
        // narrowing errors, which are a result of entering doubles instead of ints, are not caught by this program.
        f(x, y, z);
        cout << '\n';
    }
    
    return 0;
}
