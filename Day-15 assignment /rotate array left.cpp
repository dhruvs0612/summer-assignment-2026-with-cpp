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

    x = n[0];

    for (i = 0; i < 4; i++)
    {
        n[i] = n[i + 1];
    }

    n[4] = x;

    cout << "Array after left rotation:\n";

    for (i = 0; i < 5; i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}
