//====================================================================
// Attached: HW_11
//
//====================================================================
// File: Source.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include <iostream>
#include <fstream>
#include <cmath>
#include <thread>
#include <ctime>
using namespace std;

// Function to calculate square root of numbers from 1 to 1,000,000 and write them to "roots.txt"
void writeRoots();

// Function to calculate squares of numbers from 1 to 1,000,000 and write them to "squares.txt"
void writeSquares();

// Timer function to calculate runtime
double timer(function<void()> func); 


int main() {
    // Part 4 - Without Threads
    double timeWithoutThreads = timer([]() {
        writeRoots();
        writeSquares();
    });

    cout << "Time without threads: " << timeWithoutThreads << " seconds.\n";

    // Part 6 - With Threads
    thread firstThread(writeRoots);
    thread secondThread(writeSquares);

    double timeWithThreads;
    {
        clock_t start, end;
        start = clock();

        firstThread.join();
        secondThread.join();

        end = clock();
        timeWithThreads = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    }

    cout << "Time with threads: " << timeWithThreads << " seconds.\n";

    return 0;
}


void writeRoots()
{
    ofstream outFile("roots.txt");
    for (int i = 1; i <= 1000000; i++) 
    {
        double root = sqrt(i);
        outFile << root << "\n";
    }
    outFile.close();
}



void writeSquares()
{
    ofstream outFile("squares.txt");
    for (int i = 1; i <= 1000000; i++)
     {
        double square = i * i;
        outFile << square << "\n";
    }
    outFile.close();
}



double timer(function<void()> func)
{
    clock_t start, end;
    start = clock();
    func();
    end = clock();
    return static_cast<double>(end - start) / CLOCKS_PER_SEC;
}