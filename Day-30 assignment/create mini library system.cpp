#include <iostream>
using namespace std;

int main()
{
    char x[3][20];
    int y;

    cout << "Mini Library System" << endl;

    for (y = 0; y < 3; y++)
    {
        cout << "Enter Book Name: ";
        cin >> x[y];
    }

    cout << "\nBook List" << endl;

    for (y = 0; y < 3; y++)
    {
        cout << x[y] << endl;
    }

    return 0;
}
