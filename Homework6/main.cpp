//====================================================================
// Attached: HW_6 a, b, c, d, e
//
//====================================================================
// File: HW_6b, HW_6c
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

     outfile.open("c:\\Data\\results.txt");
    if (outfile.fail())
    {
        cout << "File did not open\n";

        return 1;
    }

    infile.open("c:\\Data\\data.txt");
    while (infile >> number)
    {
        outfile << number <<endl;
    }
         
    infile.close();
    outfile.close();

    cout << "\nEnter 3 more numbers:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> moreNums;
        outfile.open("result.txt", ios::app);
        outfile << "\t" << moreNums << endl;
        outfile.close();
    }

    return 0;
}
/*====================================================================
Output:
Here are the numbers in the file:
3
4
5

Enter 3 more numbers:
6
7
8
====================================================================*/