#include <iostream>
using namespace std;

int p(int a)
{
    int x = a;
    int y = 0;

    while (a > 0)
    {
        y = y * 10 + a % 10;
        a = a / 10;
    }

    if (x == y)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (p(n))
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome Number";

    return 0;
}
