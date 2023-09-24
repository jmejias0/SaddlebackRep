//====================================================================
// Attached: HW 8-1a, HW 8-1b
//
//====================================================================
// File: HW 8-1b UnderGrad.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Student.h"

class UnderGrad : public Student
{
protected:
    string level;
public:
    UnderGrad(int id, string name, int units, string level);
    ~UnderGrad();
    void displayRecord()const;
};