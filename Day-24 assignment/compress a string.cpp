#include <iostream>
using namespace std;

int main() {
    char a[100];
    int i = 0, b;

    cout << "Enter string: ";
    cin.getline(a, 100);

    while (a[i] != '\0') {
        b = 1;

        while (a[i] == a[i + 1]) {
            b++;
            i++;
        }

        cout << a[i] << b;
        i++;
    }

    return 0;
}
