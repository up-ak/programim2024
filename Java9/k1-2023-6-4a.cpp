#include <iostream>
using namespace std;

int main()
{
    const double cmimi = 3.25;
    int numriBiletave;

    do
    {
        cout << "Vendos numrin e biletave: ";
        cin >> numriBiletave;
    } while (numriBiletave < 0);

    int totali = numriBiletave * cmimi;

    char kategoriaEZbritjes = '0';

    if (numriBiletave >= 4 && numriBiletave <= 7)
    {
        kategoriaEZbritjes = '1';
    }
    else if (numriBiletave >= 7)
    {
        kategoriaEZbritjes = '2';
    }

    switch (kategoriaEZbritjes)
    {
    case '1':
        totali -= 3;
        break;
    case '2':
        totali -= 10;
    }

    // opsioni tjeter
    // switch (totali)
    // {
    // case 0:
    // case 1:
    // case 2:
    // case 3:
    //     break;
    // case 4:
    // case 5:
    // case 6:
    // case 7:
    //     totali -= 3;
    //     break;
    // default:
    //     totali -= 10;
    // }

    cout << "Totali: " << totali << endl;

    return 0;
}