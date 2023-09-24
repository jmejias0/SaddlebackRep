//====================================================================
// Attached: Lab 12 - Vectors
//
//====================================================================
// File: STLvector.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <vector>
using namespace std;

// Function prototype
void showInfo(vector<int>& numbers);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    vector<int>numbers = { 1, 3, 5, 7, 9 };

    showInfo(numbers);

    return 0;
}


//===== showInfo ====================================================
// This function writes one statement to remove the 9 from the vector.
// displays the number of values in the vector (4 because the 9 was removed).
// writes a statement to display the number of array elements in the vector (5).
// write sa statement to display the maximum number of values (depends on RAM).
// writes a statement to display the value at the front of the vector.
// writes a statement to display the value at the back of the vector.
// writes a for loop to display all vector values.
// writes one statement to resize the vector down so that it holds only 2 values.
// displays the numbers of values in the vector 
//===================================================================
void showInfo(vector<int>& numbers)
{
    numbers.pop_back();

    cout << "There are " << numbers.size() << " values in the vector.\n\n";
    cout << "There are " << numbers.capacity() << " array elements in the vector.\n\n";
    cout << "The maximum numbers of int values the vector can hold is " << numbers.max_size() << endl << endl;
    cout << "The value at the front is: " << numbers.front() << endl << endl;
    cout << "The value at the back is: " << numbers.back() << endl << endl;
    cout << "Here are all the values in the vector:" << endl;
    for (unsigned i = 0; i < numbers.size(); i++)
    cout << numbers[i] << endl;
    numbers.resize(2);
    cout << "After resizing, there are " << numbers.size() << " values in the vector" << endl;
}

/*====================================================================
Output:
There are 4 values in the vector.

There are 5 array elements in the vector.

The maximum numbers of int values the vector can hold is 2305843009213693951

The value at the front is: 1

The value at the back is: 7

Here are all the values in the vector:
1
3
5
7
After resizing, there are 2 values in the vector
====================================================================*/