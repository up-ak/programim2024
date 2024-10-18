#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Jepni vleren e a: ";
    cin >> a;
    cout << "Jepni vleren e b: ";
    cin >> b;
    cout << "Jepni vleren e c: ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "a eshte me i madhi";
        }
        else
        {
            cout << "c eshte me i madhi";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b eshte me i madhi";
        }
        else
        {
            cout << "c eshte me i madhi";
        }
    }

    return 0;
}