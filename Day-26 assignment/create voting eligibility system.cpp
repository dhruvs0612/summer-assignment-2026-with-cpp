#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter age: ";
    cin >> x;

    if (x >= 18)
    {
        cout << "Eligible for Voting";
    }
    else
    {
        cout << "Not Eligible for Voting";
    }

    return 0;
}
