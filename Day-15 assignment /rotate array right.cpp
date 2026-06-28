#include <iostream>
using namespace std;

int main()
{
    int n[5], i, x;

    cout << "Enter 5 numbers:\n";

    for (i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    x = n[4];

    for (i = 4; i > 0; i--)
    {
        n[i] = n[i - 1];
    }

    n[0] = x;

    cout << "Array after right rotation:\n";

    for (i = 0; i < 5; i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}
