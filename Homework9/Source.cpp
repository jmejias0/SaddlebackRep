//====================================================================
// Attached: HW_9f
//
//====================================================================
// File: Source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Dog.h"

int main()
{
    Dog myDog ("Spot", 5.5, 3);
    Dog yourDog ("Jack", 4.5, 3);

    if (myDog >= 2)
        cout << "The dog is at least 2 years old.\n\n";
    else
        cout << "The dog is less than 2 years old.\n\n";

    if (yourDog < myDog)
        cout << "Your dog weighs kess than my dog.\n\n";
    else
        cout << "Your dog does not weigh less than my dog.\n\n";
    
    if (myDog == yourDog)
        cout << "They have the same name.\n\n";
    else
        cout << "They do not have the same name.\n\n";
    
    cout << yourDog << endl;

    return 0;
}
/*====================================================================
Output:
The dog is at least 2 years old.

Your dog weighs lees than my dog.

They do not have the same name.

NAME: Jack
WEIGHT: 4.5 pounds
AGE: 3 years old
====================================================================*/