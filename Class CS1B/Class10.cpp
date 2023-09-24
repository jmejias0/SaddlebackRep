#include "Cat.h"

int main()
{
    Cat myCat;
    Cat yourCat("Tom", 6);

    cout << "My cat:\n";
    myCat.showCat();

    cout << "Your cat:\n";
    yourCat.showCat();

    // myCat.setName("Fluffy");
    // myCat.setWeight(3);

    // cout << "My cat after the \"set\" function:\n";
    // myCat.showCat();

    // cout << "My cat's weight is " << myCat.getWeight() << ".\n\n";

    // cout << "Your cat's name is " << yourCat.getName() << ".\n\n";

    return 0;
    //int number = 4;
    //int* ptr = &number;
    //cout << *ptr << endl;


    // Cat* ptr = new Cat("Tom", 4);
    // cout << "Name: "<< ptr->getName() << endl;
    // cout << "Weight: " << ptr->getWeight() << endl << endl;

    
    

    
}

/*
 char answer;
    Cat myCat;   // compile time memory allocation

    cout << "Do you want to create a Cat object on the heap (Y or N)?";
    cin >> answer;

    if (toupper(answer) == 'Y')
    {
        Cat* ptr = new Cat;     //(dynamic) memory allocation (on the heap)
*/
/*
 int weight;
   string name;
   const int SIZE =3;
   Cat cats[SIZE];

   cout << "Enter " << SIZE << " cats.\n";

   for (int i = 0; i < SIZE; i++)
   {
        cout << "#" << i + 1 << ":\n"
             << "Enter Name:  ";

        getline(cin,name);
        cats[i].setName(name);
        
        cout << "Enter weight: ";
        cin >> weight;
        cats[i].setWeight(weight);
        cin.ignore();

        system("cls");
    }

    cout << "Here is the list of cats:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cats[i].showCat();
    }
*/

/*
    Cat myCat;
    Cat  yourCat("Tom", 6);

    cout << "My cat:\n";
    myCat.showCat();

    cout << "Your cat:\n";
    yourCat.showCat();

    myCat.setName(name:"Fluffy");
    myCat.setWeight(weight:3);

    cout << "My cat after the \"set\" function:\n";
    myCat.showCat();

    cout << "My cat's weight is " << myCat.getWeight() << ".\n\n";

    cout << "Your cat's name is " << yourCat.getName() << ".\n\n";
*/

/*
    void setCat(Cat& cat);      // Formal parameter in a function type never becomes a variable
    Cat myCat;

    cout << "My cat:\n";
    myCat.showCat();

    //Cat  yourCat("Tom", 6);

    setCat(myCat);          // Actual parameter (argument)

      cout << "\n\nMy cat:\n";
    myCat.showCat();
    

    return 0;

}
// Formal parameter in a function heading becomes a variable when the function gets called
void setCat(Cat& cat)
{
    cat.setName("Fluffy");
    cat.setWeight(3);

    cout << "My cat: (displayed in the function):\n";
    cat.showCat();
*/