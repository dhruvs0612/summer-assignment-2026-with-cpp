#include <iostream>
using namespace std;

int main() {
    int x[10][10];
    int r, c, i, j, s;

    cout << "Enter rows: ";
    cin >> r;

    cout << "Enter columns: ";
    cin >> c;

    cout << "Enter matrix:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> x[i][j];
        }
    }

    for (j = 0; j < c; j++) {
        s = 0;
        for (i = 0; i < r; i++) {
            s = s + x[i][j];
        }
        cout << "Sum of Column " << j + 1 << " = " << s << endl;
    }

    return 0;
}
