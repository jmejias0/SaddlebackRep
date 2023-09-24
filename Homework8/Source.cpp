//====================================================================
// Attached: HW 8-1a, HW 8-1b
//
//====================================================================
// File: HW 8-1b Source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include "UnderGrad.h"
#include "Grad.h"

int main()
{
    UnderGrad underGrad(100, "Tom Lee", 9, "Freshman");
    Grad grad(101, "Jim Jones", 12, "PHD");
    
    underGrad.displayRecord();
    grad.displayRecord();

    grad.setUnits(15);
    grad.displayRecord();

    return 0;
}
/*====================================================================
Output:
ID: 100
Name: Tom Lee
Units: 9
Class: Freshman

ID: 101
Name: Jim Jones
Units: 12
Degree: PHD

ID: 101
Name: Jim Jones
Units: 15
Class: PHD 
====================================================================*/