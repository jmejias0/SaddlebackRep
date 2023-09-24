//====================================================================
// Attached: Lab 9 - Art class
//
//====================================================================
// File: Source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include "Painting.h"
#include "Sculpture.h"

// Function prototype
void displayArt(Art& art);

int main()
{
    Painting a1("12345", "The Kiss", "Gustav Klimt", "Symbolism", 1908, 2500, "Oil");
    Sculpture a2("54321", "The Thinker", "Rodin", "Impressionism", 1880, 2000, "Bronze");

    a1.showArt();
    a2.showArt();

    displayArt(a1);
    displayArt(a2);
}



//==== displayArt ====================================================
// This function displays the art
//====================================================================
void displayArt(Art &art)
{
    art.showArt();
}

/*====================================================================
Output:
ID: 12345
Title: The Kiss
Artist: Gustav Klimt
Paint Medium: Oil
Genre: Symbolist
Year: 1908
Price: $2500

ID: 54321
Title: The Thinker
Artist: Rodin
Material: Bronze
Genre: Impressionism
Year: 1880
Price: $2000
====================================================================*/