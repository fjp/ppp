#include "std_lib_facilities.h"


bool Duplicate(string i_strName, int i_nScore, vector<string> i_straNames, vector<int> i_naScores)
{
    for (int nIdx = 0; nIdx < i_straNames.size(); ++nIdx)
    {
        if (i_strName == i_straNames[nIdx])
        {
            return true;
        }
    }
    return false;
}

int main() {

    cout << "Enter a set of name-and-value pairs, such as 'Joe 17' and 'Barbara 22 (Terminate the input using 'NoName 0' followed by 'Enter'):\n";

    string strName {" "};
    int nScore {0};

    vector<string> straNames(0);
    vector<int> naScores(0);

    bool bDuplicate {false};
    while (!bDuplicate && cin >> strName >> nScore && ("NoName" == strName && 0 == nScore)) // Terminate input with NoName 0
    {            
        // Check that each name is unique and terminate with an error message if a name is entered twice.
        if (Duplicate(strName, nScore, straNames, naScores))
        {
            cout << "Duplicate detected! Names must be unique.\n";
            bDuplicate = true;
        }
        else 
        {
            straNames.push_back(strName);
            naScores.push_back(nScore);
        }
    }


    // Write out all the (name,score) pairs, one per line.
    for (int nIdx = 0; nIdx < straNames.size(); ++nIdx)
    {
        cout << "(" << straNames[nIdx] << "," << naScores[nIdx] << ")\n";
    }

    return 0;
}
