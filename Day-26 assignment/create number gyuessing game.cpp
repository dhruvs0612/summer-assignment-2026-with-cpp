#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a, b;

    srand(time(0));
    a = rand() % 100 + 1;

    cout << "Number Guessing Game" << endl;
    cout << "Guess a number from 1 to 100" << endl;

    do
    {
        cout << "Enter number: ";
        cin >> b;

        if (b > a)
        {
            cout << "Too High!" << endl;
        }
        else if (b < a)
        {
            cout << "Too Low!" << endl;
        }
        else
        {
            cout << "You Win!" << endl;
        }

    } while (b != a);

    return 0;
}
