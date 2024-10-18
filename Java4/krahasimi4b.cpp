#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Shkruani dy numra: ";
    cin >> a;
    cin >> b;

    if (a > b)
    {
        cout << a << " eshte me e madhe se " << b << endl;
    }
    else if (a == b)
    {
        cout << "Numrat jane te barabarte" << endl;
    }
    else
    {
        cout << b << " eshte me e madhe se " << a << endl;
    }

    return 0;
}