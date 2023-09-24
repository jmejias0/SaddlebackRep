//====================================================================
// Attached: Lab 13 - Deque
//
//====================================================================
// File: Deque.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <deque>
using namespace std;

// Function prototype
void showNumbers(deque<int>& numbers);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    deque<int> numbers;

    numbers.insert(numbers.end(), 1);
    numbers.insert(numbers.begin(), 2);
    numbers.insert(numbers.end(), 3);
    numbers.insert(numbers.begin(), 4);
    numbers.insert(numbers.end(), 5);
    numbers.insert(numbers.begin(), 6);

    cout << "Here are the values in the deque:";
    showNumbers(numbers);

    cout << "Numbers of values in the deque: " << numbers.size() << endl << endl;
    cout << "Maximum values: " << numbers.max_size() << " bytes.\n\n";
    cout << "The value at index [2]: " << numbers.at(2) << endl << endl;
    cout << "The value at the front: " << numbers.front() << endl << endl;
    cout << "The value at the back: " << numbers.back() << endl << endl;

    numbers.pop_front();
    cout << "Now removing the first value:\n";
    cout << "Here are the values after removing the front:\n";
    showNumbers(numbers);

    numbers.pop_back();
    cout << "Now removing the last value:\n";
    cout << "Here are the values after removing the back:\n";
    showNumbers(numbers);

    system("pause");

    return 0;
}



// ===== showNumbers =================================================
//====================================================================
void showNumbers(deque<int>& numbers)
{
    for (deque<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) 
    {
        cout << *it << endl;
    }

}
/*====================================================================
Output:
Here are the values in the deque:6
4
2
1
3
5
Numbers of values in the deque: 6

Maximum values: 2305843009213693951 bytes.

The value at index [2]: 2

The value at the front: 6

The value at the back: 5

Now removing the first value:
Here are the values after removing the front:
4
2
1
3
5
Now removing the last value:
Here are the values after removing the back:
4
2
1
3
Press any key to continue . . .
====================================================================*/