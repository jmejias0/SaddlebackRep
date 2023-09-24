#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node *next;
        Node *prev;
};

void printForward(Node* head);
void printBackward(Node* head);

int main()
{
    Node* tail;
    Node* head;
    
    //1. Create a new node (first node of the list)
    Node* node = new Node();

    //2. Assing a value to the node
    node->value = 4;

    //3. Assing values to next and prev = NULL
    node->next = NULL;
    node->prev = NULL;

    //4. Because is the first element of the list is head and tail of the list (first and last)
    head = node;
    tail = node;

    //Create a second node of the linked list
    //1. Create a new node
    node = new Node();

    //2. Assing a value to the node
    node->value = 5; 

    //3. Assing to NULL to next->next and node->prev to tail 
    node->next = NULL;
    node->prev = tail;
    
    //4. Assing value to tail-> next to node
    tail->next = node;

    //5. new tail of the list
    tail = node;

    node = new Node();
    node->value = 6;
    node->next = NULL;
    node->prev = tail;
    tail->next = node;
    tail = node;

    node = new Node();
    node->value = 7;
    node->next = NULL;
    node->prev = tail;
    tail->next = node;
    tail = node;

    node = new Node();
    node->value = 8;
    node->next = NULL;
    node->prev = tail;
    tail->next = node;
    tail = node;

    printBackward(tail);

    cin.get();
}

void printForward(Node* head)
{
    Node* traverser = head;
    while(traverser->next != NULL)
    {
        cout << traverser->value << endl;
        traverser = traverser->next;
    }
}

void printBackward(Node* tail)
{
    Node* traverser = tail;
    while(traverser->next != NULL)
    {
        cout << traverser->value << endl;
        traverser = traverser->prev;
    }
}