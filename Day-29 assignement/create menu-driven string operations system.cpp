#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char x[50];
    int y;

    cout << "String Menu" << endl;

    cout << "Enter String: ";
    cin >> x;

    cout << "\n1. Length" << endl;
    cout << "2. Reverse" << endl;
    cout << "3. Uppercase" << endl;
    cout << "Enter Choice: ";
    cin >> y;

    if (y == 1)
    {
        cout << "Length = " << strlen(x);
    }
    else if (y == 2)
    {
        strrev(x);
        cout << "Reverse = " << x;
    }
    else if (y == 3)
    {
        strupr(x);
        cout << "Uppercase = " << x;
    }
    else
    {
        cout << "Wrong Choice";
    }

    return 0;
}
