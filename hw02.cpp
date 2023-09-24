#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

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

void displayMenu();
void initList(Student*& student);
void addRecord(Student*& head, Student*& tail, const Student& student);
void deleteRecord(Student*& head, Student*& tail, int id);
void deleteRecordByName(Student*& head, Student*& tail, const std::string& lastname, const std::string& firstname);
void displayRecordById(const Student* head, int id);
void displayRecordByName(const Student* head, const std::string& lastname, const std::string& firstname);
void displayAllRecords(const Student* head);
void sortRecordsByName(Student*& head, Student*& tail);
void saveAndExit();


int main()
{
    Student student;
    Student* head = nullptr;
    Student* tail = nullptr;

    int choice = 0;

    do {
        std::cout << "Enter your choice: ";
        std::cout << "1. Add Record\n2. Delete Record\n3.Display content\n4.Sort DB by name\n5. Save and Exit\n" << std::endl;
        std::cin >> choice;

            switch (choice) {
                case1: 
                addRecord(&head);
                break;
                case 2:
                deleteRecord(&head);
                break;
                case 3:
                displayRecord(head);
                break;
                case 4:
                sortRecordsByName(head);
                break;
                case 5:
                saveAndExit(head);
                break;
                default:
                std::cout << "Invalid choice. try again." << std::endl;
                } 
    }while(choice != 5);

    return 0;
}  

// Update createStudent to allocate memory for strings
struct Student* createStudent() {
    struct Student* newStudent = new Student;
    if (newStudent == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Allocate memory for strings and initialize to NULL
    newStudent->lastname == " ";
    newStudent->firstname = "";
    newStudent->email = nullptr;
    newStudent->phone = nullptr;
    newStudent->street = nullptr;
    newStudent->city = nullptr;
    newStudent->state = nullptr;
    newStudent->zip = nullptr;
    newStudent->major = nullptr;
    newStudent->rank = nullptr;

    // Rest of the code remains the same
    // ...

    return newStudent;
}

// Update addRecord to allocate memory for strings
void addRecord(struct Student** head) {
    struct Student* newStudent = createStudent();

    // Rest of the code remains the same
    // ...
}

// Update deleteRecord to free memory for deleted record
void deleteRecord(struct Student** head) {
    // Rest of the code remains the same
    // ...

    while (current != NULL) {
        if ((choice == 1 && current->id == idToDelete) ||
            (choice == 2 && strcmp(current->lastname, nameToDelete) == 0)) {
            found = 1;
            if (current->prev == NULL) {
                *head = current->next;
                if (current->next != NULL) {
                    current->next->prev = NULL;
                }
            } else {
                current->prev->next = current->next;
                if (current->next != NULL) {
                    current->next->prev = current->prev;
                }
            }

            // Free memory for strings
            free(current->lastname);
            free(current->firstname);
            free(current->email);
            free(current->phone);
            free(current->street);
            free(current->city);
            free(current->state);
            free(current->zip);
            free(current->major);
            free(current->rank);

            free(current); // Free memory for the struct itself
            printf("Record deleted successfully.\n");
            break;
        }

        // Rest of the code remains the same
        // ...
    }
}

// Update displayRecord to handle char* strings
void displayRecord(struct Student* head) {
    // Rest of the code remains the same
    // ...

    printf("ID: %d\n", current->id);
    printf("Last Name: %s\n", current->lastname);
    printf("First Name: %s\n", current->firstname);
    printf("Email: %s\n", current->email);
    printf("Phone: %s\n", current->phone);
    printf("Street: %s\n", current->street);
    printf("City: %s\n", current->city);
    printf("State: %s\n", current->state);
    printf("ZIP: %s\n", current->zip);
    printf("Major: %s\n", current->major);
    printf("Rank: %s\n", current->rank);
    printf("GPA: %.2f\n", current->gpa);

    // Rest of the code remains the same
    // ...
}

// Update freeDatabase to free memory for char* strings
void freeDatabase(struct Student* head) {
    struct Student* current = head;
    while (current != NULL) {
        struct Student* temp = current;
        current = current->next;

        // Free memory for strings
        free(temp->lastname);
        free(temp->firstname);
        free(temp->email);
        free(temp->phone);
        free(temp->street);
        free(temp->city);
        free(temp->state);
        free(temp->zip);
        free(temp->major);
        free(temp->rank);

        free(temp); // Free memory for the struct itself
    }
}