#include <iostream>
using namespace std;

int main()
{
    int a[5], b, c = 0, d;

    cout << "Enter 5 numbers:\n";

    for (b = 0; b < 5; b++)
    {
        cin >> a[b];
    }

    for (b = 0; b < 5; b++)
    {
        if (a[b] != 0)
        {
            d = a[c];
            a[c] = a[b];
            a[b] = d;
            c++;
        }
    }

    cout << "Array after moving zeroes to end:\n";

    for (b = 0; b < 5; b++)
    {
        cout << a[b] << " ";
    }

    return 0;
}
