// Cat.h

#pragma once

#include <iostream>
#include <string>
using namespace std;

//#ifndef CAT_H   // If the following code is not define.
//#define CAT_H   // then I'm defining it.

class Cat
{
private:
    string name;
    int weight;
public:
    Cat();
    Cat(string name, int weight);
    ~Cat();
    void showCat()const;
    void setWeight(int weight);
    void setName(string name);
    int getWeight()const;
    string getName()const;
};
//#endif