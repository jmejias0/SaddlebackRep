// Bicycle.cpp

#include "Bicycle.h"


    Bicycle::Bicycle()       // Scope resolution operator :: resolves the scope
    {
        year = 0;
        electric = false;
    }
    //-------------------------
    Bicycle::Bicycle(int bikeYear, string bikeModel, string bikeColor, bool isElectric)
    {
        year = bikeYear;
        model = bikeModel;
        color = bikeColor;
        electric = isElectric;
    }
    //-------------------------
    Bicycle::~Bicycle()  {}   //destructor
    //-------------------------
    void Bicycle::displayBike()
    {
        cout << "Year: " << year << endl 
            << "Model: " << model << endl
            << "Color: " << color << endl
             << "Electic: ";
        if (electric == true) // if (electric)
        {
          cout << "Yes.";
        }
        else
        {
         cout << "No.\n\n";
        }
