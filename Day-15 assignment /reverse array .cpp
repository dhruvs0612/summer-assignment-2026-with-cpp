#include <iostream>
using namespace std;

int main()
{
    int a[5], b;

    cout << "Enter 5 numbers:\n";

    for (b = 0; b < 5; b++)
    {
        cin >> a[b];
    }

    cout << "Reverse array:\n";

    for (b = 4; b >= 0; b--)
    {
        cout << a[b] << " ";
    }

    return 0;
}
