#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//#include <conio.h>

using namespace std;

int answer;

void calculations()
{

        switch (answer)
        {
        case 1:
                cout << "\n";
                cout << "----------------------------------\n";
                cout << "Excellent! This is your first lab\n";
                cout << "\n";
                break;

        case 2:
                cout << "\n";
                cout << "----------------------------------\n";
                cout << "One of the best labs: Making chocolate doughnuts with Assembly.\n";
                cout << "\n";
                break;

        case 3:
                cout << "\n";
                cout << "----------------------------------\n";
                cout << "This is the optional requirement:\n";
                cout << "\n";
                system ("sudo ./blink");
                break;

        default:
                cout << "Oops! Try again: \n";
                break;
        }
}

int main()
{
        bool keepLooping = true;
        while (keepLooping)
        {
                cout << "Choose one:  (1) Lab 1, (2) Lab 2, (3) Extra credit: Blink LED  ";
                cin >> answer;
                calculations();
                if (answer < 1 || answer > 3)
                        keepLooping = true;
                else
                        keepLooping = false;
        }

                return answer;
}
