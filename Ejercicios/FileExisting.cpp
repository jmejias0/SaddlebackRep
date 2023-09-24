#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	fstream dataFile;
	
	dataFile.open("values.txt", ios::in);
	if (dataFile.fail())
	{
		// The file does not exist, so create it.
		dataFile.open("values.txt", ios::out);
		//
		//Continue the process the file
	}
	else	// The file already exist
	{
		dataFile.close();
		cout << "The file value.txt alrady exist.\n";
	}
	return 0;
}