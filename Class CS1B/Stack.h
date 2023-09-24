// Stack.h

#pragma once

#include <string>
#include <iostream>
using namespace std;

// LIFO last in first out

const int SIZE = 5;
template<class T>
class Stack
{
private:
    T items[SIZE];
    int top;
public:
    stack()
    {
        top = -1;
    }
    //----------------------------------------------------------------
    ~Stack() {}
    //----------------------------------------------------------------
    void push( T value)
    {
        top++;
        items[top] = value;
    }
    //----------------------------------------------------------------
    void pop(T& value)
    {
        value = items[top];
        top--;
    }
    //----------------------------------------------------------------
    bool isEmpty()
    {
        // return top == -1;
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //----------------------------------------------------------------
    bool isFull()
    {
        // return top == SIZE - 1
        if (top == SIZE - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //----------------------------------------------------------------
    void makeEmpty()
    {
        top == -1;
    }

};
