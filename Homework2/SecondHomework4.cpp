//====================================================================
// Attached: HW_2a, HW_2b, HW_2c, HW_2d
//
//====================================================================
// File: HW_2d
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
using namespace std;

int searchID(int idNumbers[], int id, int SIZE);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    const int SIZE = 5;
    int idNumbers[SIZE] = { 12345, 54321, 11223, 33211, 44411 };
    int id = 0;
    int index = 0;

    cout << "Enter an ID number to be searched: ";
    cin >> id;

    index = searchID(idNumbers, id, SIZE);

    if (index == -1)
    {
        cout << "ID not found." << endl;
    }
    else
    {
        cout << "ID found at index " << index << "." << endl;
    }

    return 0;
}
//====================================================================



//========= SearchID =================================================
// This function searches for an ID number in an array.
//
// Input:
//      idNumbers[] - array of integers
// Output:
//      If the ID number is  found, the function returns the index where
//      it is located in the array. If it is not found, the function
//      displays a message that the ID number is not found.
//====================================================================
int searchID(int idNumbers[], int id, int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (idNumbers[i] == id)
        {
            return i;
        }
    }
    return -1;
}
