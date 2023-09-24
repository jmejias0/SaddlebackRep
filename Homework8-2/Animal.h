//====================================================================
// Attached: HW_8s-2 (8-a)
//
//====================================================================
// File: Animal.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    double weight;
public:
    Animal(string name, double weight);
    ~Animal();
};