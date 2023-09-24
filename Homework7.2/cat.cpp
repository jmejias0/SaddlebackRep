//====================================================================
// Attached: HW_7-2 – (2 parts_7c and 7d)
//
//====================================================================
// File: HW_7d
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
// Cat.cpp
#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat() {
    weight = 0;
}

void Cat::setWeight(int weight) {
    this->weight = weight;
}

void Cat::setColor(const string& color) {
    this->color = color;
}

void Cat::displayInfo() {
    cout << "The cat weighs " << weight << " pounds and is " << color << "." << endl;
}

void Cat::meow() {
    cout << "MEOW!" << endl;
}