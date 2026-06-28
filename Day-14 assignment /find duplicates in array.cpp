#include <iostream>
using namespace std;

int main()
{
    int n[5], i, j;

    cout << "Enter 5 numbers:\n";

    for (i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    cout << "Duplicate elements are:\n";

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (n[i] == n[j])
            {
                cout << n[i] << " ";
                break;
            }
        }
    }

    return 0;
}
