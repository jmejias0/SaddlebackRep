//====================================================================
// Attached: Lab 9 - Art class
//
//====================================================================
// File: Sculpture.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Sculpture.h"

Sculpture::Sculpture(string id, string tittle, string artist, string genre, int year, double price, string material)
    : Art(id, tittle, artist, genre, year, price)
{

}
//----------------------------------------------------------------
void Sculpture::showArt()const
{
    cout << "ID: " << id << "\nTitle: " << title << "\nArtist: " << artist
         << "\nMaterial: " << material << "\nGenre: " << genre
         << "\nYear: " << year << "\nPrice: $" << price << "\n" << endl;
}
