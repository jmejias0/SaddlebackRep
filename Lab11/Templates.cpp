//====================================================================
// Attached: Lab 11 - Templates
//
//====================================================================
// File: Templates.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
template <typename T>
void getDimesions(T &value1, T &value2);

template <typename T>
T calcArea(T &num1, T &num2);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    int side1 = 0;
    int side2 = 0;
    float length = 0;
    float width = 0;

    cout << "Enter the integer dimensions of a rectangle:\n";
    getDimesions(side1, side2);

    cout << "The area equals: ";
    cout << calcArea(side1, side2);

    cout << "\n\nEnter float integer dimensions of a rectangle:\n"; 
    getDimesions(length, width);

    cout << "The area equals: ";
    cout << calcArea(length, width);

    return 0;
}



// ===== getDimensions ===============================================
// This function prompts the user to enter two values
// representing the dimensions of the rectangle
//====================================================================
template <typename T>
void getDimesions(T &value1, T &value2)
{

    cout << "Enter the first dimension: ";
    cin >> value1;
    cout << "Enter the second dimension: ";
    cin >> value2;
}
//====================================================================



// ===== calcArea ====================================================
// This function calcuates the area of a rectangle
//====================================================================
template <typename T>
T calcArea(T &num1, T &num2)
{
    return num1 * num2;
}
//====================================================================

/*====================================================================
Output:
Enter the integer dimensions of a rectangle:
Enter the first dimension: 3
Enter the second dimension: 5
The area equals: 15

Enter float integer dimensions of a rectangle:
Enter the first dimension: 3.3
Enter the second dimension: 5.5
The area equals: 18.15
====================================================================*/