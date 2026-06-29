#include <iostream>
using namespace std;

int main() {
    string s[50], t;
    int n, i, j;

    cout << "Enter number of words: ";
    cin >> n;

    cout << "Enter words: ";
    for (i = 0; i < n; i++)
        cin >> s[i];

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i].length() > s[j].length()) {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    cout << "Sorted words by length: ";
    for (i = 0; i < n; i++)
        cout << s[i] << " ";

    return 0;
}
