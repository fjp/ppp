#include "std_lib_facilities.h"

// Number guessing program
int main()
{
    cout << "Think of a number between 1 and 100\n\n";
    
    bool found {false};
    int half {50};
    int number {100};
    int upper {100};
    int lower {0};
    char answer {'\0'};
    int question {1};
    while (!found)
    {
         cout << question++ << ". Is the number you are thinking of less than " << half << "? (Enter 'y' or 'n') \n";
         cin >> answer;
         if ('y' == answer) 
         {
              upper = half;
              if (half / 2 > lower)
              {
                  half /= 2;
              }
              else
              {
                  
                  while (!found)
                  {
                      cout << question++ << ". Is the number you are thinking of " << half++ << "? (Enter 'y' or 'n') \n";
                      cin >> answer;
                      if ('y' == answer) 
                      {
                          found = true;
                          number = half;
                      }
                  }
              }
         }
         else 
         {
              cout << question++ << ". Is the number you are thinking of " << half << "? (Enter 'y' or 'n') \n";
              cin >> answer;
              if ('y' == answer) 
              {
                  found = true;
                  number = half;
              }
              else
              {
                  lower = half;
                  if (half + half/2 < upper)
                  {
                      half = half + half/2;
                  }
                  else
                  {
                      cout << question++ << ". Is the number you are thinking of " << half++ << "? (Enter 'y' or 'n') \n";
                      cin >> answer;
                      if ('y' == answer) 
                      {
                          found = true;
                          number = half;
                      }
                  }
              }
         }
    }

    cout << "Is the number you guessed " << number << "?\n";

    return 0;
}
