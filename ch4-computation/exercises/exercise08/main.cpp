#include "std_lib_facilities.h"

int main()
{
    int nDesiredGrains {1000};
    
    int nSquare {1};
    
    int nGrainsAtCurSquare{1};
    int nTotalGrains {1};
    
    while (nDesiredGrains > nTotalGrains)
    {
        nGrainsAtCurSquare *= 2;
        nTotalGrains += nGrainsAtCurSquare;
        
        cout << "Square: " << nSquare << '\n';
        cout << "Grains at current square: " << nGrainsAtCurSquare << '\n';
        cout << "Total grains: " << nTotalGrains << '\n';
    }

    return 0;
}
