//====================================================================
// Attached: HW_10abcd
//
//====================================================================
// File: HW_10c
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// ====== main =======================================================
//
// ===================================================================
int main()
{
    const int NUM_EMPLOYEES = 5;

    vector<int> hours(NUM_EMPLOYEES);
    vector<double> wage(NUM_EMPLOYEES);

    cout << "Enter the hours worked and hourly wage of each employee:\n\n";

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Hours for Employee #" << i + 1 << ": ";
        int h;
        cin >> h;
        hours.push_back(h);

        cout << "Wage for employee #" << i + 1 << ": ";
        double w;
        cin >> w;
        wage.push_back(w);
    }    

    system("cls");

    cout << fixed << setprecision(2);

    cout << "Gross pay for each employee:\n\n";

    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << setw(11) << "Employee #" << i + 1 << setw(5) << "$"
             << setw(7) << hours[i] * wage[i] << endl;
    }

    cout << "Employee #1 hours = " << hours.front() << endl;
    cout << "Employee #5 hours = " << hours.front() << endl;

    return 0;
}

/*====================================================================
Output:
Hours for Employee #1: 13
Wage for employee #1: 12
Hours for Employee #2: 23
Wage for employee #2: 14
Hours for Employee #3: 24
Wage for employee #3: 26
Hours for Employee #4: 14
Wage for employee #4: 23
Hours for Employee #5: 15
Wage for employee #5: 15

system("cls")

Gross pay for each employee:

 Employee #1    $   0.00
 Employee #2    $   0.00
 Employee #3    $   0.00
 Employee #4    $   0.00
 Employee #5    $   0.00
Employee #1 hours = 0
Employee #5 hours = 0
====================================================================*/