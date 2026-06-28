#include <iostream>
using namespace std;

int main()
{
    int n[4], i, s = 0, x;

    cout << "Enter 4 numbers (from 1 to 5):\n";

    for (i = 0; i < 4; i++)
    {
        cin >> n[i];
        s = s + n[i];
    }

    x = 15 - s;

    cout << "Missing number = " << x;

    return 0;
}
