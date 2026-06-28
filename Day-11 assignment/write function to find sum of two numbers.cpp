#include <iostream>
using namespace std;

int s(int a, int b)
{
    return a + b;
}

int main()
{
    int n1, n2;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    cout << "Sum = " << s(n1, n2);

    return 0;
}
