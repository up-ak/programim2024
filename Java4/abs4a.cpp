#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Jepni nje numer: ";
    cin >> x;

    cout << "Vlera absolute e numrit eshte: ";

    if (x > 0)
    {
        cout << x;
    }
    else if (x < 0)
    {
        cout << -x;
    }
    else
    {
        cout << "Zero";
    }

    cout << endl;

    return 0;
}