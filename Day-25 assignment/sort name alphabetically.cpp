#include <iostream>
using namespace std;

int main() {
    string a[50], b;
    int n, i, j;

    cout << "Enter number of names: ";
    cin >> n;

    cout << "Enter names: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }

    cout << "Sorted names: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
