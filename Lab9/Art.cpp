//====================================================================
// Attached: Lab 9 - Art class
//
//====================================================================
// File: Art.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Art.h"
#include <iostream>

Art::Art(string id, string title, string artist, string genre, int year, double price)
{
    this->id = id;
    this->title = title;
    this->artist = artist;
    this->genre = genre;
    this->year = year;
    this->price = price;
}
//----------------------------------------------------------------
Art::~Art() {}
//----------------------------------------------------------------
