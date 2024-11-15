#include <iostream>
using namespace std;

int main()
{
    int nota = 10;
    int nota1 = 8;
    int nota2 = 9;

    const int madhesia = 5;

    int notat[madhesia] = {10, 8, 9, 7, 6};

    cout << notat[4] << endl;

    notat[4] = 9;

    cout << notat[4] << endl;

    int n = 5;
    int piket[n];

    piket[0] = 100;
    piket[1] = 90;
    piket[2] = 54;
    piket[3] = 70;
    piket[4] = 60;

    cout << "Piket" << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        cout << piket[i] << endl;
    }

    return 0;
}