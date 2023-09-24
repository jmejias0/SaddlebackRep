//====================================================================
// Attached: HW_2a, HW_2b, HW_2c, HW_2d
//
//====================================================================
// File: HW_2a
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

// Function prototypes
void getScore(double testScores[], int SIZE);
void showMenu();
char getChoice();
void displayResult(char choice, double testScores[], int SIZE);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    const int SIZE = 5;
    double testScores[SIZE];
    char choice;

    getScore(testScores, SIZE);
    showMenu();
    choice = getChoice();
    displayResult(choice, testScores, SIZE);

    return 0;
}
//====================================================================



// ===== getScore ====================================================
// This function prompts the user to enter 5 test scores.
//====================================================================
void getScore(double testScores[], int SIZE)
{
    cout << "Enter 5 test scores: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> testScores[i];
    }
    cout << endl;

    system("CLS");
}
//==================================================================== 



// ===== shoeMenu ====================================================
// This function displays a menu of 2 choices.
//====================================================================
void showMenu()
{
    cout << "A.) Calculate the average of the test scores." << endl;
    cout << "B.) Display all test scores." << endl << endl;
}
//====================================================================



// ===== getChoice ===================================================
// This function prompts the user to enter a choice.
//
// Input:
//      choice - the user's choice
// Output:
//      choice - the user's choice
//====================================================================
char getChoice()
{
    char choice;

    cout << "Enter your choice: ";
    cin >> choice;
    system("CLS");

    return choice;
}
//====================================================================



// ===== displayResult ===============================================
// This function displays the result, depending on the user's choice.
//
// If user enter A or a, the average is displayed
// If the user enters B or B, all test scores are displayed
//====================================================================
void displayResult(char choice, double testScores[], int SIZE)
{
    double average = 0.0;
   
    if (choice == 'A' || choice == 'a')
    {
         double acumulator = 0.0;
        for (int i = 0; i < SIZE; i++)
        {
            acumulator += testScores[i];
        }
        average = (acumulator / SIZE);
        cout << fixed << setprecision(2);
        cout << "The average is: " << average << endl;
    }
    else if (choice == 'B' || choice == 'b')
    {
       cout << "Test scores: " << endl;
       for (int i = 0; i < SIZE; i++)
       {
           cout << testScores[i] << endl;
       }
    }
    else
    {
        cout << "Invalid entry!" << endl;
    }
}
//====================================================================


