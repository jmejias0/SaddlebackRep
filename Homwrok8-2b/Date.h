//====================================================================
// Attached: HW_8s-2 (8-b)
//
//====================================================================
// File: Date.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;
public:
    Date();
    Date(int month, int day, int year);
    ~Date();
    void setDate(int year, int month, int day);
    void displayDate()const;
};