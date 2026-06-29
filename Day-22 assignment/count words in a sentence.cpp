#include <iostream>
using namespace std;

int main() {
    char a[100];
    int n = 0, c = 1;

    cout << "Enter sentence: ";
    cin.getline(a, 100);

    if (a[0] == '\0')
        c = 0;
    else {
        while (a[n] != '\0') {
            if (a[n] == ' ')
                c++;
            n++;
        }
    }

    cout << "Total words = " << c;

    return 0;
}
