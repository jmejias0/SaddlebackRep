//====================================================================
// Attached: HW 8-1a, HW 8-1b
//
//====================================================================
// File: HW 8-1b Grad.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Student.h"

class Grad : public Student
{
protected:
    string degree;
public:
    Grad(int id, string name, int units, string degree);
    ~Grad();
    void displayRecord()const;
};