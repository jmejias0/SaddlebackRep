#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int numbers[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    fstream file;

    file.open("c:\\Data\\test.bin", ios::out | ios::in | ios::binary);
    cout << "Writing the data to the file.\n";
    file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
    file.close();
    file.open("c:\\Data\\test.bin", ios::in | ios::binary);
    cout << "Now reading the data to back into memory.\n";
    file.read(reinterpret_cast<char*>(numbers), sizeof(numbers));

    for (int count = 0; count < SIZE; count++)
        cout << numbers[count] << " ";
        cout << endl;

    file.close();
    return 0;
}