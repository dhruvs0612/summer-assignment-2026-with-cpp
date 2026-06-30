#include <iostream>
using namespace std;

int main()
{
    int x[5], y, z, p = 0;

    cout << "Array Menu" << endl;

    cout << "Enter 5 Numbers:" << endl;
    for (y = 0; y < 5; y++)
    {
        cin >> x[y];
    }

    cout << "\n1. Display" << endl;
    cout << "2. Sum" << endl;
    cout << "3. Largest" << endl;
    cout << "Enter Choice: ";
    cin >> z;

    if (z == 1)
    {
        for (y = 0; y < 5; y++)
        {
            cout << x[y] << " ";
        }
    }
    else if (z == 2)
    {
        for (y = 0; y < 5; y++)
        {
            p = p + x[y];
        }

        cout << "Sum = " << p;
    }
    else if (z == 3)
    {
        p = x[0];

        for (y = 1; y < 5; y++)
        {
            if (x[y] > p)
            {
                p = x[y];
            }
        }

        cout << "Largest = " << p;
    }
    else
    {
        cout << "Wrong Choice";
    }

    return 0;
}
