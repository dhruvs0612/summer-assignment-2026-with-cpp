#include <iostream>
using namespace std;

int main() {
    int x[10][10], y[10][10], z[10][10];
    int n, m, i, j;

    cout << "Enter number of rows: ";
    cin >> n;

    cout << "Enter number of columns: ";
    cin >> m;

    cout << "Enter first matrix:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> x[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> y[i][j];
        }
    }

    // Add matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            z[i][j] = x[i][j] + y[i][j];
        }
    }

    cout << "Sum of matrices:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << z[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
