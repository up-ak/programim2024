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

    int rez;

    if (nr1 > nr2)
    {
        rez = nr1 - nr2;
    }
    else
    {
        rez = nr2 - nr1;
    }

    // rez!

    int faktorieli = 1;

    while (rez > 1)
    {
        faktorieli *= rez;
        rez--;
    }

    return 0;
}