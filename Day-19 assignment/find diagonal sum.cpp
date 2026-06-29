#include <iostream>
using namespace std;

int main() {
    int x[10][10];
    int r, i, j, t = 0;

    cout << "Enter size of matrix: ";
    cin >> r;

    cout << "Enter matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            cin >> x[i][j];
        }
    }

    // Find diagonal sum
    for (i = 0; i < r; i++) {
        t = t + x[i][i];
    }

    cout << "Diagonal sum = " << t;

    return 0;
}
