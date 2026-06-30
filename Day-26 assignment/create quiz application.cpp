#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int y;

    cout << "Quiz Application" << endl;

    cout << "\n1. Capital of India?" << endl;
    cout << "1. Mumbai" << endl;
    cout << "2. Delhi" << endl;
    cout << "3. Chennai" << endl;
    cout << "Answer: ";
    cin >> y;

    if (y == 2)
        x++;

    cout << "\n2. 2 + 3 = ?" << endl;
    cout << "1. 4" << endl;
    cout << "2. 5" << endl;
    cout << "3. 6" << endl;
    cout << "Answer: ";
    cin >> y;

    if (y == 2)
        x++;

    cout << "\n3. Sun rises in?" << endl;
    cout << "1. East" << endl;
    cout << "2. West" << endl;
    cout << "3. North" << endl;
    cout << "Answer: ";
    cin >> y;

    if (y == 1)
        x++;

    cout << "\nScore = " << x << "/3";

    return 0;
}
