//====================================================================
// Attached: HW_6 a, b, c, d, e
//
//====================================================================
// File: HW_6a
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// ====== main =======================================================
//
// ===================================================================
int main()
{
    ifstream infile;
    ofstream outfile;
    int moreNums = 0;

    infile.open("c:\\Data\\data.txt");

    if (infile.fail())
    {
        cout << "File did not open\n";

        return 1;
    }

    cout << "Here are the numbers in the file:\n";
    int number;
    while(infile >> number)
    {
        cout << number << "\n";
    }

    infile.close();
    system("pause"); 
     
    return 0;
}
/*================================================================
Output:
Here are the numbers in the file:
        3
        4
        5
Press any key to continue . . .
================================================================*/
