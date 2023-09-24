//====================================================================
// Attached: HW_7-1
//
//====================================================================
// File: HW_7-1
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Date.h"

int main()
{
    Date today (int dateMonth, int dateDay, int dateYear);
    Date payDay;
    int month = 0;
    int day = 0;
    int year = 0;

    cout << "Enter yout pay day: " << endl << endl;
    cout << "MONTH: "; 
    cin >> month;
    cout << "DAY: ";
    cin >> day;
    cout << "YEAR: ";
    cin >> year;

    payDay.setDate(month, day, year);

    return 0;
    
}
/*====================================================================
Output:
Enter your pay day:
MONTH: 5
DAY: 1
YEAR: 2020

Today's date is:
Month: 4
Day: 29
Year: 2020

Your pay day date is:
Month: 5
Day: 1
Year: 2020

Next week's pay day is:
Month: 5
======================================================================*/