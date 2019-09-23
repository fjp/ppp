#include "std_lib_facilities.h"

int main()
try {
    //<<your code here>>

    // Fragment 1 (Compile-time error)
    // Cout << "Success!\n";
    // error: use of undeclared identifier 'Cout'; did you mean 'cout'?
    cout << "Success!\n";
    
    keep_window_open();
    return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
