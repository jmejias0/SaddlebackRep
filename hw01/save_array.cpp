#include <fstream>
#include <iostream>

void saveArray(const int randomNumberArray[], int size, const std::string& filename) 
{
    std::ofstream myfile("array.txt");
    if (myfile.is_open()) 
    {
        for (int i = 0; i < size; ++i) 
        {
            myfile << randomNumberArray[i] << std::endl;
        }
        myfile.close();
        std::cout << "Array saved to 'array.txt'" << std::endl;
    }
     else 
    {
        std::cout << "Unable to open file for writing." << std::endl;
    }
}