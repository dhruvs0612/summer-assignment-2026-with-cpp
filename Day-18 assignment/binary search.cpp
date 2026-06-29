#include <iostream>
using namespace std;

int main() {
    int a[50];
    int n, i, x, l, r, m, f = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements of array (sorted): ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> x;

    l = 0;
    r = n - 1;

    while (l <= r) {
        m = (l + r) / 2;

        if (a[m] == x) {
            f = 1;
            break;
        }
        else if (a[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }

    if (f == 1) {
        cout << "Element found";
    }
    else {
        cout << "Element not found";
    }

    return 0;
}
