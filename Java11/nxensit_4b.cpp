#include <iostream>
using namespace std;

int totalNxenes = 0;
const int kapacitetiShkolles = 1000;
// int x = 10;

void shtoNxenes(int numriNxenseve)
{
    // int x = 20;

    // cout << x; printohet 20 sepse x eshte variabel lokale
    if (totalNxenes + numriNxenseve > kapacitetiShkolles)
    {
        cout << "Nuk ka vend te mjaftueshem per " << numriNxenseve << " nxenes te tjere" << endl;
        return;
    }

    totalNxenes += numriNxenseve;
}

void largoNxenes(int numriNxenseve)
{
    // cout << x; printohet 10 sepse x eshte variabel globale

    totalNxenes -= numriNxenseve;
}

void shfaqStatistikat()
{
    cout << "Totali i nxenesve: " << totalNxenes << endl;
    cout << "Vendet e lira: " << kapacitetiShkolles - totalNxenes << endl;
    cout << "Kapaciteti i shkolles: " << kapacitetiShkolles << endl;
}

int main()
{
    shtoNxenes(500);
    shtoNxenes(300);

    largoNxenes(43);

    shfaqStatistikat();

    return 0;
}