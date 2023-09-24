//====================================================================
// Attached: HW_10abcd
//
//====================================================================
// File: HW_10d
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <list>
#include <iostream>
#include <string>
using namespace std;

// ====== main =======================================================
//
// ===================================================================
int main()
{
    list<char> characters;
    string word;

    cout << "Enter a word: ";
    getline(cin, word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        characters.push_back(word[i]);
    }

    list<char>::iterator it = characters.begin();
    list<char>::reverse_iterator rit = characters.rbegin();
    bool isPalindrome = true;

    while (it != characters.end() && rit != characters.rend())
    {
        if (*it != *rit)
        {
            isPalindrome = false;
            break;
        }
        ++it;
        ++rit;
    }

    if (isPalindrome)
    {
        cout << word << " is a palindrome." << endl;
    }
    else
    {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
/*====================================================================
Output:
Enter a word: Hello
Hello is not a palindrome.
====================================================================*/