#include <iostream>
using namespace std;

int main()
{
    const double cmimi = 3.25;
    int nrBiletave;

    do
    {
        cout << "Shkruani numrin e biletave: ";
        cin >> nrBiletave;
    } while (nrBiletave < 1);

    double totali = nrBiletave * cmimi;

    int zbritja = 0;

    switch (nrBiletave)
    {
    case 1:
    case 2:
    case 3:
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        zbritja = 3;
        break;
    default:
        zbritja = 10;
    }

    cout << "Totali: " << totali - zbritja << endl;

    return 0;
}