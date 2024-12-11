#include <iostream>
using namespace std;

int totalNxenes = 0;
const int kapacitetiShkolles = 1000;

void shtoNxenes(int numriNxenesve)
{
    int vendeTeLira = kapacitetiShkolles - totalNxenes;

    if (vendeTeLira < numriNxenesve)
    {
        totalNxenes += vendeTeLira;

        cout << "Nuk ka vend ne shkolle per " << numriNxenesve - vendeTeLira << " nxenes" << endl;
        return;
    }

    // Alternative -  pa i shtu nexnesit nese nuk ka vend
    // if (totalNxenes + numriNxenesve > kapacitetiShkolles)
    // {
    //     cout << "Nuk ka vend ne shkolle per " << numriNxenesve << " nxenes te tjere" << endl;
    //     return;
    // }

    totalNxenes += numriNxenesve;
}

void largoNxenes(int numriNxenesve)
{
    totalNxenes -= numriNxenesve;
}

void shfaqStatistikat()
{
    cout << "Totali i nxenesve: " << totalNxenes << endl;
    cout << "Kapaciteti i shkolles: " << kapacitetiShkolles << endl;
    cout << "Numri i vendeve te lira: " << kapacitetiShkolles - totalNxenes << endl;
}

int main()
{
    shtoNxenes(100);

    shtoNxenes(34);

    shtoNxenes(432);

    largoNxenes(10);

    shtoNxenes(54698);

    shfaqStatistikat();

    return 0;
}