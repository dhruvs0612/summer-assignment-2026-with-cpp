#include <iostream>
using namespace std;

int main() {
    int x[50], y[50], z[100];
    int n, m, i, j;

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter elements of first array: ";
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter elements of second array: ";
    for (i = 0; i < m; i++) {
        cin >> y[i];
    }

    // copy first array into third array
    for (i = 0; i < n; i++) {
        z[i] = x[i];
    }

    // copy second array into third array
    for (j = 0; j < m; j++) {
        z[n + j] = y[j];
    }

    cout << "Merged array is: ";
    for (i = 0; i < n + m; i++) {
        cout << z[i] << " ";
    }

    return 0;
}
