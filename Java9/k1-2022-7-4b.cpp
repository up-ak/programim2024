#include <iostream>
using namespace std;

int main()
{
    int nr1;
    int nr2;

    cout << "Enter two numbers: " << endl;
    cin >> nr1 >> nr2;

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

    for (int i = dif; i > 1; i--)
    {
        faktorieli *= i;
    }

    cout << "Faktorieli i " << dif << " eshte: " << faktorieli << endl;

    return 0;
}