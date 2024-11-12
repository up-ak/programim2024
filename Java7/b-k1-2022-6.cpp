#include <iostream>
using namespace std;

int main()
{
    int piket;

fillimi:
    cout << "Vendosni piket: ";
    cin >> piket;

    if (piket > 49)
    {
        cout << "Kaluat provimin" << endl;
    }
    else
    {
        cout << "Nuk kaluat provimin" << endl;
    }

    cout << "A po don me vendos pike te tjera? (po (P,p)/jo (J,j)): ";
    char pergjigja;
    cin >> pergjigja;

    switch (pergjigja)
    {
    case 'J':
    case 'j':
        break;
    default:
        goto fillimi;
    }

    do
    {
        cout << "Vendosni piket: ";
        cin >> piket;

        if (piket > 49)
        {
            cout << "Kaluat provimin" << endl;
        }
        else
        {
            cout << "Nuk kaluat provimin" << endl;
        }

        cout << "A po don me vendos pike te tjera? (po (P,p)/jo (J,j)): ";
        char pergjigja;
        cin >> pergjigja;
    } while (pergjigja != 'J' && pergjigja != 'j');

    return 0;
}