//====================================================================
// Attached: HW_9f-1
//
//====================================================================
// File: Car.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string model;
    int year;
    static int carCount;
public:
    Car();
    Car(string model, int year);
    ~Car();
    void setCar(string model, int year);
    int getCount();
    void displayCar()const;
    friend bool areSame(const Car& car1, const Car& car2);
};