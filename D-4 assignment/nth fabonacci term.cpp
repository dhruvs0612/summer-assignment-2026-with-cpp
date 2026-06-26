#include<iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c, i;

    cout<<"Enter the term : ";
    cin>>n;

    if(n == 1)
    {
        cout<<"Fibonacci term = "<<a;
    }
    else if(n == 2)
    {
        cout<<"Fibonacci term = "<<b;
    }
    else
    {
        for(i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        cout<<"Fibonacci term = "<<c;
    }

    return 0;
}
