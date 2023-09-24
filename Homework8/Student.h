//====================================================================
// Attached: HW 8-1a, HW 8-1b
//
//====================================================================
// File: HW 8-1b Student.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#pragma once

#include <iostream>
#include <string>
using namespace std;

struct Student
{
protected:
    int id;
    string name;
    int units;
public:
     // member functions 
    Student();                                     // default constructor
    Student(int id, string name, int units);       // overloaded constructor
    ~Student();                                    // destructor
    void setID(int id);                            // Mutator function
    int getID()const;                              // Accesor function
    void Student::setName(string name);            // Mutator function
    void setUnits(int units);                      // Mutator function
    int getUnits()const;                           // Accesor function
    void displayRecord()const;                     // Accesor function
};