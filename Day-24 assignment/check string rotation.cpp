#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;

    cout << "Enter first string: ";
    cin >> a;

    cout << "Enter second string: ";
    cin >> b;

    if (a.length() != b.length()) {
        cout << "Not Rotation";
        return 0;
    }

    c = a + a;

    if (c.find(b) != string::npos)
        cout << "Rotation";
    else
        cout << "Not Rotation";

    return 0;
}
