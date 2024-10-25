#include <iostream>
using namespace std;

int main()
{
    // vendosni noten (5-10): 10
    // print - "Nota eshte dhjete"

    int nota;
    cout << "Vendosni noten (5-10): ";
    cin >> nota;

    switch (nota)
    {
    case 10:
        cout << "Nota eshte dhjete";
        break;
    case 9:
        cout << "Nota eshte nente";
        break;
    case 8:
        cout << "Nota eshte tete";
        break;
    case 7:
        cout << "Nota eshte shtate";
        break;
    case 6:
        cout << "Nota eshte gjashte";
        break;
    case 5:
        cout << "Nota eshte pese";
        break;
    default:
        cout << "Nota nuk eshte valide";
        break;
    }

    int dita = 3;

    switch (dita)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Dita e javes";
        break;
    case 6:
    case 7:
        cout << "Fundjava";
        break;
    }

    return 0;
}