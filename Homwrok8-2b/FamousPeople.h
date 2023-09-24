//====================================================================
// Attached: HW_8s-2 (8-b)
//
//====================================================================
// File: FamousPreople.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <string>
#include "Date.h"

class FamousPeople
{
private:
    string name;
    string quote;
    Date birthdate;
public:
    FamousPeople();
    ~FamousPeople();
    void setName(string& name);
    void setQuote(string& quote);
    void setDate(int month, int day, int year);
    void displayPerson()const;
    void displayDate()const;
};