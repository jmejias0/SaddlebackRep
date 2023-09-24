// Car.h - Class specification

#pragma once

#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    int year;
    string model;
    float price;
public:
    Car();
    Car(int carYear, string carModel, float carPrice);
    ~Car();
    void showCar();

    //"set function"
    void setYear(int carYear);
    void setModel(string carModel);
    void setPrice(float carPrice);

    // "get" function
};
