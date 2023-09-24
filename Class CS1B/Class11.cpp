#include "Auto.h"
#include "Truck.h"


int main()
{
    Truck t1;
    Truck t2 (54321, 2010, "Ford", 10000, 30000);

    cout << "Truck #1:\n";
    t1.displayVehicle();

    cout << "\nTruck #2:\n";
    t2.displayVehicle();

    



    cout << endl << endl;
    return 0;
    
}

/*
#include "Vehicle.h"

int main()
{
    Vehicle myCar;
    Vehicle yourCar (12345, 2018, "Nissan", 10000);   

    cout << "My car:\n";
    myCar.displayVehicle();

    cout << "Your car:\n";
    yourCar.displayVehicle();

    myCar.setID(33333);
    myCar.setYear(2017);
    myCar.setModel("kia");
    myCar.setWholesale(1000);

    cout << "My car after the \"set\" funtions:\n ";
    myCar.displayVehicle();

    cout << endl << endl;
    return 0;
    
}
*/

/*
#include "Auto.h"

int main()
{
    Auto a1;
    Auto a2(7777, 2015, "toyota", 10000, true);

    cout << "Auto #1:\n";
    a1.displayVehicle();

    cout << "\nAuto #2:\n";
    a2.displayVehicle();

    a1.setID(333333);
    a1.setYear(2012);
    a1.setModel("Kia");
    a1.setWholesale(10000);
    a1.setConvertible(true);

    cout << "\nAuto #1 after the \"set\" function:\n";
    a1.displayVehicle();

    cout << "The retail price of Auto #1 is $" << a1.calcRetail() << ".\n\n";

    cout << endl << endl;
    return 0;
    
}
*/