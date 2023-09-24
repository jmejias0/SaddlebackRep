//====================================================================
// Attached: HW_7-1
//
//====================================================================
// File: HW_7-1
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
// Date.h - Class specification

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;
public:
    // Default constructor
    Date();
    //Overload constructor
    Date(int dateMonth, int dateDay, int dateYear);
    // Deconstructor
    ~Date();
    // Public functions
    void setDate(int month, int day, int year);  // mutator fuction
    void addDays(int addDays);  //Accesor function
    void displayDate();
};