#include "std_lib_facilities.h"

int main() {

    int nRiceOnCurrSquare {1};
    int nRiceOnPrevSquares {0};

    double dRiceOnCurrSquare {1.0};
    double dRiceOnPrevSquares {0.0};

    // Maximum number that fits in an int (assuming 32 bits)
    // 2^32/2: form −(2^31) to 2^31 − 1 => maximum is 2,147,483,647

    // Maximum number that fits in a double (assuming 64 bit)
    // 2^64/2: from −(2^63) to 2^63 − 1 => 9,223,372,036,854,775,807



    for (int nSquare = 1; nSquare <= 64; ++nSquare) {

        cout << "Square: " << nSquare << '\n';
        cout << "\tGrains on current square [in]: " << nRiceOnCurrSquare << ", [double]: " << dRiceOnCurrSquare << '\n';
        cout << "\tRice on previous squares [int]: " << nRiceOnPrevSquares << ", [double]: " << dRiceOnPrevSquares << '\n';
        cout << "\tTotal rice grains [int]: " << nRiceOnPrevSquares + nRiceOnCurrSquare << ", [double]: " << dRiceOnPrevSquares + dRiceOnCurrSquare << '\n';

        nRiceOnPrevSquares += nRiceOnCurrSquare;
        nRiceOnCurrSquare *= 2;

        dRiceOnPrevSquares += dRiceOnCurrSquare;
        dRiceOnCurrSquare *= 2;

    }

        //cout << "To give the inventor at least " << naDesiredRice[i] << " grains, " << nSquare << " squares are required.\n";
        //cout << "Grains at square " << nSquare << ": " << nRiceOnCurrSquare << '\n';
        //cout << "With the rice on the previous squares this results in " << nRiceOnPrevSquares + nRiceOnCurrSquare << " total grains for the inventor.\n\n";
    return 0;
}
