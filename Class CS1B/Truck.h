// Truck.h

#pragma once

#include "Vehicle.h"

class Truck : public Vehicle
{
private:
    int loadCapacity;
public:
    Truck();
    Truck(int id, int year, string model, float wholesale, int capacity);
    ~Truck();

    // Mutator functions
    void setLoadCapacity(int loadCapacity);

    //Accesor functions
    void displayVehicle()const;
    float calcRetail()const;
};