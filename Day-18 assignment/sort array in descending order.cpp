#include <iostream>
using namespace std;

int main() {
    int x[50];
    int s, i, j, p;

    cout << "Enter size of array: ";
    cin >> s;

    cout << "Enter elements: ";
    for (i = 0; i < s; i++) {
        cin >> x[i];
    }

    // sort in descending order
    for (i = 0; i < s - 1; i++) {
        for (j = i + 1; j < s; j++) {
            if (x[i] < x[j]) {
                p = x[i];
                x[i] = x[j];
                x[j] = p;
            }
        }
    }

    cout << "Array in descending order: ";
    for (i = 0; i < s; i++) {
        cout << x[i] << " ";
    }

    return 0;
}
