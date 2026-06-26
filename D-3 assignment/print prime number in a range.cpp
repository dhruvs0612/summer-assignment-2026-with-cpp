#include<iostream>
using namespace std;

int main()
{
    int start, end, i, j;
    bool prime;

    cout<<"Enter starting number : ";
    cin>>start;

    cout<<"Enter ending number : ";
    cin>>end;

    cout<<"Prime numbers are : ";

    for(i = start; i <= end; i++)
    {
        if(i <= 1)
            continue;

        prime = true;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
