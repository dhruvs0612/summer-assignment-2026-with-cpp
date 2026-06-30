#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;

    cout << "Bank System" << endl;

    cout << "Enter Account No: ";
    cin >> x;

    cout << "Enter Balance: ";
    cin >> y;

    cout << "Enter Deposit: ";
    cin >> z;

    y = y + z;

    cout << "\nAccount No: " << x << endl;
    cout << "Balance: " << y << endl;

    if (y >= 1000)
        cout << "Active";
    else
        cout << "Low Balance";

    return 0;
}
