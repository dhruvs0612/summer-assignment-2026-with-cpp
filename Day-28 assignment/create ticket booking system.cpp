#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Ticket Booking System" << endl;

    cout << "Enter Ticket Price: ";
    cin >> a;

    cout << "Enter Number of Tickets: ";
    cin >> b;

    c = a * b;

    cout << "Total Amount = " << c << endl;

    if (b > 0)
        cout << "Booking Successful";
    else
        cout << "Booking Failed";

    return 0;
}
