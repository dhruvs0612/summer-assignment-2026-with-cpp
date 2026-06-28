#include <iostream>
using namespace std;

int a(int x, int y)
{
    return x + y;
}

int main()
{
    int b, c;

    cout << "Enter first number: ";
    cin >> b;

    cout << "Enter second number: ";
    cin >> c;

    cout << "Sum = " << a(b, c);

    return 0;
}
