#include <iostream>
using namespace std;

int main()
{
    int a;
    char b[20];
    int c;

    cout << "Employee Record" << endl;

    cout << "Enter ID: ";
    cin >> a;

    cout << "Enter Name: ";
    cin >> b;

    cout << "Enter Salary: ";
    cin >> c;

    cout << "\nDetails" << endl;
    cout << "ID: " << a << endl;
    cout << "Name: " << b << endl;
    cout << "Salary: " << c << endl;

    if (c >= 30000)
        cout << "Good Salary";
    else
        cout << "Low Salary";

    return 0;
}
