#include <iostream>
using namespace std;

int main()
{
    int nota;
    cout << "Vendose noten: ";
    cin >> nota;

    switch (nota)
    {
    case 5:
        cout << "Nota juaj eshte pese";
        break;
    case 6:
        cout << "Nota juaj eshte gjashte";
        break;
    case 7:
        cout << "Nota juaj eshte shtate";
        break;
    case 8:
        cout << "Nota juaj eshte tete";
        break;
    case 9:
        cout << "Nota juaj eshte nente";
        break;
    case 10:
        cout << "Nota juaj eshte dhjete";
        break;
    default:
        cout << "Nota nuk eshte ne rregull";
    }

    int dita = 3;

    switch (dita)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Dite pune";
        break;
    case 6:
    case 7:
        cout << "Dite vikendi";
        break;
    default:
        cout << "Dita nuk eshte ne rregull";
    }

    // if (nota == 5)
    // {
    //     cout << "Nota juaj eshte pese";
    // }
    // else if (nota == 6)
    // {
    //     cout << "Nota juaj eshte gjashte";
    // }
    // // ...
    // else
    // {
    //     cout << "Nota nuk eshte ne rregull";
    // }

    return 0;
}