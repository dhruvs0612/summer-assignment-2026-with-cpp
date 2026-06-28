#include <iostream>
using namespace std;

int main()
{
    int n[5], i, x, c = 0;

    cout << "Enter 5 numbers:\n";

    for (i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    cout << "Enter number: ";
    cin >> x;

    for (i = 0; i < 5; i++)
    {
        if (n[i] == x)
            c++;
    }

    cout << "Frequency = " << c;

    return 0;
}
