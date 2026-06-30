#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;

    cout << "Salary System" << endl;

    cout << "Enter Salary: ";
    cin >> x;

    cout << "Enter Bonus: ";
    cin >> y;

    z = x + y;

    cout << "Total Salary = " << z << endl;

    if (z >= 30000)
        cout << "High Salary";
    else
        cout << "Low Salary";

    return 0;
}
