#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	fstream dataFile;
	
	cout << "Opening File...\n";
	dataFile.open("demofile.txt", ios::out);	// Open for output
	cout << "Now writing to the data file.\n";
	dataFile << "Jones\n";
	dataFile << "Smith\n";
	dataFile << "Willis\n";
	dataFile << "Davis\n";
	dataFile.close();
	cout << "Done.\n";

	return 0;
}