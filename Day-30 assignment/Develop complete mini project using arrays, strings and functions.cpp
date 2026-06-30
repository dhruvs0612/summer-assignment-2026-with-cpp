#include <iostream>
using namespace std;

char x[3][20];
int y[3];

void in()
{
    int i;

    for (i = 0; i < 3; i++)
    {
        cout << "Enter Name: ";
        cin >> x[i];

        cout << "Enter Marks: ";
        cin >> y[i];
    }
}

void out()
{
    int i;

    cout << "\nStudent Details" << endl;

    for (i = 0; i < 3; i++)
    {
        cout << "Name: " << x[i] << endl;
        cout << "Marks: " << y[i] << endl;
    }
}

int main()
{
    cout << "Mini Student Project" << endl;

    in();
    out();

    return 0;
}
