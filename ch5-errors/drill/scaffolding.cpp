#include "std_lib_facilities.h"

int main()
try {
    //<<your code here>>

    // Fragment 1 (Compile-time error)
    // Cout << "Success!\n";
    // error: use of undeclared identifier 'Cout'; did you mean 'cout'?
    // Fixed
    cout << "1. Success!\n";


    // Fragment 2 (Compile-time error)
    // cout << "Success!\n;
    // warning: missing terminating '"' character [-Winvalid-pp-token]
    // error: expected expression
    // Fixed
    cout << "2. Success!\n";


    // Fragment 3 (Compile-time error)
    // cout << "Success" << !\n"
    // error: expected expression
    // warning: missing terminating '"' character [-Winvalid-pp-token]
    // Fixed
    cout << "3. Success" << "!\n";


    // Fragment 4 (Compile-time error)
    // cout << success << '\n';
    // error: use of undeclared identifier 'success'
    // Fixed
    cout << "4. success" << '\n';

    // Fragment 5 (Compile-time error)
    // string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    // error: no viable conversion from 'int' to 'std::__1::string'
    // Fixed
    int res = 7;
    vector<int> v5(10);
    v5[5] = res;
    cout << "5. Success!\n";


    // Fragment 6 (Compile-time error and logic error)
    // vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
    // error: no viable conversion from 'int' to 'std::__1::string'
    // Fixed
    vector<int> v6(10);
    v6[5] = 7;
    if (v6[5] == 7)
        cout << "6. Success!\n";


    // Fragment 7 (Compile-time error)
    // if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    // error: use of undeclared identifier 'cond';
    // Fixed
    bool cond {true};
    if (cond)
        cout << "7. Success!\n";
    else
        cout << "Fail!\n";


    // Fragment 8 (Logical error)
    // bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
    // No direct error but to print "Success!" bool c needs to be true;
    // Fixed
    bool c = true;
    if (c)
        cout << "8. Success!\n";
    else
        cout << "Fail!\n";


    // Fragment 9 (Compile-time error and logic error)
    // string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
    // compile-time error: use of undeclared identifier 'boo'; did you mean 'bool'?
    // logic error: "fool" is not less than "ape"
    // Fixed
    string s = "ape";
    bool c9 = "fool" < s;
    if (!c9)
        cout << "9. Success!\n";


    // Fragment 10 (Logic error)
    // string s = "ape"; if (s=="fool") cout << "Success!\n";
    // Logic error: "fool" is not equal to "ape";
    // Fixed
    string s10 = "ape";
    if (s10 == "fool")
        cout << "10. Success!\n";


    // Fragment 11 (Compile-time error and logic error)
    // string s = "ape"; if (s=="fool") cout < "Success!\n";
    // error: invalid operands to binary expression ('std::__1::ostream' (aka 'basic_ostream<char>') and 'const char [10]')
    // Logic error: "fool" is not equal to "ape";
    // Fixed
    string s11 = "ape";
    if (s11 != "fool")
        cout << "11. Success!\n";


    // Fragment 12 (2 compile-time errors)
    // string s = "ape"; if (s+"fool") cout < "Success!\n";
    // error: no viable conversion from 'std::__1::basic_string<char>' to 'bool'
    // error: invalid operands to binary expression ('std::__1::ostream' (aka 'basic_ostream<char>') and 'const char [14]')
    // Fixed
    string s12 = "ape";
    if (s12 != "fool")
        cout << "12. Success!\n";


    
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
