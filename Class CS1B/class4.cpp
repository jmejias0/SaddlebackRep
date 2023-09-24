#include "Student.h"

typedef Student*& ptype; // (type define) typedef creates an &quot;alias&quot; for an existing data type.

void insertStudent(ptype head);
void showList(ptype head);
void deleteStudent(Student*& head);

int main()
{

    char answer= '\0';
    Student* head = nullptr;

    cout << "Eenter a student record (Y or N)? " << endl;
    cin >> answer;

    while (toupper(answer) == 'Y')
    {
        insertStudent(head);
        cout << "Isert another student into the lis (N/Y)? ";
        cin >> answer;
        system("cls");
    }
    cout <<"Here is the list of students: " << endl;
    showList(head);
    
    system("pause");
    system("cls");

    cout << "Do you want to remove a student from the list (Y or N)? " << endl;
    cin >> answer;

    if (toupper(answer) == 'Y')
    {
        deleteStudent(head);
    }
    system("cls");

    if (head != nullptr)
    {
        cout <<"Here is the list of students after the student has been removed: " << endl;
        showList(head);
    }
    else
    {
        cout << "The list is empty." << endl << endl;
    }



 return 0;       
}

//============================================================================
void insertStudent(ptype head)
{
    Student* temp = new Student;
    
    cout << "ID: ";
    cin >> temp->id;
    cout << "Name: ";
    cin.ignore();
    getline(cin, temp->name);
    temp->next = head;
    
    head = temp;
}

//============================================================================
void showList(ptype head)
{
    Student* temp = head;

    while (temp != nullptr)
    {
        cout << temp->id << endl;
        cout << temp->name << endl << endl;
        
        temp = temp->next; 
    }
}


//============================================================================
void deleteStudent(Student*& head)
{
    Student* lead = head;
    Student* follow = head;
    int idNum;
    
    cout << "Enter the Id of the student to be removed from the list: ";
    cin >> idNum;
    
    while (lead->id != idNum && lead->next != nullptr)
    {
        follow = lead;
        lead = lead->next;
    }
    // Check to see if lead points the last node
    if (lead->next == nullptr)
    {
        // Check to see if it found it
        if (lead->id == idNum)
        {
        follow->next = lead->next;
        delete lead;
        }
        else
        {
            cout << "ID# " << idNum << " is not in the list.\n";
        }
    }
    // Check to see if it's the first node in the list
    else if (lead == head)
    {
        head = head->next;
        delete lead;
    }
    // If it;s not the last one, and not the first one, it must be one in between first and last
    else
    {
        follow->next = lead->next;
        delete lead;
    }
}