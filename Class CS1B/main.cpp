// Car.cpp

#include "Car2.h"

int main()
{
    Car myCar (2016, "Toyota", 8000);
    Car yourCar (2019, "Ford", 10000);
    
    if (myCar < 2020)
    {
        cout << "My car is older than 2020";
    }
    else
    {
        cout << "My car is not older than 2020";
    }

    //----------------------------------------------------------------
    if (myCar < 1000)
    {
        cout << "My car price is less than 1000.\n\n"; 
    }
    else
    {
        cout << "My car price is at least than 1000.\n\n"; 
    }
    //----------------------
    // if (myCar.operator>=(1000))
    if (myCar >= 1000)
    {
        cout << "My car price is grater than or equal to 1000.\n\n"; 
    }
    else
    {
        cout << "My car price is less than 1000.\n\n"; 
    }
    //----------------------------------------------------------------
    if (myCar < yourCar)
    {
        cout << "My car price is less than your car's price.\n\n";
    }
    else
    {
        cout << "My car's price is not less than your car's price.\n\n";
    }
    //----------------------------------------------------------------
    cout << "The average price of the two cars is " << (myCar + yourCar) / 2.0 << "\n\n"; ;
    //----------------------------------------------------------------
    cout << "My car:\n" << myCar << endl << endl;
    
    return 0;
}
//---------------------------

/*

*/