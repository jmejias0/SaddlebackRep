// source.cpp

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num1 = 3;
    int num2 = 6;
    string myColor = "Blue";
    string yourColor = "blue";

    swap(num1, num2);
    swap (myColor, yourColor);

    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    cout << "mycolor" << myColor << endl;
    cout << "Your color: " << yourColor << endl;

    cout << "The highest value is " << max(num1, num2) << ".\n\n";

    cout << "The highest value is " << max(myColor, yourColor) << ".\n\n";

}