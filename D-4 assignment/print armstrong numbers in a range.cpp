#include<iostream>
using namespace std;

int main()
{
    int a, b, c, i;

    cout<<"Enter starting number : ";
    cin>>a;

    cout<<"Enter ending number : ";
    cin>>b;

    cout<<"Armstrong numbers are : ";

    for(i = a; i <= b; i++)
    {
        int n = i;
        int s = 0;
        int r;

        while(n != 0)
        {
            r = n % 10;
            s = s + r * r * r;
            n = n / 10;
        }

        if(s == i)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
