#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int x, y, i, j;

    cout << "Enter rows: ";
    cin >> x;

    cout << "Enter columns: ";
    cin >> y;

    cout << "Enter first matrix:\n";
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            cin >> b[i][j];
        }
    }

    // Subtract matrices
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Result matrix:\n";
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
