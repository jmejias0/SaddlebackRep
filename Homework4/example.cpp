#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct Student
{
int id;
char name[30];
char address[30];
char city[30];
char state[30];
char zip[10];
float gpa;
Student * next;
};
typedef Student * ptrType;
bool insertRecord(ptrType & head);
void displayRecords(const ptrType head);
int main()
{
char answer;
do {
system("cls"); // FOR REPL  cout << "\e[2J\e[0;0H";
ptrType head = NULL;
cout << "Enter a student record (-1 to quit): \n\n";
bool doAgain = true;
do {
doAgain = insertRecord(head);
} while (doAgain == true);
cout << "Display all records Y/N? ";
cin >> answer;
if (toupper(answer)=='Y')
displayRecords(head);
cout << "Do again Y/N? ";
cin >> answer;
} while (toupper(answer)=='Y');
return 0;
}
// ==== insertRecord function ==================================
bool insertRecord(ptrType & head)
{
ptrType temp = new(Student);
bool doAgain = true;
int idNum = 0;
cout << setw(10)<< "ID: ";
cin >> idNum;
if (idNum == -1)

doAgain = false;
else
{
temp->id = idNum;
cin.ignore();
cout << setw(10)<< "Name: ";
cin.getline(temp->name, 30);
cout << setw(10)<< "Address: ";
cin.getline(temp->address, 30);
cout << setw(10)<< "City: ";
cin.getline(temp->city, 30);
cout << setw(10)<< "State: ";
cin.getline(temp->state, 30);
cout << setw(10)<< "Zip: ";
cin.getline(temp->zip, 10);
cout << setw(10)<< "GPA: ";
cin >> temp->gpa;
cout << endl;
doAgain = true;
temp->next = head;
head = temp;
}
return doAgain;
}
// =============================================================



// ==== displayRecords function ================================
void displayRecords(const ptrType head)
{
system("cls");
if (head == NULL)
{
cout << "List is empty.\n";
return;
}
ptrType temp = head;
while (temp != NULL)
{
cout << fixed << showpoint << setprecision(2);
cout << setw(10) << "ID#:" << setw(20) << temp->id << endl;
cout << setw(10) << "Name:" << setw(20) << temp->name << endl;
cout << setw(10) << "Address:" << setw(20) << temp->address << endl;
cout << setw(10) << "City:" << setw(20) << temp->city << endl;
cout << setw(10) << "State:" << setw(20) << temp->state << endl;
cout << setw(10) << "Zip:" << setw(20) << temp->zip << endl;
cout << setw(10) << "GPA:" << setw(20) << temp->gpa << endl << endl;
temp = temp->next;
}
}