// Author: Franz Pucher
// Date: 2019.09.20
// Try This 5.6.3 Bad input - Uncaught error

#include "std_lib_facilities.h"


int main()
{
    // The function error throws a runtime_error
    error("Force uncaught error");
    
    return 0;
}
