#include <iostream>
using namespace std;

int a(int x)
{
    int y = 1;

    for (int z = 1; z <= x; z++)
    {
        y = y * z;
    }

    return y;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << a(n);

    return 0;
}
