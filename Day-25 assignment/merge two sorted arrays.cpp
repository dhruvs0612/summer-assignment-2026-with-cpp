#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], c[200];
    int i = 0, j = 0, k = 0, x, y;

    cout << "Enter size of first array: ";
    cin >> x;

    cout << "Enter first sorted array: ";
    for (i = 0; i < x; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> y;

    cout << "Enter second sorted array: ";
    for (i = 0; i < y; i++)
        cin >> b[i];

    i = 0;

    while (i < x && j < y) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < x) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < y) {
        c[k] = b[j];
        j++;
        k++;
    }

    cout << "Merged array: ";
    for (i = 0; i < k; i++)
        cout << c[i] << " ";

    return 0;
}
