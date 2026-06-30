#include <iostream>
using namespace std;

int main()
{
    int x;
    char y[20];
    int z;

    cout << "Inventory System" << endl;

    cout << "Enter Item ID: ";
    cin >> x;

    cout << "Enter Item Name: ";
    cin >> y;

    cout << "Enter Quantity: ";
    cin >> z;

    cout << "\nItem Details" << endl;
    cout << "ID: " << x << endl;
    cout << "Name: " << y << endl;
    cout << "Quantity: " << z << endl;

    if (z > 0)
        cout << "Available";
    else
        cout << "Out of Stock";

    return 0;
}
