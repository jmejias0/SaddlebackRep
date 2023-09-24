//====================================================================
// Attached: Lab #5
//
//====================================================================
// File: Roster
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
using namespace std;

enum roster {TOM = 1, SHARON, BILL, TERESA, JOHN};

// ====== main =======================================================
//
// ===================================================================
int main()
{    
    roster birthday;
    int choice;

    cout << "This program will give you a student's birthday.\n"
         << "1.) Tom\n2.) Sharon\n3.) Bill\n4.) Teresa\n5.) John\n\n";
    
    cout << "Whose birthday do you want to know? ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
        case TOM : cout << "Tom's birthday is January 3.\n\n";
                   break;
        case SHARON : cout << "Sharon's birthday is April 22.\n\n";
                   break;
        case BILL : cout << "Bill's birthday is May 19.\n\n";
                   break;
        case TERESA : cout << "Teresa's birthday is July 2.\n\n";
                   break;
        case JOHN : cout << "John's birthday is June 17.\n\n";
                   break;
       default : cout << "(default - Invalid selection)\n\n";
                   break;
    }
    system("pause");
    

    return 0;
}
/*====================================================================
Output:
1.) Tom
2.) Sharon
3.) Bill
4.) Teresa
5.) John

Whose birthday do you want to know? 3

Bill's birthday is May 19.

Press any key to continue . . .
====================================================================*/