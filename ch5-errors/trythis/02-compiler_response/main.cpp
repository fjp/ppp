#include "std_lib_facilities.h"

int area(int length, int width); // calculate area of a rectangle

// Type errors
int main()
{
    int x0 = arena(7); // error: undeclared function
    int x1 = area(7); // error: wrong number of arguments
    int x2 = area("seven",2); // error: 1st argument has a wrong type
    
    int x3 = area(1,2,2); // error: wrong number of arguments
    int x3 = area(2e33,2); // error: first argument is too large for an int
    
    return 0;
}
