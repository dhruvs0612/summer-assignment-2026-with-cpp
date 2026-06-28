#include <iostream>
using namespace std;

int main()
{
    int n[5], i, j, c, m = 0, x;

    cout << "Enter 5 numbers:\n";

    for (i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    for (i = 0; i < 5; i++)
    {
        c = 0;

        for (j = 0; j < 5; j++)
        {
            if (n[i] == n[j])
            {
                c++;
            }
        }

        if (c > m)
        {
            m = c;
            x = n[i];
        }
    }

    cout << "Maximum Frequency Element = " << x << endl;
    cout << "Frequency = " << m;

    return 0;
}
