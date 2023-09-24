//====================================================================
// Attached: HW_7-1
//
//====================================================================
// File: source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
using namespace std;
#include "Rectangle.h"

int main()
{
    Rectangle tennisCourt;
    double width;
    double length;
    double area;

    cout << "Enter the width of the court: ";
    cin >> width;
    cout << "Enter the length of the court: ";
    cin >> length;
    cout << endl;

    tennisCourt.setWidth(width);
    tennisCourt.setLength(length);

    cout << "The width of the court is " << tennisCourt.getWidth() << " feet.";
    cout << "The length of the court is " << tennisCourt.getLength() << " feet.";
    cout << "The area of the court is " << tennisCourt.getArea() << "squeare feet";

    system("pause");
    return 0;
}
/*====================================================================
Output:
Enter the width of the court: 60
Enter the length of the court: 120
The width of the court is 60 feet.
The length of the court is 120 feet.
The area of the court is 7200 square feet.
Press any key to continue . . . 
======================================================================*/