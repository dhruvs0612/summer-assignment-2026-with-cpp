#include <iostream>
using namespace std;

int main()
{
    int n[5], a = 0, i;
    float b;

    cout << "Enter 5 numbers:\n";

    for (i = 0; i < 5; i++)
    {
        cin >> n[i];
        a = a + n[i];
    }

    b = a / 5.0;

    cout << "Sum = " << a << endl;
    cout << "Average = " << b;

    return 0;
}
