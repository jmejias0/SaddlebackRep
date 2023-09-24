//====================================================================
// Attached: Lab 7
//
//====================================================================
// File: Rectangle.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
// Date.h - Class specification
#ifndef RECTANGLE_H
#define RECTANGLE_H


#include <iostream>
using namespace std;

class Rectangle 
{
private:
    double length;
    double width;
public:
    // Default constructor
    Rectangle();
    // Deconstructor
    ~Rectangle();
    // Mutator functions
    void setWidth(double width);  
    void setLength(double length); 
    // Accesor functions
    double getWidth()const;
    double getLength()const; 
    double getArea()const; 
};

#endif