#include <iostream>
using namespace std;

int main() {
    int x[10][10];
    int r, i, j, c = 1;

    cout << "Enter size of matrix: ";
    cin >> r;

    cout << "Enter matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            cin >> x[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            if (x[i][j] != x[j][i]) {
                c = 0;
                break;
            }
        }
    }

    if (c == 1)
        cout << "Symmetric Matrix";
    else
        cout << "Not Symmetric Matrix";

    return 0;
}
