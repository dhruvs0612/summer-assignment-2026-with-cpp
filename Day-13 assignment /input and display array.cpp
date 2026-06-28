#include <iostream>
using namespace std;

int main()
{
    int n[5], i;

    cout << "Enter 5 numbers:\n";

    for (i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    cout << "Numbers are:\n";

    for (i = 0; i < 5; i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}
