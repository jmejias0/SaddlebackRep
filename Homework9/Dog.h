//====================================================================
// Attached: HW_9f
//
//====================================================================
// File: Dog.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#pragma once

#include <iostream>
#include <string>
using namespace std;

class Dog
{
private:
    string name;
    float weight;
    int age;
public:
    Dog(string name, float weight, int age);
    ~Dog();
    void displayDog()const;
    bool operator>=(int age)
    {
        return this->age >= age;
    }
    bool operator<(Dog& dog)
    {
        return this->weight < dog.weight;
    }
    bool operator==(Dog& dog) 
    {
        return this->name == dog.name;
    }
    friend ostream& operator<<(ostream& os, Dog& dog)
    {
        os << "Name: " << dog.name << endl;
        os << "Weight: " << dog.weight << " pounds" << endl;
        os << "Age: " << dog.age << " years old" << endl;
        return os;
    }
};