#include <iostream>
using namespace std;

int main()
{
    int x;
    char y[20];
    int z;

    cout << "Contact System" << endl;

    cout << "Enter ID: ";
    cin >> x;

    cout << "Enter Name: ";
    cin >> y;

    cout << "Enter Number: ";
    cin >> z;

    cout << "\nDetails" << endl;
    cout << "ID: " << x << endl;
    cout << "Name: " << y << endl;
    cout << "Number: " << z << endl;

    if (z > 0)
        cout << "Saved";
    else
        cout << "Invalid";

    return 0;
}
