#include <iostream>
using namespace std;

int main() {
    char a[100];
    int n = 0;

    cout << "Enter string: ";
    cin.getline(a, 100);

    while (a[n] != '\0') {
        n++;
    }

    cout << "Reverse string: ";
    for (n = n - 1; n >= 0; n--) {
        cout << a[n];
    }

    return 0;
}
