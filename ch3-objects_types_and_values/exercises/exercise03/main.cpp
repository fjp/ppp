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





    return 0;
}
