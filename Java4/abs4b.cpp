#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Shkruani nje numer: ";
    cin >> x;

    cout << "Vlera absolute eshte: ";

    if (x < 0)
    {
        cout << -x;
    }
    else if (x == 0)
    {
        cout << "Zero";
    }
    else
    {
        cout << x;
    }

    return 0;
}