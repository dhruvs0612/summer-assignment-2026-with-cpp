#include <iostream>
using namespace std;

int main()
{
    int x, b[20], k = 0;

    cout << "Enter decimal number: ";
    cin >> x;

    while (x > 0)
    {
        b[k] = x % 2;
        x = x / 2;
        k++;
    }

    cout << "Binary = ";

    for (int i = k - 1; i >= 0; i--)
    {
        cout << b[i];
    }

    return 0;
}
