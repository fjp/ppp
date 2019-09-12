#include "std_lib_facilities.h"


const vector<string> straGesture {"Rock", "Paper", "Scissors"};

string PlayerThrow()
{
    cout << "\tEnter a gesture ('Rock', 'Paper', 'Scissors'):\n";
    string strPlayerThrow;
    while (true)
    {
        if (cin >> strPlayerThrow)
        {
            for (string strGesture : straGesture)
            {
                if (strGesture == strPlayerThrow)
                    return strPlayerThrow;
            }
        }
        cout << "Please try again. Enter 'Rock', 'Paper' or 'Scissors'\n";
        cin.clear();   
    }
}

string ComputerThrow()
{
    cout << "\tEnter an integer which I will use to generate a random gesture.\n";
    int nRandomNumber;
    while (true)
    {
        if (cin >> nRandomNumber)
        {
            int nRandomIdx = nRandomNumber % straGesture.size();
            return straGesture[nRandomIdx];
        }
        cout << "Please try again. Enter an integer'\n";
        cin.clear();
    }
}


void Draw(string i_strGesture)
{
    cout << "\tDraw! We both threw " << i_strGesture << "\nRepeat ";
}

void PlayerWin(string i_strPlayerGesture, string i_strComputerGesture)
{
    cout << "\tYou win with " << i_strPlayerGesture << " against my " << i_strComputerGesture << " gesture.\n";
}

void ComputerWin(string i_strPlayerGesture, string i_strComputerGesture)
{
    cout << "\tI win with " << i_strComputerGesture << " against your " << i_strPlayerGesture << " gesture.\n";
}

int main()
{

    vector<int> rand {1, 2, 4, 8, 1, 9, 8, 2, 4, 3, 7, 1, 9, 4, 0, 6, 7, 0, 2, 4, 6, 8, 4, 3, 9, 1, 0, 2, 4, 8};

    string strComputerGesture {" "};
    string strPlayerGesture {" "};

    int nRound {1};
    int nWins {2};

    int nPlayerScore {0};
    int nComputerScore {0};

    cout << "Let's play 'Rock, Paper, Scissors'. Finish when one wins " << nWins << " games and repeat on draws.\n";

    while (nPlayerScore < nWins && nComputerScore < nWins) {

        cout << nRound << ". Round:\n";
        strComputerGesture = ComputerThrow();
        strPlayerGesture = PlayerThrow();
        cout << "Rock, Paper, Scissors\n";

        switch (strComputerGesture[0]) {
            case 'R':
                switch (strPlayerGesture[0]) {
                    case 'R':
                        Draw(strPlayerGesture);
                        nRound--;
                        break;
                    case 'P':
                        PlayerWin(strPlayerGesture, strComputerGesture);
                        nPlayerScore++;
                        break;
                    case 'S':
                        ComputerWin(strPlayerGesture, strComputerGesture);
                        nComputerScore++;
                        break;
                    default:
                        cout << "Error, something went wrong!\n";
                }
                break;
            case 'P':
                switch (strPlayerGesture[0]) {
                    case 'R':
                        ComputerWin(strPlayerGesture, strComputerGesture);
                        nComputerScore++;
                        break;
                    case 'P':
                        Draw(strPlayerGesture);
                        nRound--;
                        break;
                    case 'S':
                        PlayerWin(strPlayerGesture, strComputerGesture);
                        nPlayerScore++;
                        break;
                    default:
                        cout << "Error, something went wrong!\n";
                }
                break;
            case 'S':
                switch (strPlayerGesture[0]) {
                    case 'R':
                        PlayerWin(strPlayerGesture, strComputerGesture);
                        nPlayerScore++;
                        break;
                    case 'P':
                        ComputerWin(strPlayerGesture, strComputerGesture);
                        nComputerScore++;
                        break;
                    case 'S':
                        Draw(strPlayerGesture);
                        nRound--;
                        break;
                    default:
                        cout << "Error, something went wrong!\n";
                }
                break;
            default:
                cout << "Error, something went wrong!\n";
        }

        cout << "\tScore: Player " << nPlayerScore << ":" << nComputerScore << " Computer\n\n";
        nRound++;
    }

    if (nPlayerScore > nComputerScore)
    {
        cout << "You win this game with a score of ";
    } else {
        cout << "I win this game with a score of ";
    }

    cout << nPlayerScore << ":" << nComputerScore << '\n';


    return 0;
}
