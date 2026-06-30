#include <iostream>
using namespace std;

int main()
{
    int x;
    char y[20];
    int z;

    cout << "Student Record" << endl;

    cout << "Enter Roll No: ";
    cin >> x;

    cout << "Enter Name: ";
    cin >> y;

    cout << "Enter Marks: ";
    cin >> z;

    cout << "\nStudent Details" << endl;
    cout << "Roll No: " << x << endl;
    cout << "Name: " << y << endl;
    cout << "Marks: " << z << endl;

    if (z >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}
