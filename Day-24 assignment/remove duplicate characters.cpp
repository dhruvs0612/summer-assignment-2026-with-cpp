#include <iostream>
using namespace std;

int main() {
    char s[100];
    int i, j, k;

    cout << "Enter string: ";
    cin.getline(s, 100);

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i + 1; s[j] != '\0'; ) {
            if (s[i] == s[j]) {
                for (k = j; s[k] != '\0'; k++) {
                    s[k] = s[k + 1];
                }
            } else {
                j++;
            }
        }
    }

    cout << "String = " << s;

    return 0;
}
