#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    int a;

    cout << "Calculator Menu" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    cout << "Enter Choice: ";
    cin >> a;

    cout << "Enter First Number: ";
    cin >> x;

    cout << "Enter Second Number: ";
    cin >> y;

    if (a == 1)
    {
        z = x + y;
        cout << "Answer = " << z;
    }
    else if (a == 2)
    {
        z = x - y;
        cout << "Answer = " << z;
    }
    else if (a == 3)
    {
        z = x * y;
        cout << "Answer = " << z;
    }
    else if (a == 4)
    {
        z = x / y;
        cout << "Answer = " << z;
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}
