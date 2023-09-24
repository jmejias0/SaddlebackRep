//====================================================================
// Attached: Lab 8 - Song class
//
//====================================================================
// File: Song.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Song.h"

Song::Song()
{
    artist = "";
    title = "";
}
//----------------------------------------------------------------
Song::Song(string songTitle, string songArtist)
{
    title = songTitle;
    artist = songArtist;
}
//----------------------------------------------------------------
Song::~Song() {}
//----------------------------------------------------------------
void Song::setTitle(string songTitle)
{
    title = songTitle;
}
//----------------------------------------------------------------
void Song::setArtist(string songArtist)
{
    artist = songArtist;
}
//----------------------------------------------------------------
void Song::displaySong()
{
    cout << "Title: " << title << endl;
    cout << "Artist: " << artist << endl << endl;
}   