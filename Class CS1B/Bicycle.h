// Bicycle.h    - Class specification

#include <iostream>
#include <string>
using namespace std;

class Bicycle
{
private:
    // instance variables 
    int year;
    string model;
    string color;
    bool electric;

public:
    Bicycle();       // default constructor (no parameters)
    //-------------------------
    Bicycle(int bikeYear, string bikeModel, string bikeColor, bool isElectric);
    //-------------------------
    ~Bicycle();   //destructor
    //-------------------------
    void displayBike();
};