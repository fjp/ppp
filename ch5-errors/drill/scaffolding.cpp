#include "std_lib_facilities.h"

int main()
try {
    //<<your code here>>

    // Fragment 1 (Compile-time error)
    // Cout << "Success!\n";
    // error: use of undeclared identifier 'Cout'; did you mean 'cout'?
    // Fixed
    cout << "Success!\n";


    // Fragment 2 (Compile-time error)
    // cout << "Success!\n;
    // warning: missing terminating '"' character [-Winvalid-pp-token]
    // error: expected expression
    // Fixed
    cout << "Success!\n";


    // Fragment 3 (Compile-time error)
    // cout << "Success" << !\n"
    // error: expected expression
    // warning: missing terminating '"' character [-Winvalid-pp-token]
    // Fixed
    cout << "Success" << "!\n";


    // Fragment 4 (Compile-time error)
    // cout << success << '\n';
    // error: use of undeclared identifier 'success'
    // Fixed
    cout << "success" << '\n';

    // Fragment 5 (Compile-time error)
    // string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    // error: no viable conversion from 'int' to 'std::__1::string'
    // Fixed
    int res = 7;
    vector<int> v5(10);
    v5[5] = res;
    cout << "Success!\n";


    // Fragment 6 (Compile-time error)
    // vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
    // error: no viable conversion from 'int' to 'std::__1::string'
    // Fixed
    vector<int> v6(10);
    v6[5] = 7;
    if (v6[5]!=7)
        cout << "Success!\n";


    // Fragment 7 (Compile-time error)
    // if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    // error: use of undeclared identifier 'cond';
    // Fixed
    bool cond {true};
    if (cond)
        cout << "Success!\n";
    else
        cout << "Fail!\n";
    
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
