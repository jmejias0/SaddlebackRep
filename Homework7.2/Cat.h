//====================================================================
// Attached: HW_7-2 – (2 parts_7c and 7d)
//
//====================================================================
// File: HW_7d
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
// Cat.h    
#ifndef CAT_H
#define CAT_H
using namespace std;
#include <string>

class Cat 
{
private:
    int weight;
    std::string color;
public:
    Cat();
    void setWeight(int weight);
    void setColor(const string& color);
    void displayInfo();
    void meow();
};

#endif