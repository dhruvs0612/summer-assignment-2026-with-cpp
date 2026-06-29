#include <iostream>
using namespace std;

int main() {
    char s1[100], s2[100], x;
    int a = 0, b = 0, i, j, f = 1;

    cout << "Enter first string: ";
    cin.getline(s1, 100);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    while (s1[a] != '\0')
        a++;

    while (s2[b] != '\0')
        b++;

    if (a != b) {
        cout << "Not Anagram";
        return 0;
    }

    for (i = 0; i < a - 1; i++) {
        for (j = i + 1; j < a; j++) {
            if (s1[i] > s1[j]) {
                x = s1[i];
                s1[i] = s1[j];
                s1[j] = x;
            }

            if (s2[i] > s2[j]) {
                x = s2[i];
                s2[i] = s2[j];
                s2[j] = x;
            }
        }
    }

    for (i = 0; i < a; i++) {
        if (s1[i] != s2[i]) {
            f = 0;
            break;
        }
    }

    if (f == 1)
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}
