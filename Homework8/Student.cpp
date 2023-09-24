//====================================================================
// Attached: HW 8-1a, HW 8-1b
//
//====================================================================
// File: HW 8-1b Student.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Student.h"

Student::Student()
{
    id = 0;
    units = 0;
}   
//----------------------------------------------------------------
Student::Student(int id, string name, int units)
{
    this->id = id;
    this->name = name;
    this->units = units;    
}
//----------------------------------------------------------------
Student::~Student() {}
//----------------------------------------------------------------
void Student::setID(int id)
{
    this->id = id;
}
//----------------------------------------------------------------
int Student::getID()const
{
    return id;
}
//----------------------------------------------------------------
void Student::setUnits(int units)
{
    this->units = units;
}
//----------------------------------------------------------------
int Student::getUnits()const
{
    return units;
}
//----------------------------------------------------------------
void Student::setName(string name)
{
    this->name = name;
}
//----------------------------------------------------------------
void Student::displayRecord()const
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Units: " << units << endl;
}