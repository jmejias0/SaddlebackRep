//====================================================================
// Attached: HW_6 a, b, c, d, e
//
//====================================================================
// File: Cat HW_6e 
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;

struct Cat 
{
    char name[50];
    int age;
};

// ====== main =======================================================
//
// ===================================================================
int main() 
{
    ofstream outFile("c:\\Data\\critters.bin", ios::binary | ios::app);

    if (!outFile) 
    {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    cout << "Enter 3 cat records." << endl;

    Cat cat;

    int catCount = 0;
    while (catCount < 3) 
    {
        cout << "Enter information about a cat:" << endl;
        
        cout << "NAME: ";
        cin.getline(cat.name, sizeof(cat.name));
        
        cout << "AGE: ";
        cin >> cat.age;
        cin.ignore();
        
        outFile.write(reinterpret_cast<const char*>(&cat), sizeof(cat));

        catCount++;
    }

    outFile.close();

    cout << "Record written to file." << endl;

    cout << "Enter one more cat" << endl;
    
    cout << "NAME: ";
    cin.getline(cat.name, sizeof(cat.name));
    
    cout << "AGE: ";
    cin >> cat.age;
    cin.ignore();

    outFile.open("critters.bin", ios::binary | ios::app);
    outFile.write(reinterpret_cast<const char*>(&cat), sizeof(cat));
    outFile.close();

    cout << "Here is a list of all cats:" << endl;

    ifstream inFile("critters.bin", ios::binary);
    while (inFile.read(reinterpret_cast<char*>(&cat), sizeof(cat))) 
    {
        cout << setw(10) << left << cat.name << cat.age << endl;
    }
    inFile.close();
    system("pause");

    return 0;
}
/*====================================================================
Output:
Enter 3 cat records.
Enter information about a cat:
NAME: Tom
AGE: 5
Enter information about a cat:
NAME: Fluffy
AGE: 3
Enter information about a cat:
NAME: Sweet Pea
AGE: 2
Record written to file.
Enter one more cat
NAME: Jasmin
AGE: 4
Here is a list of all cats:
Tom       5
Fluffy    3
Sweet Pea 2
Jasmin    4
====================================================================*/