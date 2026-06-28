#include <iostream>
using namespace std;

int main()
{
    int n[5], i, x, y = 0;

    cout << "Enter 5 numbers:\n";

    for (i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    cout << "Enter number to search: ";
    cin >> x;

    for (i = 0; i < 5; i++)
    {
        if (n[i] == x)
        {
            y = 1;
            break;
        }
    }

    if (y == 1)
        cout << "Number Found";
    else
        cout << "Number Not Found";

    return 0;
}
