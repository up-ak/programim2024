#include <iostream>
using namespace std;

int main()
{
    // Operatoret logjik: && (AND), || (OR), ! (NOT)
    int a;
    int b;
    int c;

    cout << "Shkruani tre numra: ";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Numri me i madh eshte: ";

    if (a > b && a > c)
    {
        cout << a;
    }
    else if (b > a && b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }

    return 0;
}