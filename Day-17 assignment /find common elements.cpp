#include <iostream>
using namespace std;

int main() {
    int a[50], b[50], c[50];
    int n, m, i, j, k = 0;

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter elements of first array: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter elements of second array: ";
    for (i = 0; i < m; i++) {
        cin >> b[i];
    }

    // finding common elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                c[k] = a[i];
                k++;
                break;
            }
        }
    }

    cout << "Common elements are: ";
    for (i = 0; i < k; i++) {
        cout << c[i] << " ";
    }

    return 0;
}
