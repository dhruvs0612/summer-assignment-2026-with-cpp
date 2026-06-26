#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"Enter a number : ";
    cin>>a;

    cout<<"Factors are : ";

    for(b = 1; b <= a; b++)
    {
        if(a % b == 0)
        {
            cout<<b<<" ";
        }
    }

    return 0;
}
