//====================================================================
// Attached: HW_7-1
//
//====================================================================
// File: HW_7-1 Presidents.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
// Presidents.h - Class specification
#ifndef PRESIDENT_H
#define PRESIDENT_H

#include <iostream>
#include <string>
using namespace std;

class Presidents
{
private:
    int number;
    string name;
    string quote;
public:
    // Default constructor
    Presidents();
    // Deconstructor
    ~Presidents();
    // Public functions
    void setNumber(int number);  
    void setName(string& name);  
    void setQuote(string& quote);
    void displayPresidents();
};

#endif