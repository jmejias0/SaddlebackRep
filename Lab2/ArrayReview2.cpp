//====================================================================
// Attached: Program #1, Program #2
//
//====================================================================
// File: Program #2
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
#include <cstring>
using namespace std;

// ====== main =======================================================
//
// ===================================================================
int main()
{
    const int SIZE1 = 20;
    const int SIZE2 = 20;
    const int SIZE3 = 40;
    const int SIZE4 = 30;

    char firstName[SIZE1] = "";
    char lastName[SIZE2] = "";
    char fullName[SIZE3] = "";
    char address[SIZE4] = "";

    cout << "Enter your first name: ";
    cin.getline(firstName, SIZE1);
    cout << "Enter your last name: ";
    cin.getline(lastName, SIZE1);
    cout << "Enter the state you live in: ";
    cin.getline(address, SIZE3);

    strncpy(fullName, firstName, SIZE1);
    strncat(fullName, " ", SIZE1);
    strncat(fullName, lastName, SIZE1);

    cout << "\nHi " << fullName << ". So you live in " << address << "." << endl;

    int firstNameLenght = strlen(firstName);
    int lastNameLenght = strlen(lastName);

    cout << "Your first name has " << firstNameLenght << " characters," << endl;
    cout << "and your last name has " << lastNameLenght << " characters." << endl << endl;

    int compareResult = strcmp(firstName, lastName);

    if (compareResult == 0)
    {
        cout << "Your first and last names are the same." << endl;
    }
    else
    {
        cout << "Your first and last name are different." << endl;
    }
    return 0;
}
//====================================================================