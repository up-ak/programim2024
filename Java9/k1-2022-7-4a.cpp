#include <iostream>
using namespace std;

int main()
{
    int nr1;
    int nr2;
    cout << "Vendos numrin e pare: ";
    cin >> nr1;
    cout << "Vendos numrin e dyte: ";
    cin >> nr2;

    int dif;

    if (nr1 > nr2)
    {
        dif = nr1 - nr2;
    }
    else
    {
        dif = nr2 - nr1;
    }

    // dif!

    int faktorieli = 1;

    while (dif > 1)
    {
        faktorieli *= dif;
        dif--;
    }

    return 0;
}