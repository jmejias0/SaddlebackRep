// Car.cpp

#include "Car2.h"

Car::Car()
{
    year = 0;
    price = 0.0;
}
Car::Car(int year, string model, float price)
{
    this->year = year;
    this->model = model;
    this->price = price;
}
Car::~Car() {}
void Car::showCar()const
{
    cout << "Year: " << year << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl << endl;
}
//-------------------------------------------
bool Car::operator<(float price)
{   
    return this->price < price; // same as below

    /*
    if (this->price < price)
    {
        return true;
    }
    else
    {
        return false;
    }
    */
}
//----------------------------------------------------------------
bool Car::operator>=(float price)
{
    return this->price >= price;
}
//----------------------------------------------------------------
bool Car::operator<(Car& car)
{
    return price < car.price;
}
//----------------------------------------------------------------
bool Car::operator<(Car& car)
{
    return this->year < year;
}
//----------------------------------------------------------------
float Car::operator+(Car& car)
{
    return price + car.price;
}
//----------------------------------------------------------------
ostream& operator<<(ostream& stream, Car& car)
{
    stream << "Year: " << car.year << endl;
    stream << "Model: " << car.model << endl;
    stream << "Price: " << car.price << endl << endl;
    return stream;
}