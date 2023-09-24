// Cat.cpp

#include "Cat.h"

Cat::Cat()
{
    cout << "Hello from the constructor.\n\n";
    weight = 0;
}

Cat::Cat(string name, int weight)
{
    this->name = name;
    this->weight = weight;
}
//--------------------
Cat::~Cat() {}
//---------------------
void Cat::showCat()const
{
    cout << "Name:" << name << endl;
    cout << "Weight:" << weight << endl << endl;
}
//--------------------------
void Cat::setWeight(int weight)
{
    this->weight = weight;
}
//----------------------
void Cat::setName(string name)
{
    this->name = name;
}
//-----------------------
int Cat::getWeight()const
{
    return weight;
}

string Cat::getName()const
{
    return name;
}