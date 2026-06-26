#include<iostream>
using namespace std;

int main()
{
    int n1, n2, max;

    cout<<"Enter first number : ";
    cin>>n1;

    cout<<"Enter second number : ";
    cin>>n2;

    if(n1 > n2)
        max = n1;
    else
        max = n2;

    while(true)
    {
        if(max % n1 == 0 && max % n2 == 0)
        {
            cout<<"LCM = "<<max;
            break;
        }

        max++;
    }

    return 0;
}
