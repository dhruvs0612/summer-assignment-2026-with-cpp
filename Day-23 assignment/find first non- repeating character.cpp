#include <iostream>
using namespace std;

int main() {
    char a[100];
    int x, y, n;

    cout << "Enter string: ";
    cin.getline(a, 100);

    for (x = 0; a[x] != '\0'; x++) {
        n = 0;

        for (y = 0; a[y] != '\0'; y++) {
            if (a[x] == a[y]) {
                n++;
            }
        }

        if (n == 1) {
            cout << "First non-repeating character = " << a[x];
            return 0;
        }
    }

    cout << "No non-repeating character";

    return 0;
}
