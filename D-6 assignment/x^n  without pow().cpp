#include <iostream>
using namespace std;

int main()
{
    int x, n, a = 1;

    cout << "Enter base: ";
    cin >> x;

    cout << "Enter power: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        a = a * x;
    }

    cout << "Answer = " << a;

    return 0;
}
