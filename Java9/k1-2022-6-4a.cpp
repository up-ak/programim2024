#include <iostream>
using namespace std;

int main()
{
    int piket;

fillimi:
    cout << "Vendosni piket: ";
    cin >> piket;

    if (piket < 50)
    {
        cout << "Nuk keni kaluar provimin \n";
    }
    else
    {
        cout << "Keni kaluar provimin \n";
    }

pytja:
    cout << "Deshironi te vazhdoni? (p/j): ";
    char pergjigja;
    cin >> pergjigja;

    switch (pergjigja)
    {
    case 'p':
        goto fillimi;
        break;
    case 'j':
        break;
    default:
        goto pytja;
    }

    return 0;
}