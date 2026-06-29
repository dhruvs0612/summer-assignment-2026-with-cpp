#include <iostream>
using namespace std;

int main() {
    char s[100], t[100];
    int i, j;

    cout << "Enter first string: ";
    cin.getline(s, 100);

    cout << "Enter second string: ";
    cin.getline(t, 100);

    cout << "Common characters: ";

    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; t[j] != '\0'; j++) {
            if (s[i] == t[j]) {
                cout << s[i] << " ";
                t[j] = '*';
                break;
            }
        }
    }

    return 0;
}
