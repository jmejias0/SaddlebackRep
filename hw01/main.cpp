#include <cstdlib>
#include <ctime>
#include <iostream>

enum Operation { SUM_DIGITS, TRIPLE_NUMBER, REVERSE_DIGITS, SORT_NUMS, PRINT_NUMS, EXIT };

// typedef void (*OperationFunction)(int&);

void sumDigits(int& number);
void tripleNumber(int& number);
void reverseDigits(int& number);
void sortArray(int randomNumberArray[], int size);
void printArray(const int randomNumberArray[], int size);
void saveArray(const int randomNumberArray[], int size, const std::string& filename);


int main()
{
    const int ARRAY_SIZE = 10;
    int randomNumberArray[ARRAY_SIZE];

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        randomNumberArray[i] = std::rand() % 900 + 100; 
    }

    for (int i = 0; i < ARRAY_SIZE; ++i) 
    {
        int number = randomNumberArray[i];
        std::cout << "Number " << i + 1 << ": " << number << std::endl;

        std::cout << "Case 1: sum Digits" << std::endl;
        std::cout << "Case 2: triple the number" << std::endl;
        std::cout << "Case 3: reverse Digits" << std::endl;
        
        Operation operation = static_cast<Operation>(std::rand() % 3);
        //OperationFunction operationFunction;

        switch (operation) 
        {
            case SUM_DIGITS:
                         sumDigits;
                break;
            case TRIPLE_NUMBER:
                        tripleNumber;
                break;
            case REVERSE_DIGITS:
                        reverseDigits;
                break;
            default:
                break;
        }

        //operationFunction(number);
        std::cout << "After operation: " << (number += number) << std::endl;
        std::cout << std::endl;

        randomNumberArray[i] = number;
    }

    sortArray(randomNumberArray, ARRAY_SIZE);
    printArray(randomNumberArray, ARRAY_SIZE);
    saveArray(randomNumberArray, ARRAY_SIZE, "array.txt");

    return 0;
}













// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include "triple_number.h"
// #include "sum_digits.h"
// #include "reverse_digits.h"
// #include "sort_array.h"
// #include "print_array.h"
// #include "save_array.h"

// enum RandomNum {SUM_NUMS, TRIPLE_NUM, REVERSE_NUMS };

// typedef void (*RandNumFunction)(int&);

// int main() 
// {
//     const int ARRAY_SIZE = 10;
//     int randNumArray[ARRAY_SIZE];

//     // Seed the random number generator
// 	std::srand(static_cast<unsigned int>(std::time(NULL)));

//     // 3 random numbers generator
// 	for (int i = 0; i < ARRAY_SIZE; i++)
// 	{
	
// 		randNumArray[i] = std::rand() % 9 + 10;
// 	}

//     for (int i = 0; i < ARRAY_SIZE; ++i)
//     {
//         int number = randNumArray[i];
//         std::cout << "Number " << i + 1 << ": " << number << std::endl;
    
//         RandomNum operation = static_cast<RandomNum>(std::rand() % 3);
//         RandNumFunction randNumFunction; 

//     switch(operation)
//     {
//         case SUM_NUMS   :
//             randNumFunction = sumDigits;
//             break;
//         case TRIPLE_NUM : 
//             randNumFunction = tripleNumber;
//             break;
//         case REVERSE_NUMS :
//             randNumFunction = reverseDigits;
//             break;
//         default :
//             break;
//     }

//     randNumFunction(number);
//     std::cout << "After operation: " << number << std::endl;
//     std::cout << std::endl;

//     randNumArray[i] = number;
//     }

//     sortArray(randNumArray, ARRAY_SIZE);
//     printArray(randNumArray, ARRAY_SIZE);
//     saveArray(randNumArray, ARRAY_SIZE);

// return 0;
// }
	
	
	

