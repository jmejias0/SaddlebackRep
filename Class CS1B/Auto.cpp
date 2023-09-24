// Auto.cpp

#include "Auto.h"

    Auto::Auto()
    {
        id = 0;
        year = 0;
        wholesale = 0.0;
        convertible = false;
    }
    //----------------------------------------------------------------
    Auto::Auto(int id, int year, string model, float wholesale, bool convertible)
    {
         this->id = id;
        this->year = year;
        this->model = model;
        this->wholesale = wholesale;
        this->convertible = convertible;
    }
//----------------------------------------------------------------
    Auto::~Auto() {}
//----------------------------------------------------------------
    void Auto::setConvertible(bool convertible)
    {
        this->convertible = convertible;
    }
//----------------------------------------------------------------
    void Auto::displayVehicle()const
    {
        cout << "ID: " << id << endl;
        cout << "Year: " << year << endl;
        cout << "Model: " << model << endl;
        cout << "convertible: ";
        if (convertible == true)
        {
        cout << "Yes\n\n";
        }
        else
        {
            cout << "No\n\n";
        }
        
        cout << "Wholesale Price: $" << wholesale << endl << endl;
    }