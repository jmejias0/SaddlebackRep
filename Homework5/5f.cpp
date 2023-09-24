//====================================================================
// Attached: HW_5f - HW_5d, HW_5e, HW_5f
//
//====================================================================
// File: HW-5f
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
using namespace std;

// Function prototype
int countVowels(char statement[], int index);
const int SIZE  = 20;

// ====== main =======================================================
//
// ===================================================================
int main()
{
    char statement[SIZE] = {'\0'};

    cout << "Enter a statement: ";
    cin.getline(statement, SIZE);
    cout << endl;
    cout << "There are " << countVowels(statement, 0) << " vowels in the statement.\n\n";   
    system("pause");

    return 0;
}
//====================================================================



//======= countVowels ================================================
// This function count the number of vowels in the statement
//====================================================================
int countVowels(char statement[], int index)
{
    if (statement[index] == '\0')
    {
        return 0;
    }
    else if (statement[index] == 'a' || statement[index] == 'A' || statement[index] == 'e'
            || statement[index] == 'E' || statement[index] == 'i' || statement[index] == 'I'
            || statement[index] == 'o' || statement[index] == 'O' || statement[index] == 'u'
            || statement[index] == 'U')
    {
        return 1 + countVowels(statement, index + 1);
    }
    else
    {
        return countVowels(statement, index + 1);
    }
}
/*====================================================================
Output:
Enter a statement: Say it ain't so Joe

There are 7 vowels in the statement.

Press any key to continue . . .
====================================================================*/