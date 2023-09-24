// Vehicle.cpp
#include "Vehicle.h"

    Vehicle::Vehicle()
    {
        id = 0;
        year = 0;
        model = "";
        wholesale = 0;

    }
    //-------------------------------------
    Vehicle::Vehicle(int id, int year, string model, float wholesale)
    {
        this->id = id;
        this->year = year;
        this->model = model;
        this->wholesale = wholesale;
       
    }
    //-------------------------------------
    Vehicle::~Vehicle() {}
    //-------------------------------------
    // Mutator functions
    void Vehicle::setID(int id)
    {
        this->id = id;
    }
    //-------------------------------------
    void Vehicle::setYear(int year)
    {
        this->year = year;
    }
    //-------------------------------------
    void Vehicle::setModel(string model)
    {
        this->model = model;
    }
    //-------------------------------------
    void Vehicle::setWholesale(float wholesale)
    {
        this->wholesale = wholesale;
    }
    //-------------------------------------
    //Accesor functions
    int Vehicle::getYear()const
    {
        return year;
    }
    //-------------------------------------
    void Vehicle::displayVehicle()const
    {
        cout << "ID: " << id << endl;
        cout << "Year: " << year << endl;
        cout << "Model: " << model << endl;
        cout << "Wholesale Price: $" << wholesale << endl << endl;

    }
    //-------------------------------------
    float Vehicle::calcRetail()const
    {
        return 1.5 * wholesale;
    }