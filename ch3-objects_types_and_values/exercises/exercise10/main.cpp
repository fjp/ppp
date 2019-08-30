#include "std_lib_facilities.h"

int main()
{
    cout << "Enter an operation ('+','-','*','/','plus','minus','mul','div') followed by two operands (followed by 'Enter')\n";
    string operation;
    double op1, op2;
    cin >> operation >> op1 >> op2;
    
    double result = 0;
    if (operation == "+" || operation == "plus")
    {
        result = op1 + op2;
    }
    else if (operation == "-" || operation == "minus")
    {
        result = op1 - op2;
    }
    else if (operation == "*" || operation == "mul")
    {
        result = op1 * op2;
    }
    else if (operation == "/" || operation == "div")
    {
        result = op1 / op2;
    }
    
    cout << "The result of " << op1 << " " << operation << " " << op2 << " is " << result << "\n";
        
    return 0;
}
