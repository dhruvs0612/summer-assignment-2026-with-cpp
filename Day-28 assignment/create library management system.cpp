#include <iostream>
using namespace std;

int main()
{
    int a;
    char c[20];
    int b;

    cout << "Library System" << endl;

    cout << "Book ID: ";
    cin >> a;

    cout << "Book Name: ";
    cin >> c;

    cout << "Books: ";
    cin >> b;

    cout << "\nBook Details" << endl;
    cout << "ID: " << a << endl;
    cout << "Name: " << c << endl;
    cout << "Books: " << b << endl;

    if (b > 0)
        cout << "Available";
    else
        cout << "Not Available";

    return 0;
}
