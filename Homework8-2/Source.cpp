//====================================================================
// Attached: HW_8s-2 (8-a)
//
//====================================================================
// File: Source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Bird.h"
#include "Mammal.h"

int main()
{
    Bird bird("pelican", 8.5, "gray feathers");
    Mammal cow("Cow", 500, "black and white");

    bird.showAnimal();
    cow.showAnimal();

    system("pause");    

    return 0;
}

/*====================================================================
Output:
Birds are vertebrates in the Aves class.
This pelican has gray feathers and weighs 8.5 pounds.

Mammals are vertebrates in the Mammalia class.
This black and white dairy cow weighs 500 pounds.

Press any key to continue . . .
====================================================================*/