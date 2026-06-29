#include <iostream>
using namespace std;

int main() {
    char s[100];
    int n = 0, a = 0, b = 0;

    cout << "Enter string: ";
    cin.getline(s, 100);

    while (s[n] != '\0') {

        if ((s[n] >= 'A' && s[n] <= 'Z') || (s[n] >= 'a' && s[n] <= 'z')) {

            if (s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U' ||
                s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u')
                a++;
            else
                b++;
        }

        n++;
    }

    cout << "Vowels = " << a << endl;
    cout << "Consonants = " << b << endl;

    return 0;
}
