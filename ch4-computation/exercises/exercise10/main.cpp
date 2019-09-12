#include "std_lib_facilities.h"


const vector<string> straGesture {"Rock", "Paper", "Scissors"};

string PlayerThrow()
{
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

string ComputerThrow(int i_nRandomNumber)
{
    int nRandomIdx = i_nRandomNumber % straGesture.size();
    return straGesture[nRandomIdx];
}


void Start()
{
    cout << "Rock, Paper, Scissors\n";
}

void Draw(string i_strGesture)
{
    cout << "Draw! We both throwed " << i_strGesture << '\n';
}

void PlayerWin(string i_strPlayerGesture, string i_strComputerGesture)
{
    cout << "You win with " << i_strPlayerGesture << " against my " << i_strComputerGesture << " gesture.\n";
}

void ComputerWin(string i_strPlayerGesture, string i_strComputerGesture)
{
    cout << "I win with " << i_strComputerGesture << " against your " << i_strPlayerGesture << " gesture.\n";
}

void Evaluate(string i_strPlayerGesture, string i_strComputerGesture)
{
    switch (i_strPlayerGesture[0])
    {
        case 'R':
            Draw(i_strPlayerGesture);
            break;
        case 'P':
            PlayerWin(i_strPlayerGesture, i_strComputerGesture);
            break;
        case 'S':
            ComputerWin(i_strPlayerGesture, i_strComputerGesture);
            break;
        default:
            cout << "Error, something went wrong!\n";
    }
}

int main()
{

    vector<int> rand {1, 2, 4, 8, 1, 9, 8, 2, 4, 3, 7, 1, 9, 4, 0, 6, 7, 0, 2, 4, 6, 8, 4, 3, 9, 1, 0, 2, 4, 8};

    string strComputerGesture {" "};
    string strPlayerGesture {" "};

    for (int i = 0; i < rand.size(); ++i)
    {
        Start();
        strComputerGesture = ComputerThrow(rand[i]);
        strPlayerGesture = PlayerThrow();

        switch (strComputerGesture[0])
        {
            case 'R':
                switch (strPlayerGesture[0])
                {
                    case 'R':
                        Draw(strPlayerGesture);
                        break;
                    case 'P':
                        PlayerWin(strPlayerGesture, strComputerGesture);
                        break;
                    case 'S':
                        ComputerWin(strPlayerGesture, strComputerGesture);
                        break;
                    default:
                        cout << "Error, something went wrong!\n";
                }
                break;
            case 'P':
                switch (strPlayerGesture[0])
                {
                    case 'R':
                        ComputerWin(strPlayerGesture, strComputerGesture);
                        break;
                    case 'P':
                        Draw(strPlayerGesture);
                        break;
                    case 'S':
                        PlayerWin(strPlayerGesture, strComputerGesture);
                        break;
                    default:
                        cout << "Error, something went wrong!\n";
                }
                break;
            case 'S':
                switch (strPlayerGesture[0])
                {
                    case 'R':
                        PlayerWin(strPlayerGesture, strComputerGesture);
                        break;
                    case 'P':
                        ComputerWin(strPlayerGesture, strComputerGesture);
                        break;
                    case 'S':
                        Draw(strPlayerGesture);
                        break;
                    default:
                        cout << "Error, something went wrong!\n";
                }
                break;
            default:
                cout << "Error, something went wrong!\n";
        }
    }


    return 0;
}
