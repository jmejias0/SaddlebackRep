//====================================================================
// Attached: HW_5f - HW_5d, HW_5e, HW_5f
//
//====================================================================
// File: HW-5e
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
using namespace std;

// Function prototype
void showOdds(int number);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    int number = 19;

    cout << "Here are all odd numbers from 20 to 0:\n\n";
    showOdds(number);
    cout << endl << endl;
    system("pause");

    return 0;

}



//====== showEvens ===================================================
// This function prints all odd numbers from 20 to 0.
//====================================================================
void showOdds(int number)
{
    if (number % 2 == 1)
    {
        cout << number << "  ";
        showOdds(number - 2);
    }
}
//====================================================================
