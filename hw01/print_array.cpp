#include <iostream>

void printArray(const int randomNumberArray[], int size)
{
    std::cout << "Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << randomNumberArray[i] << " ";
    }
    std::cout << std::endl;
}