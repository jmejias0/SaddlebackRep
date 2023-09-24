//====================================================================
// Attached: HW_8s-2 (8-b)
//
//====================================================================
// File: FamousPreople.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include "FamousPeople.h"

FamousPeople::FamousPeople()
{
    name = "";
    quote = "";
    birthdate = {0,0,0};
}
//----------------------------------------------------------------
FamousPeople::~FamousPeople() {}
//----------------------------------------------------------------
void FamousPeople::setName(string& name)
{
    this->name = name;
}
//----------------------------------------------------------------
void FamousPeople::setQuote(string& quote)
{
    this->quote = quote;
}
//----------------------------------------------------------------
void FamousPeople::setDate(int month, int day, int year)
{
    birthdate.setDate(month, day, year);
}
//----------------------------------------------------------------
void FamousPeople::displayPerson()const
{
    cout << "Name: " << name << endl;
    displayDate();
    cout << "Quote: " << quote << endl;
}
//----------------------------------------------------------------
void FamousPeople::displayDate()const
{
    birthdate.displayDate();
}