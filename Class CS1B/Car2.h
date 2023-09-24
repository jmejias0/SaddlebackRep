// Car2.h

#pragma once

#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    // instance variables
    int year;
    string model;
    float price;
public:
    Car();
    Car(int year, string model, float price);
    ~Car();
    void showCar()const;
    bool operator<(float price);
    bool operator>=(float price);
    bool operator<(Car& car);
    bool operator<(int year);
    float operator+(Car& car);

    friend ostream& operator<<(ostream& stream, Car& car);
};


