#include <iostream>
using namespace std;

int a = 0;

void b(int n)
{
    if (n == 0)
        return;

    a = a * 10 + n % 10;
    b(n / 10);
}

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    b(x);

    cout << "Reverse = " << a;

    return 0;
}
