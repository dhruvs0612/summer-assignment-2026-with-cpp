#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;

    cout << "Enter a number: ";
    cin >> a;

    while (a != 0)
    {
        b = b + (a % 2);
        a = a / 2;
    }

    cout << "Set bits = " << b;

    return 0;
}
