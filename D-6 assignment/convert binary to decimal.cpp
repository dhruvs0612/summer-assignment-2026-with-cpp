#include <iostream>
using namespace std;

int main()
{
    int n, x = 0, y = 1, z;

    cout << "Enter binary number: ";
    cin >> n;

    while (n > 0)
    {
        z = n % 10;
        x = x + z * y;
        y = y * 2;
        n = n / 10;
    }

    cout << "Decimal = " << x;

    return 0;
}
