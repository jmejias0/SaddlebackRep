#include <iostream>
using namespace std;

// Function prototypes abpoce main
int getAge();
void displayAge(int age);

int main()
{
    int age;

    age = getAge();     // function call
    displayAge(age);    // standalone function call

    return 0;
}
//=================================


//=================================
// Function definition
// 1st line of the funtion is calles he function heading
int getAge()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    return age;
}
//=================================


//================================
void displayAge(int age)
{
    cout << "Your age is " << age << " years old.\n\n";
}
//=================================