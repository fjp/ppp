// read and write a first name
#include "std_lib_facilities.h"

int main() {
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    string first_name; // first_name is a variable of type string
    cin >> first_name; // read characters into first_name
    cout << "Dear " << first_name << ",\n";
    cout << "\tHow are you? I am fine. I miss you.\n";
    cout << "I hope you had a nice day and I would've loved to spend it with you.\n";
    cout << "Luckily, next weekend is not far away, and we will meet again.\n";
    cout << "I am sure we will find something fun to do, like swimming, hiking or biking,\n";
    cout << "and maybe going out into the city in the evening.\n";
    cout << "I really look forward to seeing you again.\n";

    return 0;

    cout << "Enter the name of another friend (followed by 'enter'):\n";
    string friend_name;
    cin >> friend_name;
    cout << "\n";

}
