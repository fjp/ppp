#include "std_lib_facilities.h"


vector<string> stringDigits {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string inputDigits {"Operands must be digits from 0 to 9 (either as string or integer)\n"};

int convertStringToInt(string digit)
{
    for (int i = 0; i < stringDigits.size(); ++i)
    {
        if (stringDigits[i] == digit)
            return i;
    }
    cout << "Error: digit not in vector\n";
    cout << inputDigits;
    return -1;
}

vector<char> validOperators {'+','-','*','/'};
string inputOperator {"Enter a valid operator ('+','-','*','/')\n"};


bool checkValidOperator(char oper)
{
    for (char o : validOperators)
    {
        if (oper == o)
            return true;
    }
    cout << inputOperator;
    return false;
}


// Simple calculator
int main()
{
    string input {"Enter three arguments: two integer operands and a character ('+','-','*','/') representing an operation (followed by 'Enter').\n"};
    
    cout << input << inputDigits;
    
    int op, op1, op2;
    vector<int> integerOperands(2);
    string opstring;
    char operation {'\0'};

    bool validOperator {false};
    while (true)
    {
        int i = 0;
        while (i < integerOperands.size())
        {
            if (cin >> op)
            {
                integerOperands[i] = op;
                ++i;
            }
            else
            {
                cin.clear(); // To use cin again after a failed read, you need to use a function call "cin.clear();" to "clear" it.
                cin >> opstring;
                if (opstring == "|")
                    return 0;
                else
                {
                    int result = convertStringToInt(opstring);
                    if (-1 != result)
                    {
                        integerOperands[i] = result;
                        ++i;
                    }
                }
            }
        }

        while (!validOperator)
        {

            if (cin >> operation)
                validOperator = checkValidOperator(operation);
            else
                cout << inputOperator;
        }
        validOperator = false;

        op1 = integerOperands[0];
        op2 = integerOperands[1];

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
        cin.clear();
    }

    return 0;
}
