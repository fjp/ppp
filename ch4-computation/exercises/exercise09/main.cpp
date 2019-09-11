#include "std_lib_facilities.h"

int main() {
    vector<int> naDesiredRice{1000, 1'000'000, 1'000'000'000};

    int nSquare {1};

    int nRiceOnCurrSquare {1};
    int nRiceOnPrevSquares {0};

    for (int i = 0; i < naDesiredRice.size(); ++i) {
        while (naDesiredRice[i] > nRiceOnPrevSquares + nRiceOnCurrSquare) {


            cout << "Square: " << nSquare++ << '\n';
            cout << "\tGrains at current square: " << nRiceOnCurrSquare << '\n';
            cout << "\tRice on previous squares: " << nRiceOnPrevSquares << '\n';
            cout << "\tTotal rice grains: " << nRiceOnPrevSquares + nRiceOnCurrSquare << '\n';

            nRiceOnPrevSquares += nRiceOnCurrSquare;
            nRiceOnCurrSquare *= 2;
        }

        cout << "To give the inventor at least " << naDesiredRice[i] << " grains, " << nSquare << " squares are required.\n";
        cout << "Grains at square " << nSquare << ": " << nRiceOnCurrSquare << '\n';
        cout << "With the rice on the previous squares this results in " << nRiceOnPrevSquares + nRiceOnCurrSquare << " total grains for the inventor.\n\n";

        nSquare = 1;

        nRiceOnCurrSquare = 1;
        nRiceOnPrevSquares = 0;
    }
    return 0;
}
