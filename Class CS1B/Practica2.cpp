#include <iostream>
#include <string>
using namespace std;

string getCity();
void showCity(string city);

int main()
{
    string city;

    city = getCity();
    showCity(city);

    return 0;
}
//==========================
string getCity()
{
    string city;

    cout << "Enter a city you want to visit: ";
    getline(cin, city);

    return city;
}
//==========================
void showCity(string city)
{
    cout << "You want to visit " << city << ".\n\n";
}