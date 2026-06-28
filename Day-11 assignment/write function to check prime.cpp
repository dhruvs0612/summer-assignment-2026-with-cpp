#include <iostream>
using namespace std;

int p(int a)
{
    if (a <= 1)
        return 0;

    for (int b = 2; b < a; b++)
    {
        if (a % b == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (p(n))
        cout << "Prime Number";
    else
        cout << "Not Prime Number";

    return 0;
}
