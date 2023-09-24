//====================================================================
// Attached: HW_2a, HW_2b, HW_2c, HW_2d
//
//====================================================================
// File: HW_2b
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
#include <iomanip>
using namespace std;

const int ROW = 3;
const int COL = 4;

// Function Prototypes
void getData(int numArray[][COL]);
void display(int numArray[][COL]);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    int numArray[ROW][COL];

    getData(numArray);
    display(numArray);


    return 0;
}
//====================================================================



// ====== getData ====================================================
// This function prompts the user to enter values
//====================================================================
void getData(int numArray[][COL])
{
    cout << "Enter integers into the 2-Dimensional array: " << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << "Enter a number: ";
            cin >> numArray[i][j];
        }
    }
    cout << endl;
}
//====================================================================



// ====== display ====================================================
// This function displays the values in the 2-Dimensional array.
//====================================================================
void display(int numArray[][COL])
{
    cout << "Here is the data in the 2-dimensional array:" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << setw(5) << numArray[i][j];
        }
        cout << endl;
    }
}
//====================================================================