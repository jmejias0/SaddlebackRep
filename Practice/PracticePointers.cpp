#include <iostream>
using namespace std;

struct Vehicle
{
    int id;
    int year;
    string model;
};

void displayCar(Vehicle& yourCar);

int main()
{
    Vehicle yourCar = {12345, 2005, "Ford"};
    displayCar(yourCar);

    return 0;
}
void displayCar(Vehicle& yourCar)
{
    cout << "Enter the id of the car: ";
    cin >> yourCar.id;
    cout << "Enter the year of the car: ";
    cin >> yourCar.year;
    cout << "Enter the model of the car: ";
    cin >> yourCar.model;
}