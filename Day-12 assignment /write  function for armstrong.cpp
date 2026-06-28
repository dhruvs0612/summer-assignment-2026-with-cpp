#include <iostream>
using namespace std;

int a(int b)
{
    int c = b;
    int d = 0;
    int e;

    while (b > 0)
    {
        e = b % 10;
        d = d + e * e * e;
        b = b / 10;
    }

    if (c == d)
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
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
