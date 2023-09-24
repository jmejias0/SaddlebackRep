#include "Box.h"

void showBox(Box& box);

int main()
{
    const int SIZE = 5;
    Box boxes[SIZE];

    cout << "Enter " << SIZE << " boxes:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "#" << i + 1 << ":\n"
             << "width: ";
        cin >> boxes[i].width;
        cout << "Height: ";
        cin >> boxes[i].height;
        cout << "Length: ";
        cin >> boxes[i].length;
    }
    system("cls");

    for (int i = 0; i < SIZE; i++)
    {
        cout << "#" << i + 1 << ":\n";
        showBox(boxes[i]);
    }
    return 0;
}

//------------------
void showBox(Box& box)
{
    cout << "Width: " << box.width << endl
         << "Height: " << box.height << endl
         << "Length: " << box.length << endl << endl;
}
