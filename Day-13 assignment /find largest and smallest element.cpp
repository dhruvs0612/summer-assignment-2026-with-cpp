#include <iostream>
using namespace std;

int main()
{
    int a[5], b, c, d;

    cout << "Enter 5 numbers:\n";

    for (b = 0; b < 5; b++)
    {
        cin >> a[b];
    }

    c = a[0];
    d = a[0];

    for (b = 1; b < 5; b++)
    {
        if (a[b] > c)
            c = a[b];

        if (a[b] < d)
            d = a[b];
    }

    cout << "Largest = " << c << endl;
    cout << "Smallest = " << d;

    return 0;
}
