//====================================================================
// Attached: HW_1a, HW_1b
//
//====================================================================
// File: HW-1b
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype
void getTemps(float &temp1, float &temp2, float &temp3);
float calcAvg(float temp1, float temp2, float temp3);

int main()
{
    float avg = 0.0;
    float temp1 = 0.0;
    float temp2 = 0.0;
    float temp3 = 0.0;

    getTemps(temp1, temp2, temp3);      // Function call
    avg = calcAvg(temp1, temp2, temp3); // Function call

    return 0;
}

//====== getTemps ====================================================
// This function prompts the user to enter three temperatures.
//====================================================================
void getTemps(float &temp1, float &temp2, float &temp3)
{
    // Ask the user to enter three temperatures
    cout << "Enter temperatures of 3 cities." << endl;
    cout << "#1: ";
    cin >> temp1;
    cout << "#2: ";
    cin >> temp2;
    cout << "#3: ";
    cin >> temp3;
}
//====================================================================


//====== calcAvg =====================================================
// This function calculates the average temperature of three cities.
// The value is returned to main.
//====================================================================
float calcAvg(float temp1, float temp2, float temp3)
{
    float avg;

    // Calculate the average temperature
    avg = (temp1 + temp2 + temp3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "The average temperature is " << avg << " degrees." << endl;

    return avg;
}
//====================================================================