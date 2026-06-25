#include<iostream>
using namespace std;

int main()
{
    int n, temp, rev = 0, rem;

    cout<<"Enter a number : ";
    cin>>n;

    temp = n;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
    {
        cout<<"Number is Palindrome";
    }
    else
    {
        cout<<"Number is not Palindrome";
    }

    return 0;
}
