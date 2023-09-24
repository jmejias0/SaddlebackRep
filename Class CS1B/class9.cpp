#include "Car.h"

int main()
{
    int carYear;
    string carModel;
    float carPrice;
    
    Car myCar;
    Car yourCar(2018, "Nissan", 22000);

    cout << "My car:\n";
    myCar.showCar();

    cout << "Your car:\n";
    yourCar.showCar();

//--------------------------
    cout << "Enter my car's year: ";
    cin >> carYear; // 2008

    cout << "Enter my car's model: ";
    cin.ignore();
    getline(cin,carModel); // 2008

    cout << "Enter my car's price: ";
    cin >> carPrice; // 2008
    
    myCar.setYear(carYear);
    myCar.setModel(carModel);
    myCar.setPrice(carPrice);

     cout << "My car after the \" set\" function:\n";
    yourCar.showCar();

    cout << endl << endl;
    return 0;
}