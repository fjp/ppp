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

Again a compile-time error with the output:

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:35:13: error: use of undeclared identifier 'success'
    cout << success << '\n';
            ^
1 error generated.
make[3]: *** [CMakeFiles/Ch5Drill.dir/scaffolding.cpp.o] Error 1
make[2]: *** [CMakeFiles/Ch5Drill.dir/all] Error 2
make[1]: *** [CMakeFiles/Ch5Drill.dir/rule] Error 2
```

Wrapping `success` into quotation marks (string) solves the issue.

5. `string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";`

This fragment results in a compile-time error, in this case a type error because the `string` `res` cannot be assigned
to the sixth `vector` element of type `int`.

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:40:12: error: no viable conversion from 'int' to 'std::__1::string' (aka 'basic_string<char, char_traits<char>, allocator<char> >')
    string res = 7;
           ^     ~
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/string:793:5: note: candidate constructor not viable: no known conversion from 'int' to 'const std::__1::basic_string<char> &' for 1st argument
    basic_string(const basic_string& __str);
    ^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/string:798:5: note: candidate constructor not viable: no known conversion from 'int' to 'std::__1::basic_string<char> &&' for 1st argument
    basic_string(basic_string&& __str)
    ^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/string:811:5: note: candidate constructor template not viable: no known conversion from 'int' to 'const char *' for 1st argument
    basic_string(const _CharT* __s) {
    ^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/string:861:5: note: candidate constructor not viable: no known conversion from 'int' to 'initializer_list<char>' for 1st argument
    basic_string(initializer_list<_CharT> __il);
    ^
1 error generated.
make[3]: *** [CMakeFiles/Ch5Drill.dir/scaffolding.cpp.o] Error 1
make[2]: *** [CMakeFiles/Ch5Drill.dir/all] Error 2
make[1]: *** [CMakeFiles/Ch5Drill.dir/rule] Error 2
make: *** [Ch5Drill] Error 2
```

To fix this fragment a type change of the first assignment is required: `string res = 7` to `int res = 7`.

6. `vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";`

Fragment 6 results in another compile-time error and has also a logic error which can be fixed after correcting the 
compile-time error. The element at index `5` is equal to `7`.

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:51:5: error: type 'Vector<int>' does not provide a call operator
    v6(5) = 7;
    ^~
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:52:9: error: type 'Vector<int>' does not provide a call operator
    if (v6(5)!=7)
        ^~
2 errors generated.
make[3]: *** [CMakeFiles/Ch5Drill.dir/scaffolding.cpp.o] Error 1
make[2]: *** [CMakeFiles/Ch5Drill.dir/all] Error 2
make[1]: *** [CMakeFiles/Ch5Drill.dir/rule] Error 2
make: *** [Ch5Drill] Error 2
```

The index operator `[]` is required to fix these two errors.

7. `if (cond) cout << "Success!\n"; else cout << "Fail!\n";`

Compile-time error with the result:

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:60:9: error: use of undeclared identifier 'cond'; did you mean 'cend'?
    if (cond)
        ^~~~
        cend
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/iterator:1731:6: note: 'cend' declared here
auto cend(const _Cp& __c) -> decltype(_VSTD::end(__c))
     ^
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:60:9: error: reference to overloaded function could not be resolved; did you mean to call it?
    if (cond)
        ^~~~
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/iterator:1731:6: note: possible target for call
auto cend(const _Cp& __c) -> decltype(_VSTD::end(__c))
     ^
2 errors generated.
make[3]: *** [CMakeFiles/Ch5Drill.dir/scaffolding.cpp.o] Error 1
make[2]: *** [CMakeFiles/Ch5Drill.dir/all] Error 2
make[1]: *** [CMakeFiles/Ch5Drill.dir/rule] Error 2
make: *** [Ch5Drill] Error 2
```

8. `bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";`

Running this code fragment results in the output:

```
Fail!
Please enter a character to exit
e

Process finished with exit code 0
```

To print out `"Success!"` the `bool` `c` needs to be `true`.

9. `string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";`

The compile-time error output here is:

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:83:5: error: use of undeclared identifier 'boo'; did you mean 'bool'?
    boo c9 = "fool" < s;
    ^~~
    bool
1 error generated.
make[3]: *** [CMakeFiles/Ch5Drill.dir/scaffolding.cpp.o] Error 1
make[2]: *** [CMakeFiles/Ch5Drill.dir/all] Error 2
make[1]: *** [CMakeFiles/Ch5Drill.dir/rule] Error 2
make: *** [Ch5Drill] Error 2
```

As suggested by the compiler, changing `boo` to `bool` fixes the error.

10. `string s = "ape"; if (s=="fool") cout << "Success!\n";`

This fragment has a logic error. To print `"Success!\n"` the equal operator `==` needs to be changed to not equal `!=`.

11. `string s = "ape"; if (s=="fool") cout < "Success!\n";`

This fragment has a compile-time error and a logic error:

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:104:14: warning: result of comparison against a string literal is unspecified (use strncmp instead) [-Wstring-compare]
        cout < "Success!\n";
             ^ ~~~~~~~~~~~~
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:104:14: error: invalid operands to binary expression ('std::__1::ostream' (aka 'basic_ostream<char>') and 'const char [10]')
        cout < "Success!\n";
        ~~~~ ^ ~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/system_error:306:1: note: candidate function not viable: no known conversion from 'std::__1::ostream' (aka 'basic_ostream<char>') to 'const std::__1::error_condition' for 1st argument
operator<(const error_condition& __x, const error_condition& __y) _NOEXCEPT
^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/system_error:383:1: note: candidate function not viable: no known conversion from 'std::__1::ostream' (aka 'basic_ostream<char>') to 'const std::__1::error_code' for 1st argument
operator<(const error_code& __x, const error_code& __y) _NOEXCEPT
^
...
```

To fix the logic error, we need to change the equal operator `==` to not equal `!=` or compare two `string`s that are equal.

12. `string s = "ape"; if (s+"fool") cout < "Success!\n";`

This fragment results in two compile-time errors:

```
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:114:9: error: no viable conversion from 'std::__1::basic_string<char>' to 'bool'
    if (s12+"fool")
        ^~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/string:869:5: note: candidate function
    operator __self_view() const _NOEXCEPT { return __self_view(data(), size()); }
    ^
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:115:14: warning: result of comparison against a string literal is unspecified (use strncmp instead) [-Wstring-compare]
        cout < "12. Success!\n";
             ^ ~~~~~~~~~~~~~~~~
/Users/fjp/git/ppp/ch5-errors/drill/scaffolding.cpp:115:14: error: invalid operands to binary expression ('std::__1::ostream' (aka 'basic_ostream<char>') and 'const char [14]')
        cout < "12. Success!\n";
        ~~~~ ^ ~~~~~~~~~~~~~~~~
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/system_error:306:1: note: candidate function not viable: no known conversion from 'std::__1::ostream' (aka 'basic_ostream<char>') to 'const std::__1::error_condition' for 1st argument
operator<(const error_condition& __x, const error_condition& __y) _NOEXCEPT
^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/system_error:383:1: note: candidate function not viable: no known conversion from 'std::__1::ostream' (aka 'basic_ostream<char>') to 'const std::__1::error_code' for 1st argument
operator<(const error_code& __x, const error_code& __y) _NOEXCEPT
^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/utility:594:1: note: candidate template ignored: could not match 'pair' against 'basic_ostream'
operator< (const pair<_T1,_T2>& __x, const pair<_T1,_T2>& __y)
^
...
```

To fix the first compile-time error we have to replace `+` with `!=` because comparison of a string literal in a condition of an `if`-statement is unspecified. The second error is that we use `<` (the less-than operator) rather than 
the `<<` (the output operator).  

13. `vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";`

Output of this fragment is `Success!` but there are two logic errors:
- The semicolon after the condition and control variable `i` of the for statement ends this loop statement and executes the following statement `cout << "Success!\n";`. To fix this the semecolon needs to be removed.
- The logical comparison of `0<v.size()` is always true if `vector` `v` contains elements. Here the solution is to use the iterator variable `i` instead of `0`.

After fixing these logic errors, the output is five times `Success!`:

```
Success!
Success!
Success!
Success!
Success!
```

14. `vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";`

Similar to the previous fragment 13 with one logic error. The semicolon after the condition and control variable `i` of the `for`-statement needs to be removed in order to get the following output:

```
Success!
Success!
Success!
Success!
Success!
Success!
```

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

