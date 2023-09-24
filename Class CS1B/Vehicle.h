// Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    int id;
    int year;
    string model;
    float wholesale;
public:
    Vehicle();
    Vehicle(int id, int year, string model, float wholesale);
    ~Vehicle();

    // Mutator functions
    void setID(int id);
    void setYear(int year);
    void setModel(string model);
    void setWholesale(float wholesale);

    //Accesor functions
    int getYear()const;
    void displayVehicle()const;
    float calcRetail()const;

};

#endif