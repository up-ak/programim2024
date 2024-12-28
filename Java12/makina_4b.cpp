#include <iostream>
using namespace std;

enum Makina
{
    VETUR,
    KAMION,
    AUTOBUS
};

void pershkrujaMakinen(Makina m)
{
    if (m == VETUR)
    {
        cout << "Makine per transport te 4+1 personave" << endl;
    }
    else if (m == KAMION)
    {
        cout << "Makine per transport te mallrave" << endl;
    }
    else if (m == AUTOBUS)
    {
        cout << "Makine per transport te shume personave" << endl;
    }
    else
    {
        cout << "Makine e panjohur" << endl;
    }
}

int main()
{
    Makina m1 = VETUR;

    pershkrujaMakinen(m1);

    return 0;
}