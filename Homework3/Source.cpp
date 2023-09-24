//====================================================================
// Attached: HW_3f
//
//====================================================================
// File: HW-3f
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_HOUR = 23;
const int MAX_MINUTE = 59;
const int MAX_SECONDS = 59;

struct Time
{
    int hour;
    int minute;
    int seconds;
};

// Function prototypes
void getTime(Time& time);
bool isTimeValid(const Time& time);
void addOneSecond(Time& time);
void displayTime(const Time& time);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    Time  time;  // time is a Time structure
    char again;

    do
    { 
    getTime(time);
    addOneSecond(time);
    displayTime(time);
    cout << endl;
    cout << "Do it again? (y/n) ";
    cin >> again;
    system("cls");
    } while (again == 'y' || again == 'Y');
    
    return 0;
}



// ===== getTime =====================================================
// This function prompts the user to enter the time, the function
// read the time enetered by the user.
//
// Input:
//      Hour   -  Hour of a day 
//      Minute -  Minutes of a day
//      Seconds -   Seconds of a day
//Output:
//      Hour   -   Same value as input.
//      Minute -   Same value as input.
//      Seconds - Same value as input.
//====================================================================
void getTime(Time& time)
{
    bool  validInput = false; 
    do
    {
    cout << "Enter the time in military time, (24-hour format)," << endl;
    cout << "in the following order: HH:MM:SS, (Hours, Minutes, Seconds) ." << endl << endl;
    cout << "Hours: ";
    cin >> time.hour;
    cout << "Minutes: ";
    cin >> time.minute;
    cout << "Seconds: ";
    cin >> time.seconds;
    cout << endl;
    validInput = isTimeValid(time);
    if (!validInput)
    {
        cout << "Invalid data." << endl << endl;
    }
    }while (!validInput);
}
//====================================================================



// ===== isTimeValid =================================================
// This function check to make sure the time entered is valid. If the
// time entered is invalid, return false, else return true.
//====================================================================
bool isTimeValid(const Time& time)
{
    return ((time.hour >= 0) && (time.hour <= MAX_HOUR) &&
            (time.minute >= 0) && (time.minute <= MAX_MINUTE) &&
            (time.seconds >= 0) && (time.seconds <= MAX_SECONDS));
}
//====================================================================



// ===== addOneSecond ================================================
// This function add one second to the time entered.
//====================================================================
void addOneSecond(Time& time)
{
    time.seconds++;
    if (time.seconds > MAX_SECONDS)
    {
        time.seconds = 0;
        time.minute++;
        if (time.minute > MAX_MINUTE)
        {
            time.minute = 0;
            time.hour++;
            if (time.hour > MAX_HOUR)
            {
                time.hour = 0;
            }
        }
    }
    cout << "After adding one second, the time is: ";
}
//====================================================================



//====== displayTime =================================================
// This funtion displays the time after the second has been added.
//====================================================================
void displayTime(const Time& time)
{
    cout << setfill('0') << setw(2) << time.hour << ":" << setfill('0') 
    << setw(2) << time.minute << ":" << setfill('0') << setw(2) << time.seconds << endl;
}
//====================================================================