#include "std_lib_facilities.h"

// Simple calculator
int main()
{
    cout << "Enter three arguments: two double operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').\n";
    
    double op1, op2;
    char operation {'\0'};
    cin >> val1 >> val2 >> op;
    

    cin >> op1 >> op2 >> operation;
    
    double result = 0;
    switch (operation)
    {
        case '+':
            result = op1+op2;
            break;
        case '-':
            result = op1-op2;
            break;
        case '*':
            result = op1*op2;
            break;
        case '/':
            result = op1/op2;
            break;
        default:
            result = op1+op2;
            break;
    }
    
    cout << "The result of " << op1 << " " << operation << " " << op2 << " is " << result << "\n";
    
    return 0;
}
