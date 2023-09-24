#include <iostream>
#include <string>

struct Student
{
    int id;
    std::string lastName;
    std::string firstName;
    std::string email;
    int phone;
    std::string street;
    std::string city;
    std::string state;
    int zip;
    std::string major;
    std::string rank;
    float gpa;
    Student* next;
    Student* prev;
};

void initList(Student*& head, Student*& tail);
void addRecord(Student*& head, int id, std::string& lastName, std::string firstName, std::string email, int phone, std::string street, std::string city, std::string state, int zip, std::string major, std::string rank, float gpa);

int main()
{
    int choice = 0;
    int numRecords = 0;
    int item = 0; 
    Student* head;
    Student* tail;
    Student* student;

    student = new Student;
    initList(head, tail);
    insertRecord(&head, )

    std::cout << "How many records do you want to insert: " <<std::endl;
    std::cin >> numRecords;   

    for (int i = 1; i < numRecords; i++)
    {
        std::cout << "Enter next record: " << std::endl;
        std::cout << "ID: ";
        std::cin >> student->id;
        std::cin.ignore();
        std::cout << "Last name: ";
        std::cin >> student->lastName;
        std::getline(std::cin, student->lastName);
        student = new Student; 
        student->id = item;
        student->next = nullptr;
        student->prev = tail;
        tail->next = student;
        tail = tail->next;
    
    }

    return 0;
}


{
    Student* firstNode = new Student;
    while (traverser != nullptr){
        std::cout << traverser->id << std::endl;
        traverser = traverser->next;
    }
}

void initList(Student*& head, Student*& tail)
{
    student = new Student;
    std::cout << "Enter the first record: " << std::endl;
    std::cout << "ID: ";
    std::cin >> student->id;
    std::cin.ignore();
    std::cout << "Last name: ";
    std::getline(std::cin, student->lastName);
    std::cout << std::endl;

    student->id = item;
    node->next = nullptr;
    node->prev = nullptr;
    head = node;
    tail = node;
}