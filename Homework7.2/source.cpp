//====================================================================
// Attached: HW_7-2
//
//====================================================================
// File: HW_7-2 Source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
#include <string>
#include "Presidents.h"
using namespace std;

int main()
{
    Presidents president1;
    Presidents president2;
    Presidents president3;
    int number;
    string name;
    string quote;

    cout << "Enter the first president's number: ";
    cin >> number;
    cout << "Enter his name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter his quote: ";
    getline(cin, quote);

    president1.setNumber(number);
    president1.setName(name);
    president1.setQuote(quote);

    cout << "Enter the second president's number: ";
    cin >> number;
    cout << "Enter his name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter his quote: ";
    getline(cin, quote);

    president2.setNumber(number);
    president2.setName(name);
    president2.setQuote(quote);

    cout << "Enter the third president's number: ";
    cin >> number;
    cout << "Enter his name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter his quote: ";
    cin.ignore();
    getline(cin, quote);

    president3.setNumber(number);
    president3.setName(name);
    president3.setQuote(quote);

    cout << "The presidents are:" << endl;
    president1.displayPresidents();
    president2.displayPresidents();
    president3.displayPresidents();

    return 0;
}

/*====================================================================
Output:

nter the first president’s number: 37
Enter his name: Richard Nixon
Enter his quote: I am not a crook.

Enter the first president’s number: 45
Enter his name: Donald Trump
Enter his quote: “And ... disinfectant, where it knocks it out in a minute. ... And is there a
way we can do something like that, by injection inside or almost a cleaning?”

Enter the first president’s number: 42
Enter his name: Bill Clinton:
Enter his quote: I did not have sexual relations with that woman.
The presidents are:
Richard Nixon, 37th president, said:
“I am not a crook.”
Donald Trump, 4th president, said:
“Is our country still spending money on the GLOBAL WARMING HOAX?”
Bill Clinton, 42nd president, said:
“I did not have sexual relations with that woman.”
Press any key to continue . . .
====================================================================*/