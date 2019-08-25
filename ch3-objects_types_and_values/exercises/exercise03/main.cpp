#include "std_lib_facilities.h"


int main()
{
    //int double = 0;
    // main.cpp:6:9: error: cannot combine with previous 'int' declaration specifier
    // main.cpp:6:16: error: expected unqualified-id

    //double int = 0;
    // main.cpp:10:12: error: cannot combine with previous 'double' declaration specifier
    // main.cpp:10:16: error: expected unqualified-id

    //double string = 0; // ok but dangerous


    //double std::string = 0;
    // main.cpp:17:17: error: definition or redeclaration of 'string' not allowed inside a function


    //int _is_this_int_ok = 1; // ok but underscore is usually reserved implementation and system entities

    //double 2x = 4;  // a name must start with a letter
    // main.cpp:23:12: error: expected unqualified-id

    //int time$to$market = 5; // gives no error although $ is not a letter, digit or underscore.
    // no error with clan but could give errors on other compilers

    //int start menu = 2; // space is not a letter, digit, or underscore
    // main.cpp:29:14: error: expected ';' at end of declaration

    //char correct? = 'c'; // ? is not a letter, digit, or underscore
    // main.cpp:32:17: error: expected ';' at end of declaration

    // The following are all legal names, which start
    // with a letter and contains only letters, digits, and underscores.
    double x;

    int number_of_elements;

    double Fourier_transform;

    double z2;

    char Polygon;

    return 0;
}
