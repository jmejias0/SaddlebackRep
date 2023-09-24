//====================================================================
// Attached: HW_9f-1
//
//====================================================================
// File: Source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Car.h"

// ====== main =======================================================
//
// ===================================================================

int main()
{
    Car myCar;
    Car yourCar("Toyota", 2007);

    cout << "My car:\n";
    myCar.displayCar();

    cout << "Your Car:\n";
    yourCar.displayCar();

    myCar.setCar("Ford", 2002);

    cout << "My car:\n";
    myCar.displayCar();

    if (areSame(myCar, yourCar))
        cout << "The two cars are the same model and year.\n";
    else
        cout << "The tow cars are not the same model and year.\n";

    cout << Car::getCount() << " cars have been declared" << endl;

    system("pause");

    return 0;
}
/* ==== OUTPUT ======================================
My Car
Model:
Year: 0

Your Car
Model: Toyota
Year: 2007

My Car
Model: Ford
Year: 2002

The two cars are not the same model and year.
2 cars have been declared.
Press any key to continue . . .
// =============================================== */
