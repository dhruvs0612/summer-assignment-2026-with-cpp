#include <iostream>
using namespace std;

int a(int x)
{
    if (x == 0)
        return 0;

    return (x % 10) + a(x / 10);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum = " << a(n);

    return 0;
}
