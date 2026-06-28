#include <iostream>
using namespace std;

void f(int a)
{
    int b = 0, c = 1, d;

    for (int e = 1; e <= a; e++)
    {
        cout << b << " ";

        d = b + c;
        b = c;
        c = d;
    }
}

int main()
{
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    f(n);

    return 0;
}
