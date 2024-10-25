#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";

    cin >> x;

    cout << "Vlera absolute e numrit eshte: ";

    int abs = x < 0 ? -x : x;
    cout << abs;
    // cout << (x < 0 ? -x : x);

    // if (x < 0)
    // {
    //     cout << -x;
    // }
    // else
    // {
    //     cout << x;
    // }

    return 0;
}