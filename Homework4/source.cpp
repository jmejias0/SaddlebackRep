//====================================================================
// Attached: HW #4f, HW #4f box.h
//
//====================================================================
// File: HW #4f
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================
#include "Box.h"

typedef Box * ptrType;

bool insertBox(ptrType & head);
void displayBox(const ptrType head);
void deleteBox(ptrType &head, int box);

int main()
{
    int boxID = 0;
    char answer;

    do
    {
        system("cls");

         ptrType head = NULL;

         cout << "Enter the specifications of different types of boxes. " << endl;
         cout << "Include the number of boxes presently in inventory." << endl;
         cout << "Enter boxes - (-1 to quit): " << endl << endl; 
         bool again = true;
        
         do
        {
            again = insertBox(head);
        } while (again == true);

        cout << "\nDo you like to see the list of boxes Y/N? ";
        cin >> answer;

        if (toupper(answer) == 'Y')
            displayBox(head);

        cout << "Enter the ID of the box to be deleted: ";
        cin >> boxID;

        deleteBox(head, boxID);
        system("cls");
        displayBox(head);
        

        cout << "Do again Y/N? ";
        cin >> answer;
    } while (toupper(answer) == 'Y');

    return 0;
}



// ======= InsertBox =================================================
// This function promtp the user to enter different tupes of boxex.
//====================================================================
bool insertBox(ptrType & head)
{
    ptrType temp = new(Box);
    bool again = true;
    int id = 0;

    cout << setw(10) <<"ID number: ";
    cin >> id;

    if (id == -1)
    {
        cout << endl;
        again = false;
    }
    else
    {
        temp->idNumber = id;
        cin.ignore();
        
        cout << setw(10) << "Width: ";
        cin >> temp->width;
        
        
        cout << setw(10) << "Height: ";
        cin >> temp->height;
        
        cout << setw(10) << "Length: ";
        cin >> temp->length;
         cout << endl;

         again = true;

         temp->next = head;
         head = temp;
    }
    return again;
}
//====================================================================



//============ DisplayBox ============================================
// Thid function display a list of boxes, entered by the user
//====================================================================
void displayBox(const ptrType head)
{
    system("cls");
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
    ptrType temp = head;

    cout << "Types of boxes: " << endl << endl;
        cout << fixed << showpoint << setprecision(2);
        cout << left << setw(10)<< "ID#:" << setw(10) << "Width:" << setw(10) << "Height:" << setw(10) << "Length:" << endl; 
        cout << left << "-------------------------------------" << endl;
    while (temp != NULL)
    {
        cout << left << setw(10) << temp->idNumber;
        cout << left << setw(10) << temp->width;
        cout << left << setw(10) <<  temp->height; 
        cout << left << setw(10) << temp->length;
        cout << endl;
        temp = temp->next;
    }
    cout << endl;
}
//====================================================================



//========== deleteBox ===============================================
// This function prompts the user to delete a box from the list of boxes
//====================================================================
void deleteBox(ptrType &head, int boxID)
{
      if (head == nullptr) {
        cout << "List is empty. No boxes to delete." << endl;
        return;
    }
    
    if (head->idNumber == boxID) {
        Box* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
    Box* current = head;
    Box* prev = nullptr;
    
    while (current != nullptr && current->idNumber != boxID) {
        prev = current;
        current = current->next;
    }
    
    if (current == nullptr) {
        cout << "Box with ID " << boxID << " not found." << endl;
        return;
    }
    
    prev->next = current->next;
    delete current;
}
//====================================================================