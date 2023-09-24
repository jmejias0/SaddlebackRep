// Source.cpp

#include "Bicycle.h"

int main()
{
    Bicycle myBike ( 2015, "Schwinn", "Blue", false );
    Bicycle yourBike;

    cout << "My bike:\n";
    myBike.displayBike();

    cout << "\n\nYour bike:\n";
    yourBike.displayBike();

    return 0;
}

/*
Output

*/