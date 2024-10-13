#include <iostream>
using namespace std;

int main()
{
    bool jamNeBurg = true;
    bool jamNxenes = true;
    bool jamNeVitinEFundit = false;
    bool jamMaturant = jamNxenes && jamNeVitinEFundit;

    bool kamObligimie = jamNeBurg || jamNxenes;

    cout << "A jam student? " << jamNxenes << endl;
    cout << "A jam maturant?" << jamMaturant << endl;

    return 0;
}