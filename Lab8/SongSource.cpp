//====================================================================
// Attached: Lab 8 - Song class
//
//====================================================================
// File: Source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Song.h"

int main()
{
    Song yourSong;
    Song anotherSong ("All of me", "Billie Holliday");
    string artist;
    string title;

    cout << "Here are the songs:\n\n";
    cout << "Your song:\n";
    cout << "Title: ";
    yourSong.title;
    cout << endl;
    cout << "Artist: ";
    yourSong.artist;

    cout << "\n\nAnother song:\n";
    cout << "Title: ";
    anotherSong.title;
    cout << endl;
    cout << "Artist: ";
    anotherSong.artist;

    cout << "\n\nEnter information about your song:\n";
    cout << "Title: ";
    getline(cin, title);
    yourSong.setTitle(title);
    cout << "Artist: ";
    getline(cin, artist);
    yourSong.setArtist(artist);

    cout << endl;

    cout << "Here is your song (after the set function)\n";
    yourSong.displaySong();
     
    system("pause");
    return 0;
}
/*====================================================================
Output:
Here are the songs:

Your song:
Title:
Artist:

Another song:
Title: All of me
Artist: Billie Holliday

Enter information about your song:
Title: Like a Virgin
Artist: Madonna

Here is your song (after the set function)
Title: Like a Virgin
Artist: Madonna
====================================================================*/