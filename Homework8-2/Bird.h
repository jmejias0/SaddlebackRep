//====================================================================
// Attached: HW_8s-2 (8-a)
//
//====================================================================
// File: Bird.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Animal.h"

class Bird : public Animal
{
private:
    string featherColor;
public:
    Bird(string name, double weight, string featherColor);
    ~Bird();
    void showAnimal() const
    {
        cout << "Birds are veryebrate in the Aves class.\n"
             << "This " << name << " has " << featherColor << " and weighs "
             <<  weight << " pouds.\n\n";
    }
};