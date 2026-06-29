#include <iostream>
using namespace std;

int main() {
    int x[50], y[50], z[100];
    int n, m, i, j, k = 0, f;

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

    // copy first array into result array
    for (i = 0; i < n; i++) {
        z[k] = x[i];
        k++;
    }

    // add second array elements if not already present
    for (i = 0; i < m; i++) {
        f = 0;

        for (j = 0; j < n; j++) {
            if (y[i] == x[j]) {
                f = 1;
                break;
            }
        }

        if (f == 0) {
            z[k] = y[i];
            k++;
        }
    }

    cout << "Union of arrays is: ";
    for (i = 0; i < k; i++) {
        cout << z[i] << " ";
    }

    return 0;
}
