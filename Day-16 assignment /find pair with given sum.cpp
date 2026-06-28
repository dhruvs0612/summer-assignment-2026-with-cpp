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

    cout << "Enter sum: ";
    cin >> d;

    cout << "Pairs are:\n";

    for (b = 0; b < 5; b++)
    {
        for (c = b + 1; c < 5; c++)
        {
            if (a[b] + a[c] == d)
            {
                cout << a[b] << " " << a[c] << endl;
            }
        }
    }

    return 0;
}
