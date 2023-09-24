#include "student.h"
#include <cstring>

int main()
{
    fstream file("c:\\numbers\\numbers.bin", ios::out | ios::in | ios::binary);
    Student s1 = { 100, "Tom Lee"};
    Student s2 = { 101, "Kim Lee"};
    Student s3 = { 102, "Bruce Lee"};
    Student s4 = { 105, "Lee Lee"};
    
    //char name[20] = "Tom Lee";
    //file.write(name, sizeof(name));

    //int numbers[20] = {0,1,2,3,4,5};
    //file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));

    
    file.write(reinterpret_cast<char*>(&s1), sizeof(Student));
    file.write(reinterpret_cast<char*>(&s2), sizeof(Student));
    file.write(reinterpret_cast<char*>(&s3), sizeof(Student));
    file.write(reinterpret_cast<char*>(&s4), sizeof(Student));

    strcpy(s2.studentName, "Kimmy Lee");

    file.seekp(sizeof(Student), ios::beg);
    file.write(reinterpret_cast<char*>(&s2), sizeof(Student));

    

    /*file.seekp(0, ios::end);
    file.read(reinterpret_cast<char*>(&s5), sizeof(Student));

    file.seekg(0, ios::beg);

    file.read(reinterpret_cast<char*>(&s4), sizeof(Student));

    cout << "S4:   " << "\nID: " << s4.id << endl;
    cout << "Name: " << s4.studentName << endl << endl;
    */
    
    //cout << sizeof(numbers) << endl;

    
    
    
    //file.write(numbers, sizeof(numbers));

    file.close();
    
    return 0;
}


//------------------------
/*bool result = false;
    char letter = 'K';
    short int num1 =3;
    int num2 = 4;
    long long int num3 = 6;
    float num4 = 3.3;
    double num5 = 2.2;
    string name = "Tom";
    Student s1 = {12345,3.3, "Bob"};

    cout << "S1: " << sizeof(Student) << endl;

    cout << name[0] << endl << endl;

    cout << "bool: " << sizeof(bool) << endl
         << "char: " << sizeof(char) << endl
         << "short int: " << sizeof(short int) << endl
         << "int: " << sizeof(num2) << endl
         << "long long int: " << sizeof(long long int) << endl
         << "float: " << sizeof(float) << endl
         << "double: " << sizeof(double) << endl
         << "string: " << sizeof(string) << endl;
*/