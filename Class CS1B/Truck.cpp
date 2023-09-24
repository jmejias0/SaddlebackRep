// Truck.cpp 

#include "Truck.h"

 Truck::Truck()
 {
    id = 0;
    year = 0;
    wholesale = 0.0;
    loadCapacity = 0;
 }
 //--------------------------------
Truck::Truck(int id, int year, string model, float wholesale, int capacity)
{
    this->id = id;
    this->year = year;
    this->model = model;
    this->wholesale = wholesale;
    this->loadCapacity = loadCapacity;
}
//--------------------------------
Truck::~Truck() {}

// Mutator functions
//--------------------------------
void Truck::setLoadCapacity(int loadCapacity)
{
    this->loadCapacity = loadCapacity;
}

//Accesor functions
//--------------------------------
void Truck::displayVehicle()const
{
    cout << "ID: " << id << endl;
        cout << "Year: " << year << endl;
        cout << "Model: " << model << endl;
        cout << "Load capacity: " << loadCapacity << endl;
        cout << "Wholesale Price: $" << wholesale << endl << endl;
}
//--------------------------------
float Truck::calcRetail()const
{
    return 1.6 * wholesale;
}
