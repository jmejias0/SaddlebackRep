// Auto.h

#pragma once

#include "Vehicle.h"

class Auto : public Vehicle
{
private:
    bool convertible;
public:
    Auto();
    Auto(int id, int year, string model, float wholesale, bool convertible);
    ~Auto();
    void setConvertible(bool convertible);
    void displayVehicle()const;
};

