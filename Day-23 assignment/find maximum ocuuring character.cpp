#include <iostream>
using namespace std;

int main() {
    char a[100], b;
    int i, j, x = 0, y = 0;

    cout << "Enter string: ";
    cin.getline(a, 100);

    while (a[x] != '\0')
        x++;

    for (i = 0; i < x; i++) {
        int n = 0;

        for (j = 0; j < x; j++) {
            if (a[i] == a[j])
                n++;
        }

        if (n > y) {
            y = n;
            b = a[i];
        }
    }

    cout << "Maximum occurring character = " << b << endl;
    cout << "Frequency = " << y;

    return 0;
}
