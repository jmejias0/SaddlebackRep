#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

enum trafficLights { GREEN = 1, YELLOW = 2, RED = 4};

void setTrafficLight(trafficLights bulbcolor);
void displayLight(const char* color);

int main()
{
    trafficLights bulbcolor = RED;  // start with red light
    setTrafficLight(bulbcolor);

    bulbcolor = GREEN;  // change to green light
    setTrafficLight(bulbcolor);

    bulbcolor = YELLOW;  // change to yellow light
    setTrafficLight(bulbcolor);

    bulbcolor = RED;  // change to red light
    setTrafficLight(bulbcolor);

    cout << endl;
    system("pause");
    return 0;
}

void setTrafficLight(trafficLights bulbcolor)
{
    switch (bulbcolor)
    {
        // Front colors: A = green; C = red; E = yellow, -0 = black bg
        case GREEN:    displayLight("Color 0A");
        break;
        case YELLOW:   displayLight("Color 0E");
        break;
        case RED:      displayLight("Color 0C");    // string literal
        break;
    }
    system("cls");
}
//----------------------------------------------------------------
void displayLight(const char* color)
{
    system(color);
    cout << "   *** \n"
         << " ******* \n"
         << "   ***\n";

    Sleep(2000);
}

