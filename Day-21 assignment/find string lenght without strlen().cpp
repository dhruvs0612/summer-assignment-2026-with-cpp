#include <iostream>
using namespace std;

int main() {
    char s[100];
    int n = 0;

    cout << "Enter a string: ";
    cin.getline(s, 100);

    while (s[n] != '\0') {
        n++;
    }

    cout << "Length = " << n;

    return 0;
}
