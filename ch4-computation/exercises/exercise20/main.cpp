#include "std_lib_facilities.h"


bool Duplicate(string i_strName, vector<string> i_straNames)
{
    for (string strName : i_straNames)
    {
        if (i_strName == i_strName)
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
        if (Duplicate(strName, straNames))
        {
            cout << "Duplicate detected! Names must be unique.\n";
            bDuplicate = true;
            // return -1; // depending on what terminate means (terminate program or terminate input?)
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
