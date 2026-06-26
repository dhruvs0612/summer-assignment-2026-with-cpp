#include<iostream>
using namespace std;

int main()
{
    int a, b, c = 0;

    cout<<"Enter a number : ";
    cin>>a;

    for(b = 1; b < a; b++)
    {
        if(a % b == 0)
        {
            c = c + b;
        }
    }

    if(c == a)
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not a Perfect Number";
    }

    return 0;
}
