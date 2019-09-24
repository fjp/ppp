Below are 25 code fragments. Each is meant to be inserted into this
“scaffolding”:


```cpp
#include "std_lib_facilities.h"

int main()
try {
    <<your code here>>
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
```
   
Each has zero or more errors. Your task is to find and remove all errors in each
program. When you have removed those bugs, the resulting program will
compile, run, and write "Success!" Even if you think you have spotted an error,
you still need to enter the (original, unimproved) program fragment and test it;
you may have guessed wrong about what the error is, or there may be more
errors in a fragment than you spotted. Also, one purpose of this drill is to give
you a feel for how your compiler reacts to different kinds of errors. Do not enter
the scaffolding 25 times — that's a job for cut and paste or some similar
"mechanical" technique. Do not fix problems by simply deleting a statement;
repair them by changing, adding, or deleting a few characters.

1. `Cout << "Success!\n";`

After inserting this fragment into the scaffolding and compiling the result is a compile-time error with the following output: 

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:10:5: error: use of undeclared identifier 'Cout'; did you mean 'cout'?
    Cout << "Success!\n";
    ^~~~
    cout
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/iostream:54:33: note: 'cout' declared here
extern _LIBCPP_FUNC_VIS ostream cout;
                                ^
1 error generated.
make[3]: *** [CMakeFiles/Ch5Drill.dir/scaffolding.cpp.o] Error 1
make[2]: *** [CMakeFiles/Ch5Drill.dir/all] Error 2
make[1]: *** [CMakeFiles/Ch5Drill.dir/rule] Error 2
make: *** [Ch5Drill] Error 2
```
After fixing the fragment to `cout << "Success!\n";` the output is:

```
Success!
Please enter a character to exit
e

Process finished with exit code 0
```

2. `cout << "Success!\n;`

The second fragment results also in a compile-time error:

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:18:13: warning: missing terminating '"' character [-Winvalid-pp-token]
    cout << "Success!\n;
            ^
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:18:13: error: expected expression
1 warning and 1 error generated.
make[3]: *** [CMakeFiles/Ch5Drill.dir/scaffolding.cpp.o] Error 1
make[2]: *** [CMakeFiles/Ch5Drill.dir/all] Error 2
make[1]: *** [CMakeFiles/Ch5Drill.dir/rule] Error 2
make: *** [Ch5Drill] Error 2
```

To fix this we add a `"` after `\n`.

3. `cout << "Success" << !\n"`

Here the compile-time error is:

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:27:27: error: expected expression
    cout << "Success" << !\n"
                          ^
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:27:29: warning: missing terminating '"' character [-Winvalid-pp-token]
    cout << "Success" << !\n"
                            ^
1 warning and 1 error generated.
make[3]: *** [CMakeFiles/Ch5Drill.dir/scaffolding.cpp.o] Error 1
make[2]: *** [CMakeFiles/Ch5Drill.dir/all] Error 2
make[1]: *** [CMakeFiles/Ch5Drill.dir/rule] Error 2
make: *** [Ch5Drill] Error 2
```

In this case a `"` and terminating `;` is missing.

4. `cout << success << '\n';`
5. `string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";`
6. `vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";`
7. `if (cond) cout << "Success!\n"; else cout << "Fail!\n";`
8. `bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";`
9. `string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";`
10. `string s = "ape"; if (s=="fool") cout << "Success!\n";`
11. `string s = "ape"; if (s=="fool") cout < "Success!\n";`
12. `string s = "ape"; if (s+"fool") cout < "Success!\n";`
13. `vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";`
14. `vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";`
15. `string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];`
16. `if (true) then cout << "Success!\n"; else cout << "Fail!\n";`
17. `int x = 2000; char c = x; if (c==2000) cout << "Success!\n";`
18. `string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];`
19. `vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";`
20. `int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";`
21. `int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";`
22. `string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];`
23. `int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";`
24. `int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";`
25. `cin << "Success!\n";`

