#include<iostream>
using namespace std;

int main()
{
    int n, t, r, f, sum = 0, i;

    cout<<"Enter a number : ";
    cin>>n;

    t = n;

    while(n != 0)
    {
        r = n % 10;
        f = 1;

        for(i = 1; i <= r; i++)
        {
            f = f * i;
        }

        sum = sum + f;
        n = n / 10;
    }

    if(sum == t)
    {
        cout<<"Strong Number";
    }
    else
    {
        cout<<"Not a Strong Number";
    }

    return 0;
}
