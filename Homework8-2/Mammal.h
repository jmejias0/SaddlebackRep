//====================================================================
// Attached: HW_8s-2 (8-a)
//
//====================================================================
// File: Mammal.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Animal.h"

class Mammal : public Animal
{
private:
    string hairColor;
public:
    Mammal(string name, double weight, string hairColor);
    ~Mammal();
    void showAnimal() const
    {
        cout << "Mammals are vertebrates in the Mammalia class.\n"
             << "This " << hairColor << name << "weighs " << weight
             << " pourds.\n\n";
    }
};