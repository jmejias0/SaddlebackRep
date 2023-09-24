// Car.cpp
#include "Car.h"

//-----------------------
Car::Car()  // defaul constructor (no parameters)
{
    year = 0;
    price = 0.0;
}
//-------------------------
Car::Car(int carYear, string carModel, float carPrice)
{
    year = carYear;
    model = carModel;
    price = carPrice;

}
//-------------------------
Car::~Car()
{

}
//-------------------------
void Car::showCar()
{
    cout << "Year: " << year << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl;
}
//------------------------
void Car::setYear(int carYear);

    year = carYear;
//-------------------------
void Car::setModel(string carModel);
    model = carModel;
//------------------------

void Car::setPrice(float carPrice);
    price = carPrice;