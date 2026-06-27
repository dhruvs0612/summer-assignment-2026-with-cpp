#include <iostream>
using namespace std;

int a(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return a(n - 1) + a(n - 2);
}

int main()
{
    int x;

    cout << "Enter number of terms: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cout << a(i) << " ";
    }

    return 0;
}
