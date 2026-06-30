#include <iostream>
using namespace std;

int main()
{
    int x, y, z, p, q, r, s;

    cout << "Marksheet System" << endl;

    cout << "English: ";
    cin >> x;

    cout << "Hindi: ";
    cin >> y;

    cout << "Maths: ";
    cin >> z;

    cout << "Science: ";
    cin >> p;

    cout << "SST: ";
    cin >> q;

    r = x + y + z + p + q;
    s = r / 5;

    cout << "\nTotal = " << r << endl;
    cout << "Percentage = " << s << "%" << endl;

    if (s >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    return 0;
}
