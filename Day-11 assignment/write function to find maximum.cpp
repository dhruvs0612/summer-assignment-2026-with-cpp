#include <iostream>
using namespace std;

int a(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int b, c;

    cout << "Enter first number: ";
    cin >> b;

    cout << "Enter second number: ";
    cin >> c;

    cout << "Maximum = " << a(b, c);

    return 0;
}
