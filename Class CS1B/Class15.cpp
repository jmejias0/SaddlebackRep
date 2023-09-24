#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int>numbers{1, 2, 3, 4, 5};

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

cout << "Size: " << numbers.size() << endl
     << "Capacity: " << numbers.capacity() << endl << endl;


    return 0;
}

/*

capacity() int vector, but not list or deque
push_front() in list and deque, but not vector
pop_front() in list and deque, but not vector
subscript operator [] in vector and deque, but not list

4.2 billion memory cells and each int uses 4 cells.    vector<int> = 1.07 billion integers

list<int>numbers{1, 2, 3, 4, 5};

    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    //for (int i = 0; i < numbers.size(); i++)
    

   short int values[5] = {1, 2, 3, 4, 5};
   short int* ptr = values;

   for (int i = 0; i < 5; i++) 
   {
    cout << ptr << '\t' << *ptr << endl;
    ptr++;
   }  

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int>numbers{1, 2, 3, 4, 5};

   cout << "Front: " << numbers.front() << endl
        << "Back: " << numbers.back() << endl << endl;

    numbers.push_front(6);

    cout << "Front: " << numbers.front() << endl
        << "Back: " << numbers.back() << endl;
    
    
    return 0;


list<int>numbers {1, 2, 3, 4, 6};
    
    cout << "Size : " << numbers.size() << endl;
    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl << endl;

    numbers.resize(2);

    cout << "Size : " << numbers.size() << endl;
    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl << endl;



     numbers.clear();
    if (numbers.empty())
    {
        cout << "The list is empty!" << endl;
    }
    else
    {
        cout << "The list is not empty!" << endl;
    }
    //numbers.resize(0);  same as above

    cout << "Size: " << numbers.size() << endl;


    class Example
{
private:
    int id;
public:
    Example()
    {
        id = 0;
    }
    Example(int id)
    {
        this->id = id;
    }
    ~Example(){}
    void showExample()
    {
        cout << id << endl;
    }
    Example getExample()
    {
        Example x4(7);
        return x4;
    }
};

int main()
{
    Example x1;
    Example x2(3);
    Example x3;

    x3 = x1.getExample();

    cout << "x1: ";
    x1.showExample();

    cout << "x2: ";
    x2.showExample();

    cout << "x3: ";
    x3.showExample();
    
    return 0;
}

*/