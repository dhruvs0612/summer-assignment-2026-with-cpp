#include <iostream>
using namespace std;

int main() {
    char s[100];
    int i, j;

    cout << "Enter string: ";
    cin.getline(s, 100);

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i + 1; s[j] != '\0'; j++) {
            if (s[i] == s[j]) {
                cout << "First repeating character = " << s[i];
                return 0;
            }
        }
    }

    cout << "No repeating character";

    return 0;
}
