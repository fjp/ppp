// Try This 5.10.1 Post-conditions
// Author: Franz Pucher
// Date: 2019.09.22
//
// Comments:
//  In case of an overflow the pre-conditions are satisfied
//  while the post-condition can fail.
//  Here are some examples that produce an overflow for a 4 byte integer:
//   area(60000, 60000);
//   area(65536, 65535); // -65536
//   area(65536, 65536); // 0

#include "std_lib_facilities.h"


int area(int length, int width)
// calculate area of a rectangle;
// pre-conditions: length and width are positive
// post-condition: returns a positive value that is the area
{
    if (length<=0 || width <=0) error("area() pre-condition");
    int a = length*width;
    cout << "area() a: " << a << '\n';
    if (a<=0) error("area() post-condition"); // throw runtime_error(string s)
    return a;
}


int main()
try
{
    int length = 0;
    int width = 0;

    cout << "Enter integer length and width to get the area of the rectangle:\n"
         << "(Negative numbers will violate the pre-conditions while large numbers\n"
         << "will produce an overflow and violate the post-condition of area())\n";

    while (cin >> length >> width)
        cout << "Area is " << area(length, width) << '\n';

    return 0;
}
catch (runtime_error& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Error: unknown exception\n";
    return 2;
}
