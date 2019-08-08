#include "std_lib_facilities.h"


int main()
{
    cout << "Instructions to find the way from my apartment house to the place where I work:\n";
    cout << "1. Definitions:\n";
    cout << "2. Define walking/moving directions (straight, left, right, turns).\n";
    cout << "3. Define what stairs are, how to locate them and how to use them (move up, down).\n";
    cout << "4. Define what a corridor is and how to locate it.\n";
    cout << "5. Define what a street is and how to locate street names.\n";
    cout << "6. Define what obstacles are (cars, pedestrians, animals, static obstacles, ...) and how to avoid them.\n";
    cout << "7. Define what traffic lights are, how to interpret the meaning of the lights and what to do in each case.\n";
    cout << "8. Define what round abouts are.\n";
    cout << "9. Define what doors are, how to locate them relative to your position and how to use them (open, close, walk through).\n";
    cout << "10. Actions:\n";
    cout << "11. Move along the corridor until you find the stairs.\n";
    cout << "12. Walk down the stairs and turn right until you see the door.\n";
    cout << "13. Walk out the door and to the nearest street.\n";
    cout << "14. Move left when in front of the street.\n";
    cout << "15. Follow the street until you arrive at the traffic light.\n";
    cout << "16. Stop in front of the traffic light if its red.\n";
    cout << "17. Move straight when it is green.\n";
    cout << "18. Move straight ahead until you reach a round about.\n";
    cout << "19. Turn right at the round about to take the street on the right.\n";
    cout << "20. You entered the destination stree.\n";
    cout << "21. The goal (my work place) is on the left side at the specified Address.\n";
    keep_window_open(); // wait for a character to be entered
    return 0;
}
