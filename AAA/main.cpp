#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sum_digits.h"
#include "triple_number.h"
#include "reverse_digits.h"
#include "sort_array.h"
#include "print_array.h"
#include "save_array.h"

enum Operation {
    SUM_DIGITS,
    TRIPLE_NUMBER,
    REVERSE_DIGITS
};

typedef void (*OperationFunction)(int&);

int main() {
    const int ARRAY_SIZE = 10;
    int randomNumberArray[ARRAY_SIZE];

    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        randomNumberArray[i] = std::rand() % 900 + 100;
    }

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        int number = randomNumberArray[i];
        std::cout << "Number " << i + 1 << ": " << number << std::endl;

        Operation operation = static_cast<Operation>(std::rand() % 3);
        OperationFunction operationFunction;

        switch (operation) {
            case SUM_DIGITS:
                operationFunction = sumDigits;
                break;
            case TRIPLE_NUMBER:
                operationFunction = tripleNumber;
                break;
            case REVERSE_DIGITS:
                operationFunction = reverseDigits;
                break;
            default:
                break;
        }

        operationFunction(number);
        std::cout << "After operation: " << number << std::endl;
        std::cout << std::endl;

        randomNumberArray[i] = number;
    }

    sortArray(randomNumberArray, ARRAY_SIZE);
    printArray(randomNumberArray, ARRAY_SIZE);
    saveArray(randomNumberArray, ARRAY_SIZE);

    return 0;
}