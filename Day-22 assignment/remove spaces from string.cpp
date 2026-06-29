#include <iostream>
using namespace std;

int main() {
    char s[100];
    int a = 0, b = 0;

    cout << "Enter string: ";
    cin.getline(s, 100);

    while (s[a] != '\0') {
        if (s[a] != ' ') {
            s[b] = s[a];
            b++;
        }
        a++;
    }

    s[b] = '\0';

    cout << "String = " << s;

    return 0;
}
