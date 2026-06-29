#include <iostream>
using namespace std;

int main() {
    char s[100], w[100];
    int i = 0, a = 0, b = 0;

    cout << "Enter sentence: ";
    cin.getline(s, 100);

    while (1) {
        if (s[i] != ' ' && s[i] != '\0') {
            a++;
        } else {
            if (a > b) {
                b = a;
                for (int c = 0; c < a; c++)
                    w[c] = s[i - a + c];
                w[a] = '\0';
            }
            a = 0;
        }

        if (s[i] == '\0')
            break;

        i++;
    }

    cout << "Longest word = " << w;

    return 0;
}
