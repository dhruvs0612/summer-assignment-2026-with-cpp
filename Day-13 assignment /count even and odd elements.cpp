#include <iostream>
using namespace std;

int main()
{
    int n[5], i, e = 0, o = 0;

    cout << "Enter 5 numbers:\n";

    for (i = 0; i < 5; i++)
    {
        cin >> n[i];
    }

    for (i = 0; i < 5; i++)
    {
        if (n[i] % 2 == 0)
            e++;
        else
            o++;
    }

    cout << "Even = " << e << endl;
    cout << "Odd = " << o;

    return 0;
}
