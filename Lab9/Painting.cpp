//====================================================================
// Attached: Lab 9 - Art class
//
//====================================================================
// File: Painting.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Painting.h"

Painting::Painting(string id, string tittle, string artist, string genre, int year, double price, string paintMedium)
    : Art(id, tittle, artist, genre, year, price)
{

}
//----------------------------------------------------------------
void Painting::showArt()const
{
    cout << "ID: " << id << "\nTitle: " << title << "\nArtist: " << artist
         << "\nPaint Medium: " << paintMedium << "\nGenre: " << genre
         << "\nYear: " << year << "\nPrice: $" << price << "\n" << endl;

}