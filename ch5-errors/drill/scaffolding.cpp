#include "std_lib_facilities.h"

int main()
try {
    //<<your code here>>

    // Fragment 1 (compile-time error)
    // Cout << "Success!\n";
    // error: use of undeclared identifier 'Cout'; did you mean 'cout'?
    // Fixed
    cout << "1. Success!\n";


    // Fragment 2 (compile-time error)
    // cout << "Success!\n;
    // warning: missing terminating '"' character [-Winvalid-pp-token]
    // error: expected expression
    // Fixed
    cout << "2. Success!\n";


    // Fragment 3 (compile-time error)
    // cout << "Success" << !\n"
    // error: expected expression
    // warning: missing terminating '"' character [-Winvalid-pp-token]
    // Fixed
    cout << "3. Success" << "!\n";


    // Fragment 4 (compile-time error)
    // cout << success << '\n';
    // error: use of undeclared identifier 'success'
    // Fixed
    cout << "4. success" << '\n';

    // Fragment 5 (compile-time error)
    // string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    // error: no viable conversion from 'int' to 'std::__1::string'
    // Fixed
    int res = 7;
    vector<int> v5(10);
    v5[5] = res;
    cout << "5. Success!\n";


    // Fragment 6 (compile-time error and logic error)
    // vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
    // error: no viable conversion from 'int' to 'std::__1::string'
    // Fixed
    vector<int> v6(10);
    v6[5] = 7;
    if (v6[5] == 7)
        cout << "6. Success!\n";


    // Fragment 7 (compile-time error)
    // if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    // error: use of undeclared identifier 'cond';
    // Fixed
    bool cond {true};
    if (cond)
        cout << "7. Success!\n";
    else
        cout << "Fail!\n";


    // Fragment 8 (logical error)
    // bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
    // No direct error but to print "Success!" bool c needs to be true;
    // Fixed
    bool c = true;
    if (c)
        cout << "8. Success!\n";
    else
        cout << "Fail!\n";


    // Fragment 9 (compile-time error and logic error)
    // string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
    // compile-time error: use of undeclared identifier 'boo'; did you mean 'bool'?
    // logic error: "fool" is not less than "ape"
    // Fixed
    string s = "ape";
    bool c9 = "fool" < s;
    if (!c9)
        cout << "9. Success!\n";


    // Fragment 10 (logic error)
    // string s = "ape"; if (s=="fool") cout << "Success!\n";
    // Logic error: "fool" is not equal to "ape";
    // Fixed
    string s10 = "ape";
    if (s10 == "fool")
        cout << "10. Success!\n";


    // Fragment 11 (compile-time error and logic error)
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


    // Fragment 13 (2 logic errors)
    // vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
    // logic error: semicolon after the condition and control variable of the for statement
    // logic error: 0 is always smaller v.sizer() if vector v contains elements
    // Fixed
    vector<char> v(5);
    for (int i=0; i < v.size(); ++i)
        cout << "13. Success!\n";



    // Fragment 14 (logic error)
    // vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
    // logic error: semicolon after the condition and control variable of the for statement
    // Fixed
    vector<char> v14(5);
    for (int i=0; i<=v14.size(); ++i)
        cout << "14. Success!\n";


    // Fragment 15 (logic error)
    // string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
    // logic error: the magic number six does not completely print "Success!\n".
    // Fixed
    string s15 = "15. Success!\n";
    for (int i=0; i < s15.size(); ++i)
        cout << s15[i];



    // Fragment 16 (compile-time error)
    // if (true) then cout << "Success!\n"; else cout << "Fail!\n";
    // error: unknown type name 'then'
    // Fixed
    if (true)
        cout << "16. Success!\n";
    else
        cout << "Fail!\n";



    // Fragment 17 (narrowing error)
    // int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
    // narrowing error: conversion from an int that is too large to fit into a char leads
    // to false in the condition of the if-statement
    // Fixed
    int x17 = 2000;
    int c17 = x17;
    if (c17 == 2000)
        cout << "17. Success!\n";


    // Fragment 18 (logic error)
    // string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
    // logic error: string "Success!\n" has size 9 instead of the magic number 10
    // Fixed
    string s18 = "18. Success!\n";
    for (int i=0; i < s18.size(); ++i)
        cout << s18[i];



    // Fragment 19 (compile-time error and logic error)
    // vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
    // error: no viable constructor or deduction guide for deduction of template arguments of 'Vector'
    // logic error: semicolon after the condition and control variable of the for statement
    // Fixed
    vector<int> v19(5);
    for (int i=0; i<=v19.size(); ++i)
        cout << "19. Success!\n";


    // Fragment 20 (logic error)
    // vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
    // logic error: endless while loop because instead of j being incremented inside the block of the while loop,
    // i should be incremented.
    // Fixed
    int i=0;
    int j = 9;
    while (i<10)
        ++i;
    if (j<i)
        cout << "20. Success!\n";


    // Fragment 21 (run-time error, narrowing error and logic error)
    // int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
    // run-time error: the line double d = 5/(x-2) should result in a run-time error because we divide by zero.
    // However, on mac osx the value inf is assigned to d.
    // narrowing error: to get a double from this statement, the constants need to be floating-point precision numbers:
    // double d = 5.0/(x–2)
    // To get Success! printed the condition of the `if`-statement needs to be true which can be achieved the following way.
    // Although this is a quadratic equation it is not possible to enter the value for x percise enough so that the
    // equality check evaulates to true.
    // Fixed
    int x21 = 2;
    double d = 5.0/x21 + 2;
    //cout << "d: " << d << '\n';
    //cout << "2*x+0.5: " << 2*x21+0.5 << '\n';
    if (d==2*x21+0.5)
        cout << "21. Success!\n";
    
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
