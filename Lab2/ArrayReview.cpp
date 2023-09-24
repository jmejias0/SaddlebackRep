//====================================================================
// Attached: Program #1, Program #2
//
//====================================================================
// File: Program #1
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void numCharacters(string firstName, string lastName);
void compare(string firstName, string lastName);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    string firstName = " ";
    string lastName = " ";
    string fullName = " ";
    string city = " ";

    cout << "Enter your first name: ";
    getline(cin,firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    fullName = firstName + " " + lastName;
    cout << "Enter the state you live in: ";
    getline(cin, city);
    cout << endl;

    cout << "Hi " << fullName << "." << " So you live in " << city << "." << endl;
    cout << "Your first name has " << firstName.length() << " characters." << endl;
    cout << "Your last name has " << lastName.length() << " characters." << endl << endl;

    if (firstName == lastName)
    {
        cout << "Your first name and last name are the same." << endl;
    }
    else
    {
        cout << "Your first name and last name are not the same." << endl;
    }


    return 0;
}
