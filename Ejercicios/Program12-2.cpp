// This program writes data to a file, closes the file,
// then reopens the file and appends more data.
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	ofstream dataFile;
	
	cout << "Opening File...\n";
    // Open the file in output mode
	dataFile.open("demofile.txt", ios::out);	// Open for output
	cout << "Now writing to the data file.\n";
	dataFile << "Jones\n";                      // write line 1
	dataFile << "Smith\n";                      // write line 2
    cout << "Now closing the file.\n";
    dataFile.close();	                        // Close the file

    cout <<"Opening the file again...\n";
    // Open the file in append mode
    dataFile.open("demofile.txt", ios::out | ios::app);
    cout << "Writing more data to the file...\n";
	dataFile << "Willis\n";                     // Write line 3
	dataFile << "Davis\n";                      // Write line 4
    dataFile << "Mejias\n";                     // Write line 5
	cout << "Now closing the file.\n";
    dataFile.close();	                        // Close the file

    cout << "Done.\n";
	return 0;
}