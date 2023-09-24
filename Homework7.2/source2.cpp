//====================================================================
// Attached: HW_7-2 – (2 parts_7c and 7d)
//
//====================================================================
// File: HW_7d
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
// source.cpp
#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    Cat fluffy;
    Cat tom;
    Cat kitty;

    int weight;
    string color;

    cout << "So you have three cats..." << endl;

    cout << "Describe Fluffy. What does she weigh? ";
    cin >> weight;
    cout << "What color is she? ";
    cin >> color;

    fluffy.setWeight(weight);
    fluffy.setColor(color);

    cout << "Describe Tom. What does he weigh? ";
    cin >> weight;
    cout << "What color is he? ";
    cin >> color;

    tom.setWeight(weight);
    tom.setColor(color);

    cout << "Describe Kitty. What does she weigh? ";
    cin >> weight;
    cout << "What color is she? ";
    cin >> color;

    kitty.setWeight(weight);
    kitty.setColor(color);

    cout << endl;

    fluffy.displayInfo();
    tom.displayInfo();
    kitty.displayInfo();

    cout << endl;

    fluffy.meow();
    tom.meow();
    kitty.meow();

    return 0;
}
/*====================================================================
Output:
So you have three cats...

Describe Fluffy. What does she weight? 4
What color is she? brown

Describe Tom. What does he weight? 9
What color is he? orange

Describe Kitty. What does she weight? 5
What color is she? white

Fluffy weights 4 pounds and is brown.
Tom weighs 9 pounds and is orange.

Kitty weighs 5 pounds and is white.

Fluffy says: MEOW!
Tom says: MEOW!
Kitty says: MEOW!

====================================================================*/