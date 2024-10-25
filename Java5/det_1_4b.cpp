#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Vlera y eshte: ";

    int y;

    if (x <= 4)
    {
        y = -2 * x + 5;
    }
    else
    {
        y = x - 3;
    }

    y = x <= 4 ? (-2 * x + 5) : (x - 3);

    cout << y << endl;

    return 0;
}