#include <iostream>
using namespace std;

int main()
{
    int x[3];
    char y[3][20];
    int z;

    cout << "Student Record System" << endl;

    for (z = 0; z < 3; z++)
    {
        cout << "Enter Name: ";
        cin >> y[z];

        cout << "Enter Marks: ";
        cin >> x[z];
    }

    cout << "\nStudent Details" << endl;

    for (z = 0; z < 3; z++)
    {
        cout << "Name: " << y[z] << endl;
        cout << "Marks: " << x[z] << endl;
    }

    return 0;
}
