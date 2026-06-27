#include <iostream>
using namespace std;

int f(int a)
{
    if (a == 0 || a == 1)
        return 1;

    return a * f(a - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << f(n);

    return 0;
}
