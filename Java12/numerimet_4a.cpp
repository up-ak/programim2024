#include <iostream>
using namespace std;

enum DitetEJaves
{
    HENE,    // 0
    MARTE,   // 1
    MERKURE, // 2
    ENJTE,   // 3
    PREMTE,  // 4
    SHTUNE,  // 5
    DIELE    // 6
};

enum Makina
{
    VETUR,
    KAMION,
    AUTOBUS
};

void pershkruajMakinen(Makina m)
{
    switch (m)
    {
    case VETUR:
        cout << "Mjet per transport te 4+1 personave";
        break;
    case KAMION:
        cout << "Mjet per transport mallrash";
        break;
    case AUTOBUS:
        cout << "Mjet per transport te 30+ personave";
        break;
    default:
        cout << "Mjet i panjohur";
    }
}

int main()
{
    Makina ma = KAMION;

    pershkruajMakinen(ma);

    DitetEJaves dita = HENE;

    if (dita == HENE)
    {
        cout << "Sot eshte e hene!" << MERKURE << endl;
    }

    return 0;
}