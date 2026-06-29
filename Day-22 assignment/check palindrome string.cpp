#include <iostream>
using namespace std;

int main() {
    char s[100];
    int a = 0, b;
    int c = 1;

    cout << "Enter string: ";
    cin.getline(s, 100);

    while (s[a] != '\0') {
        a++;
    }

    for (b = 0; b < a / 2; b++) {
        if (s[b] != s[a - b - 1]) {
            c = 0;
            break;
        }
    }

    if (c == 1)
        cout << "Palindrome String";
    else
        cout << "Not Palindrome String";

    return 0;
}
