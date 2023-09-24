//====================================================================
// Attached: HW_5f - HW_5d, HW_5e, HW_5f
//
//====================================================================
// File: HW-5d
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
using namespace std;

// Function prototype
void showEvens(int number);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    int number = 20;

    cout << "Here are all the even numbers from 1 to 20:\n\n";
    showEvens(number);
    cout << endl << endl;
    system("pause");

    return 0;

}



//====== showEvens ===================================================
// This function prints all even numbers from 0 to 20.
//====================================================================
void showEvens(int number)
{
    if (number > 0)
    {
        showEvens(number - 2);
        cout << number << "  ";
    }
}
//====================================================================
