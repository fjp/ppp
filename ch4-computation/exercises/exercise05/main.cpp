#include "std_lib_facilities.h"

// Simple calculator
int main()
{
    string input {"Enter three arguments: two double operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').\n"};
    
    cout << input;
    
    double op1, op2;
    char operation {'\0'};
   
    while (cin >> op1 >> op2 >> operation)
    {
        switch (operation)
        {
            case '+':
                cout << "The sum of " << op1 << " and " << op2 << " is " << op1+op2 << '\n';
                break;
            case '-':
                cout << "The difference of " << op1 << " and " << op2 << " is " << op1-op2 << '\n';
                break;
            case '*':
                cout << "The product of " << op1 << " and " << op2 << " is " << op1*op2 << '\n';
                break;
            case '/':
                if (op2 == 0)
                        cout << "ERROR: Division by zero\n";
                    else
                        cout << "The division of " << op1 << " and " << op2 << " is " << op1/op2 << '\n';
                break;
            default:
                cout << "The operator " << operation << " is not supported!\n";
                break;
        }
        
        cout << input;
    }
    
    
    return 0;
}
