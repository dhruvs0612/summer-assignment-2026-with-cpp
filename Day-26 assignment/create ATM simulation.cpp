#include <iostream>
using namespace std;

int main()
{
    int x = 5000;
    int y, z;

    cout << "1. Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "Enter choice: ";
    cin >> y;

    if (y == 1)
    {
        cout << "Balance = " << x;
    }
    else if (y == 2)
    {
        cout << "Enter money: ";
        cin >> z;

        x = x + z;

        cout << "Balance = " << x;
    }
    else if (y == 3)
    {
        cout << "Enter money: ";
        cin >> z;

        if (z <= x)
        {
            x = x - z;
            cout << "Balance = " << x;
        }
        else
        {
            cout << "Not Enough Balance";
        }
    }
    else
    {
        cout << "Wrong Choice";
    }

    return 0;
}
