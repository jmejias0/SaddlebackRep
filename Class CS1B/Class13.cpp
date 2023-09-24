// Source.cpp

#include "Stack.h"

int main()
{

Stack<int> intStack;
int number = 3;

while (!intStack.isFull())
{
    intStack.push(number);
    number++;
}
cout << "Stack is full... Now popping...\n\n"
     << "Here are the numbers in the stack:\n";
while (!intStack.isEmpty())
{
    intStack.pop(number);
        cout << number << endl;
    
}
return 0;
}