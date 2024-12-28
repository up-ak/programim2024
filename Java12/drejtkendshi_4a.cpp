#include <iostream>
using namespace std;

struct Drejtkendshi
{
    double gjatesia;
    double gjeresia;

    double siperfaqja()
    {
        return gjatesia * gjeresia;
    }

    double perimetri()
    {
        return 2 * gjatesia + 2 * gjeresia;
    }

    bool eshteKatror()
    {
        return gjatesia == gjeresia;
    }
};

int main()
{
    Drejtkendshi dk;
    dk.gjatesia = 123;
    dk.gjeresia = 100.5;

    cout << dk.perimetri();
    cout << dk.siperfaqja();

    Drejtkendshi dk2;
    dk2.gjatesia = 213;
    dk2.gjeresia = 312321;

    cout << dk2.perimetri();
    cout << dk2.siperfaqja();

    Drejtkendshi drejtkendshet[4];

    drejtkendshet[0].gjatesia = 213;
    drejtkendshet[0].gjeresia = 213;

    return 0;
}