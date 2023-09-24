//====================================================================
// Attached: HW_10abcd
//
//====================================================================
// File: HW_10a
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <algorithm>
using namespace std;

// ====== main =======================================================
//
// ===================================================================
int main()
{
    int value1 = 1;
    int value2 = 2;
    int value3 = 1;
    int value4 = 2;
    char value5 = 'a';
    char value6 = 'z';
    float value7 = 3.14;
    float value8 = 2.72;

    int max_int = max(value1, value2);
    cout << "The grater value of " << value1 << " and " << value2 << " = " << max_int << endl;

    int max_int2 = max(value3, value4);
    cout << "The grater value of " << value3 << " and " << value4 << " = " << max_int2 << endl;

    char max_char = max(value5, value6);
    cout << "The grater value of " << value5 << " and " << value6 << " = " << max_char << endl;

    float max_float = max(value7, value8);
    cout << "The grater value of " << value7 << " and " << value8 << " is = " << max_float << endl;

    system("pause");

    return 0;
}
/*====================================================================
Output:
The grater value of 1 and 2 = 2
The grater value of 1 and 2 = 2
The grater value of a and z = z
The grater value of 3.14 and 2.72 is = 3.14
Press any key to continue . . .

The max function works with strings because each character have
its own value in the ASCII table.
====================================================================*/