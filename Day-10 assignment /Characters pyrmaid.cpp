#include<iostream>
using namespace std;

int main()
{
    int i, j, n;
    char ch;

    cout << "Enter number of rows: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        ch = 'A';

        for(j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }

        for(j = i-1; j >= 1; j--)
        {
            ch--;
            cout << char(ch-1);
        }

        cout << endl;
    }

    return 0;
}
