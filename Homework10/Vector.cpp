//====================================================================
// Attached: HW_10abcd
//
//====================================================================
// File: HW_10b
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <vector>
using namespace std;

// ====== main =======================================================
//
// ===================================================================
int main()
{
    vector<int> values;

    values.push_back(1);
    values.push_back(2);
    values.push_back(4);
    values.push_back(9);
    values.push_back(5);

    cout << "Vector: ";
    for (int i = 0; i < values.size(); i++)
        cout << values[i] << " ";

    values.insert(values.begin(), 3);

    cout << "\n\nVector: ";
    for (int i = 0; i < values.size(); i++)
        cout << values[i] << " ";

    values.erase(values.begin());

    cout << "\n\nVector: ";
    for (int i = 0; i < values.size(); i++)
        cout << values[i] << " ";

    values.pop_back();

    cout << "\n\nVector: ";
    for (int i = 0; i < values.size(); i++)
        cout << values[i] << " ";

    cout << "\n\nThere are " << values.size() << " values." << endl;

    return 0;
}
/*====================================================================
Output:
Vector: 1 2 4 9 5

Vector: 3 1 2 4 9 5

Vector: 1 2 4 9 5

Vector: 1 2 4 9

There are 4 values.
====================================================================*/