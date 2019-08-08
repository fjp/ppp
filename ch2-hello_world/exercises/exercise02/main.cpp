#include "std_lib_facilities.h"



/// Here is a description of the layout of the house:
/// The bathroom is located in a corridor upstairs. After turning right in the corridor
/// upstairs it is in the first door on the left.

int main() // C++ programs start by executing the function main
{
    cout << "Instructions to find the upstairs bathroom:\n";
    cout << "1. Definitions:\n";
    cout << "2. Define what a room is and how a bathroom looks like.\n";
    cout << "3. Define walking/moving directions (straight, left, right, turns).\n";
    cout << "4. Define what stairs are, how to locate them and how to use them is (move up, down).\n";
    cout << "5. Define what a corridor is and how to locate it.\n";
    cout << "6. Define what a chair is and how to get up from it.\n";
    cout << "7. Define what obstacles are (tables, cats, ...) and how to avoid them.\n";
    cout << "8. Define what a light switch is, how to locate and use it and what's its use is (when to use it).\n";
    cout << "9. Define what doors are, how to locate them realtive to your position and how to use them (open, close, walk through).\n";
    cout << "10. Actions:\n";
    cout << "11. Get up from the chair.\n";
    cout << "12. Locate the corridor that leads to the upstairs bathroom.\n";
    cout << "13. Move to that corridor and avoid obstacles.\n";
    cout << "14. In case the corridor is too dark, locate the light switch and turn it on.\n";
    cout << "15. Locate the stairs and move up the stairs.\n";
    cout << "16. Turn right in the top corridor and move straight.\n";
    cout << "17. Find the first door on your left while walking straight.\n";
    cout << "18. Open the door and check if this is the bathroom.\n";
    cout << "19. Enter the room if it is the bathroom.\n";
    cout << "20. Goal reached.\n";
    keep_window_open(); // wait for a character to be entered
    return 0;
}
