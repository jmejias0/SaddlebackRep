//====================================================================
// Attached: Lab 8 - Song class
//
//====================================================================
// File: Song.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#pragma once

#include <iostream>
#include <string>
using namespace std;

class Song
{
public:
    // instance variables
    string title;
    string artist;
public:
    // member functions 
    Song();                                     // default constructor
    Song(string songTitle, string songArtist);  // overloaded constructor
    ~Song();                                    // destructor
    void setTitle(string songTitle);
    void setArtist(string songArtist);
    void displaySong();
};
