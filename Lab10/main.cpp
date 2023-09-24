//====================================================================
// Attached: Lab 10 - Overload operators
//
//====================================================================
// File: Main.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Book.h"
#include <iostream>

int main() {
    Book b1("0-12345-9", 1990, 12.50);
    Book b2("0-54321-9", 2001, 7.75);
    Book b3;

    cout << "Here is book #1:\n";
    b1.displayBook();
    cout << "Here is book #2:\n";
    b2.displayBook();
    cout << "There are " << b1.getCount() << " books.\n\n";

    if (b1 > b2)
        cout << "Book #1 has a higher price.\n\n";
    else
        cout << "Book #1 does not have a higher price.\n\n";

    if (b1 == b2)
        cout << "Same price.\n\n";
    else
        cout << "Not the same price.\n\n";

    if (b2 > 10.00)
        cout << "The price is more than $10.00.\n\n";
    else
        cout << "The price is not more than $10.00.\n\n";

    double avg = (b1 + b2) / 2.0;
    cout << "The average book price is " << avg << ".\n\n";

    if (b1 < 2000)
        cout << "The book was published before 2000.\n\n";
    else
        cout << "The book was not published before 2000.\n\n";

    cout << b1;

    cout << "\nEnter Book #3 information.\n";
    cin >> b3;
    cout << "\nHere is what you entered for Book #3:\n";
    cout << b3;

    return 0;
}