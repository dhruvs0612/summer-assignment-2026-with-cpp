#include <iostream>
using namespace std;

int main() {
    int a[50];
    int n, i, j, m, t;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements of array: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    // selection sort
    for (i = 0; i < n - 1; i++) {
        m = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[m]) {
                m = j;
            }
        }

        // swap
        t = a[i];
        a[i] = a[m];
        a[m] = t;
    }

    cout << "Sorted array is: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
