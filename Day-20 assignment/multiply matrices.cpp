#include <iostream>
using namespace std;

int main() {
    int x[10][10], y[10][10], z[10][10];
    int r, c, d, i, j, k;

    cout << "Enter rows of first matrix: ";
    cin >> r;

    cout << "Enter columns of first matrix: ";
    cin >> c;

    cout << "Enter columns of second matrix: ";
    cin >> d;

    cout << "Enter first matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> x[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            cin >> y[i][j];
        }
    }

    // Multiply matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < d; j++) {
            z[i][j] = 0;

            for (k = 0; k < c; k++) {
                z[i][j] = z[i][j] + x[i][k] * y[k][j];
            }
        }
    }

    cout << "Result matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < d; j++) {
            cout << z[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
