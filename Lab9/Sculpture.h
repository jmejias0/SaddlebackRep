//====================================================================
// Attached: Lab 9 - Art class
//
//====================================================================
// File: Sculpture.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#pragma once

#include "Art.h" 

class Sculpture : public Art
{
private:
    string material;
public:
    Sculpture(string id, string tittle, string artist, string genre, int year, double price, string material);
    void showArt() const override;
};