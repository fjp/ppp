#include "std_lib_facilities.h"

int main() {

    cout << "Enter the coefficients 'a', 'b' and 'c' as double to get the results of a quadratic equation (Followed by 'Enter'):\n";

    double a, b, c;

    bool bValid {false};
    while (!bValid)
    {
        if (cin >> a >> b >> c)
        {
            bValid = true;
        }
        else {
            cin.clear();
            cin.ignore();
        }
    }

    double x1 {0.0};
    double x2 {0.0};
    bool bImag {false}; // Specifier for an imaginary solution
    double fReal {0.0};
    double fImag {0.0};
    // If a == 0, the user entered a linear equation bx + c = 0 -> x = -c/b
    if (0.0 == a)
    {
        if (0.0 == b)
        {
            cout << "There are infinitely many solutions for x.\n";
            return 0;
        }
        x1 = - c/b;
        x2 = x1;
    }
    else {

        double fDen {2.0 * a};

        // Check if the solution is imaginary
        double fSqrtArg {b*b - 4.0 * a * c};
        if (fSqrtArg < 0)
        {
            bImag = true;
            fSqrtArg *= -1.0; // Make the result positive
        }

        double fSqrt {sqrt(fSqrtArg)};

        if (bImag)
        {
            fReal = -b / fDen;
            fImag = fSqrt/fDen;
        }
        else {
            x1 = (-b + fSqrt)/fDen;
            x2 = (-b - fSqrt)/fDen;
        }
    }


    cout << "The solution of " << a << "x^2 + " << b << "x + " << c << " = 0 is " << (bImag ? "imaginary" : "real") << ":\n";
    if (bImag) {
        cout << "x1 = " << fReal << " + " << fImag << "i\n"
             << "x2 = " << fReal << " - " << fImag << "i\n";
    }
    else
        cout << "x1 = " << x1 << "i, x2 = " << x2 << '\n';

    return 0;
}
