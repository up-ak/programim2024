#include <iostream>
using namespace std;

int main()
{
    const int muajt = 12;
    int rrogat[muajt] = {1001, 200, 300, 400, 500, 600,
                         700, 800, 900, 1000, 1100, 1200};

    int totali = 0;

    for (int i = 0; i < muajt; i++)
    {
        totali += rrogat[i];
    }

    cout << "Totali i rrogave: " << totali << endl;
    cout << "Mesatarja mujore: " << totali / muajt << endl;

    return 0;
}