//====================================================================
// Attached: Lab 9 - Art class
//
//====================================================================
// File: Art.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#pragma once

#include <iostream>
#include <string>
using namespace std;

class Art
{
protected:
    string id;
    string title;
    string artist;
    string genre;
    int year;
    double price;
public:
    // member functions
    Art(string id, string title, string artist, string genre, int year, double price);
    ~Art();
    virtual void showArt() const = 0;
};
