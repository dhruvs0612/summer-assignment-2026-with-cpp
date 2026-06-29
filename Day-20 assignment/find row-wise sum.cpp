#include <iostream>
using namespace std;

int main() {
    int a[10][10];
    int n, m, i, j, t;

    cout << "Enter rows: ";
    cin >> n;

    cout << "Enter columns: ";
    cin >> m;

    cout << "Enter matrix:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        t = 0;
        for (j = 0; j < m; j++) {
            t = t + a[i][j];
        }
        cout << "Row " << i + 1 << " Sum = " << t << endl;
    }

    return 0;
}
