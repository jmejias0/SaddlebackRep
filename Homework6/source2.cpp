//====================================================================
// Attached: HW_6 a, b, c, d, e
//
//====================================================================
// File: Cat HW_6d 
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// Declare the Cat struct
struct Cat {
    char name[50];
    int age;
};

// ====== main =======================================================
//
// ===================================================================
int main() 
{
    ofstream outFile("c:\\Data\\critters.bin", ios::binary);

    if (!outFile) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    cout << "Enter 3 cat records." << endl;

    Cat cat;  // Declare a single Cat object to be reused

    int catCount = 0;
    while (catCount < 3) 
    {
        cout << "Enter information about a cat:" << endl;
        
        cout << "NAME: ";
        cin.getline(cat.name, sizeof(cat.name));
        
        cout << "AGE: ";
        cin >> cat.age;
        cin.ignore();  // Ignore the newline character
        
        // Write the cat object to the binary file
        outFile.write(reinterpret_cast<const char*>(&cat), sizeof(cat));

        catCount++;
    }

    outFile.close();

    cout << "Record written to file." << endl;
    system("pause");
    
    return 0;
}
/*================================================================
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
Press any key to continue . . .
================================================================*/