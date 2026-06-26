#include<iostream>
using namespace std;

int main()
{
    int n, i, p = 0, j;

    cout<<"Enter a number : ";
    cin>>n;

    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            int f = 1;

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    f = 0;
                    break;
                }
            }

            if(f == 1)
            {
                p = i;
            }
        }
    }

    cout<<"Largest Prime Factor = "<<p;

    return 0;
}
