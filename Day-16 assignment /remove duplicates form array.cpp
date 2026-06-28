#include <iostream>
using namespace std;

int main()
{
    int a[5], b, c, d = 5;

    cout << "Enter 5 numbers:\n";

    for (b = 0; b < 5; b++)
    {
        cin >> a[b];
    }

    cout << "Array after removing duplicates:\n";

    for (b = 0; b < d; b++)
    {
        for (c = b + 1; c < d; c++)
        {
            if (a[b] == a[c])
            {
                for (int e = c; e < d - 1; e++)
                {
                    a[e] = a[e + 1];
                }
                d--;
                c--;
            }
        }
    }

    for (b = 0; b < d; b++)
    {
        cout << a[b] << " ";
    }

    return 0;
}
