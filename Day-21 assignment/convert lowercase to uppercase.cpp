#include <iostream>
using namespace std;

int main() {
    char a[100];
    int n = 0;

    cout << "Enter string: ";
    cin.getline(a, 100);

    while (a[n] != '\0') {
        if (a[n] >= 'a' && a[n] <= 'z') {
            a[n] = a[n] - 32;
        }
        n++;
    }

    cout << "Uppercase string: " << a;

    return 0;
}
