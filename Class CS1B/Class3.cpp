#include "Date.h"


int main()
{ 
    const int SIZE =3; 
    Date dates[SIZE];

    cout << "Enter " << SIZE << " dates.|n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "#" << i + 1 << ":\n"
             << "Month: ";
        cin >> dates[i].month;
        cout << "Day: ";
        cin >> dates[i].day;
        cout << "Year: ";
        cin >> dates[i].year;
    }
    cout << "Here are the dates: \n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << "#" << i + 1 << ": " << dates[i].month << "/" << dates[i].day << "/" << dates[i].year << endl;
            
    }


    return 0;

}

/*
Date today;
Date* ptr = &today; // Address of today is asigned to ptr.
Date* datePtr = new Date { 6,17,2023 };

// Pointer dont use the dot operator (.)
Date* datePtr = new Date;   // Create a new Date object.
datePtr->month = 6;
datePtr->day = 20;
datePtr->year = 2023;

cout << "Today's date is " << datePtr->month << "/" << datePtr->day << "/" << datePtr->year << endl << endl;

*/
/*
    Date today;
    Date* ptr = &today; // address pf today is assigned to ptr

    int number = 3;
    int* intPtr = &number;

    cout << "Enter a number: ";
    cin >> *intPtr; // dereference the pointer  cin >> number

    cout << "Enter today's date.\n"
         << "Month: ";
    // cin  >> today.month;
    cin >> ptr->month;   // dereference the pinter
    cout << "Day: ";
    cin >> today.day;
    cout << "Year: ";
    cin >> today.year;

    cout << "Today's date is " << today.month << "/" << today.day << "/" << today.year << endl << endl;
    return 0; */




/*
#include "Date.h"

void showDate(Date& date);
void getDate(Date& date);
void showNextDay(Date& date);

int main()
{
    Date today = { 6, 12, 2023 };
    Date payDay;

    cout << "Tomorrow is";
    showNextDay(today);

    cout << "Enter the date for payday\n";
    getDate(payDay);

    cout << "Pay day is";
    showDate(payDay);

    if (today.month == payDay.month && today.day == payDay.day && today.year == payDay.year)
    {
        cout << "Today is the pay day\n";
    }
    else
    {
        cout << "Today is not the pay day\n";
        cout << "Pay day is " << payDay.month << "/" << payDay.day << "/" << payDay.year;
    }  
    return 0;
}

void getDate(Date& date)
{   
    cout << "Month: ";
    cin >> date.month;
    cout << "Day: ";
    cin >> date.day;
    cout << "Year: ";
    cin >> date.year;
}

void showDate(Date& date)
{
    cout << date.month << "/" << date.day << "/" << date.year << endl;
}

void showNextDay(Date& date)
{
    date.day++;
    cout << date.month "/" << dtae.day << "/" << date.year << endl;
}
*/