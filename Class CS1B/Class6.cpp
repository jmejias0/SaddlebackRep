#include <iostream>
#include <string>
#include <fstream>      // Strep #1
#include <iomanip>
using namespace std;

int main()
{
    int count = 0;
    char character;
    fstream file("message.txt", ios::in);

    while(!file.eof())
    {
        file.get(character);

        if (toupper(character) == 'O')
        {
            count++;
        }
    }
    cout << "There are " << count << "o's in the Gettysburg Address.\n\n";
    
    return 0;
}
/*


getline(inFile,)



#include <iostream>
#include <string>
#include <fstream>      // Strep #1
#include <iomanip>
using namespace std;

int main()
{
    float sum = 0;
   float number = 0;
   int count = 0;
   fstream file("c:\\numbers\\numbers.txt", ios::in);
    
if (file.fail())
{
    cout << "Error!... Now closing.\n";
    exit(EXIT_FAILURE);
}
while (!file.eof())
{
    file >> number;
    sum += number;
    count++;
}

file.close();
cout << fixed << setprecision(2) << "The average for all numbers is " << sum / float(count) << endl;
    
return 0;

}


string name1 = "Bob Lee";
   string name2 = "Kim Jones";
   string name3 = "Joe Adams";
   ofstream outFile;

    outFile.open("c:\\numbers\\names.txt");


if (outFile.fail())
{
    cout << "Error!... Now closing.\n";
    exit(EXIT_FAILURE);
}
outFile << name1 << endl << name2 << endl <<name3 << endl;

outFile.close();
    
    return 0;


#include <iostream>
#include <string>
#include <fstream>      // Strep #1
#include <iomanip>
using namespace std;

int main()
{
    float sum = 0;
   float number = 0;
   int count = 0;
   ifstream inFile;

    inFile.open("c:\\numbers\\numbers.txt");
    
if (inFile.fail())
{
    cout << "Error!... Now closing.\n";
    exit(EXIT_FAILURE);
}
while (!inFile.eof())
{
    inFile >> number;
    sum += number;
    count++;
}

inFile.close();
cout << fixed << setprecision(2) << "The average for all numbers is " << sum / float(count) << endl;
    
return 0;

}

*/