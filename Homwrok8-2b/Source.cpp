//====================================================================
// Attached: HW_8s-2 (8-b)
//
//====================================================================
// File: Source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "FamousPeople.h"
#include <iostream>

int main()
{
    FamousPeople person1;
    FamousPeople person2;
    FamousPeople person3;

    string name;
    string quote;
    int month;
    int day;
    int year;

    cout << "Enter the first famous person: ";
    getline(cin, name);
    person1.setName(name);
    cout << endl;

    cout << "Enter the quotation:\n";
    getline(cin, quote);
    person1.setQuote(quote);
    cout << endl;

    cout << "Enter the birthdate:\n";
    cout << "Month: ";
    cin >> month;
    cout << "Day: ";
    cin >> day;
    cout << "Year: ";
    cin >> year;
    person1.setDate(month, day, year);

    system("cls");

    cout << "Enter the second famous person:\n";
    getline(cin, name);
    person2.setName(name);
    cout << endl;

    cout << "Enter The quotation:\n";
    getline(cin, quote);
    person2.setQuote(quote);
    cout << endl;

    cout << "Enter the birthdate:\n";
    cout << "Month: ";
    cin >> month;
    cout << "Day: ";
    cin >> day;
    cout << "Year: ";
    cin >> year;
    person2.setDate(month, day, year);

    system("cls");

    cout << "Enter the third famous person:\n";
    getline(cin, name);
    person3.setName(name);
    cout << endl;

    cout << "Enter The quotation:\n";
    getline(cin, quote);
    person3.setQuote(quote);
    cout << endl;

    cout << "Enter the birthdate:\n";
    cout << "Month: ";
    cin >> month;
    cout << "Day: ";
    cin >> day;
    cout << "Year: ";
    cin >> year;
    person3.setDate(month, day, year);

    system("cls");
    
    cout << "Here are the famous people:\n\n";

    person1.displayPerson();
    person2.displayPerson();
    person3.displayPerson();

}
/*====================================================================
Output:
Enter the first famous person: DaVinci

Enter the quotation:
I have from an early age abjured the use of meat, and the time will come
when men such as I will look upon the murder of animals as they now look
upon the murder of men.

Enter the birthdate:
Month: 4
Day: 15
Year: 1452
---- (Screen Clears) ---- 

Enter the second famous person: Einstein

Enter the quotation:
The pioneers of a warless world are the
youth who refuse military service.

Enter the birthdate:
Month: 3
Day: 14
Year: 1879
---- (Screen Clears) ----

Enter the third famous person: Hitler

Enter the quotation:
What luck for the rulers that men do not think.

Enter the birthdate:
Month: 4
Day: 20
Year: 1889
---- (Screen Clears) ----

Here are the famous people:
Name: DaVinci
Birth Date: 4/15/1452
Enter the quotation:
“I have from an early age abjured the use of meat, and the time will come
when men such as I will look upon the murder of animals as they now look
upon the murder of men.”

Name: Einstein
Birth Date: 3/14/1879
Enter the quotation:
“The pioneers of a warless world are the youth who
refuse military service.”

Name: Hitler
Birth Date: 4/20/1889
Enter the quotation:
“What luck for the rulers that men do not think.”
Press any key to continue . . .
====================================================================*/