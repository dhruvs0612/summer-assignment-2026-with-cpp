#include <iostream>
using namespace std;

int main() {
    char s[100], a;
    int i = 0, n = 0;

    cout << "Enter string: ";
    cin.getline(s, 100);

    cout << "Enter character: ";
    cin >> a;

    while (s[i] != '\0') {
        if (s[i] == a) {
            n++;
        }
        i++;
    }

    cout << "Frequency = " << n;

    return 0;
}
