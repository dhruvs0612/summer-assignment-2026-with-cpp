#include<iostream>
using namespace std;

int main()
{
    int n, t, r, s = 0;

    cout<<"Enter a number : ";
    cin>>n;

    t = n;

    while(n != 0)
    {
        r = n % 10;
        s = s + (r * r * r);
        n = n / 10;
    }

    if(t == s)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not an Armstrong Number";
    }

    return 0;
}
