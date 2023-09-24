//====================================================================
// Attached: Lab 9 - Art class
//
//====================================================================
// File: Painting.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#pragma once

#include "Art.h"

class Painting : public Art
{
private:
    string paintMedium;
public:
    Painting(string id, string tittle, string artist, string genre, int year, double price, string paintMedium);
    void showArt() const override;
};