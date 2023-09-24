#include <iostream>
using namespace std;

class Node {
    public:
        int Value;
        Node* Next;
};

void printList(Node* n);
void insertAtFront(Node** head, int newValue);
void insertAtEnd(Node** head, int newValue);
void insertAfter(Node* prev, int newValue);

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    insertAfter(head, -1);
    insertAfter(second, -2);
    printList(head);

   return 0;
}

void printList(Node* n)
{
    while (n != NULL)  
    {
        cout << n->Value << endl;
        n = n->Next;
    }
}

void insertAtFront(Node** head, int newValue)
{
    //1. prepare a newNode
    Node* newNode = new Node();
    newNode->Value = newValue;
    //2. Put it in front of the current head
    newNode->Next = *head;
    //3. Move head of the list to point the newNode
    *head = newNode;
}

void insertAtEnd(Node** head, int newValue)
{
    //1.Prepare a new node
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;
    //2. Check If linked list is empty, newNode will be a head node
    if (*head = NULL)
    {
        *head = newNode;
        return;
    }
    //3. Find the last node
    Node* last = *head;
    while (last->Next != NULL){
        last = last->Next;
    } 
    //4. Insert newNode after last node (at the end)
    last->Next = newNode;
} 


void insertAfter(Node* prev, int newValue)
{
    //1. Check if previous node is null
    if(prev == NULL) {
        cout << "Previus can not be NULL";
        return;
    }
    //2. Preapre newNode
    Node* newNode = new Node();
    newNode->Value = newValue;

    //3. Insert newNode after previous
    newNode->Next = prev->Next;
    prev->Next = newNode;
}