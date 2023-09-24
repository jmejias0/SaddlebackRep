//====================================================================
// Attached: HW #4f, HW #4f box.h
//
//====================================================================
// File: HW #4f box.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Box
{
    int idNumber;
    float width;
    float height;
    float length;
    Box* next;
};