//====================================================================
// Attached: HW_7-1
//
//====================================================================
// File: HW_7-1 Presidents.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
// Presidents.cpp
#include <iostream>
using namespace std;
#include "Presidents.h"

// ======= Default constructor =======================================
Presidents::Presidents()
{
   double width = 0;
   double length = 0;
}
//====================================================================

//===== Deconstructor ================================================
Presidents::~Presidents() {}
//====================================================================

//======= setNumber method ===========================================
void Presidents::setNumber(int number)
{
    this->number = number;
}
//====================================================================

// ====== setName method =============================================
void Presidents::setName(string& name)
{
    this->name = name;
}
//====================================================================

// ====== setQuote method ============================================
void Presidents::setQuote(string& quote)
{
    this->quote = quote;
}
//====================================================================


// ====== displayPresidents method ===================================
void Presidents::displayPresidents()
{
    cout << "The presidents are " << name << ", " << number << ", " 
         << "said:" << endl;
    cout << "\"" << quote << "\"" << endl;
}
//====================================================================