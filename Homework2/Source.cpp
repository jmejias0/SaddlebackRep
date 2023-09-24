//====================================================================
// Attached: HW_2a, HW_2b, HW_2c, HW_2d
//
//====================================================================
// File: HW_2c
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_SUBJECTS = 3;

//function prototypes
double calculateGPA(char grade);

// ====== main =======================================================
//
// ===================================================================
int main()
{
    double gpaSum = 0.0;
    double subjectSum = 0.0;
    double gpa = 0.0;
    double subjectAvg = 0.0;

    ifstream inputFile("grades.txt");
    if (!inputFile)
    {
        return 1;
    }

    // Read grades and assing them to the 2-dimensional array
    char grades[NUM_STUDENTS][NUM_SUBJECTS];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            cin >> grades[i][j];
        }
    }
    // close file
    inputFile.close();

    // Display grades
    cout << "All grades: " << endl;
    cout << "Student\tEnglish\tHistory\tMath" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "#" << i + 1 << "\t";
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            cout << grades[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // Compute and display student's GPA
    cout << "Student GPA: " << endl;
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            gpaSum += calculateGPA(grades[i][j]);
        }
        gpa = gpaSum / NUM_SUBJECTS;
        cout << "#" << i + 1 << "\t";
        cout << fixed << setprecision(2) << gpa << endl;
    }
    cout << endl;

    // compute and display subject's GPA
    cout << "Average GPA for subject: " << endl;
    cout << "English\tHistory\tMath" << endl;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        for (int j = 0; j < NUM_STUDENTS; j++)
        {
            subjectSum += calculateGPA(grades[j][i]);
        }
        subjectAvg = subjectSum / NUM_STUDENTS;
        cout << fixed << setprecision(2) << subjectAvg << "\t";
    }
    cout << endl;   
}
//====================================================================



// ====== calculateGPA ===============================================
//====================================================================
double calculateGPA(char grade)
{
    double gpa = 0.0;

    switch(grade)
    {
        case 'A':
                    gpa = 4.0;
                    break;
                case 'B':
                    gpa = 3.5;
                    break;
                case 'C':
                    gpa = 3.0;
                    break;
                case 'D':
                    gpa = 2.5;
                    break;
                case 'F':
                    gpa = 0.0;
                    break;
                default:
                    gpa = 0.0;
                    break;
    }
    return gpa;
}
/*=====================================================================
*/