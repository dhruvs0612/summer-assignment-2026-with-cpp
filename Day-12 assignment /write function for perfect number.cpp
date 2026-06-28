#include <iostream>
using namespace std;

int a(int x)
{
    int y = 0;

    for (int z = 1; z < x; z++)
    {
        if (x % z == 0)
            y = y + z;
    }

    if (y == x)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (a(n))
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";

    return 0;
}
