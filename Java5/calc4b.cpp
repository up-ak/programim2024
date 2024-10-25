#include <iostream>
using namespace std;

int main()
{
    int nr1;
    int nr2;
    char operatori;

start:
    cout << "Jepni numrin e pare: ";
    cin >> nr1;
    cout << "Jepni numrin e dyte: ";
    cin >> nr2;
zgjedhOperatorin:
    cout << "Jepni operatorin (+, -, *, /) (p per te perfunduar): ";
    cin >> operatori;

    bool perfundo = false;

    switch (operatori)
    {
    case '+':
        cout << nr1 + nr2 << endl;
        break;
    case '-':
        cout << nr1 - nr2 << endl;
        break;
    case '*':
        cout << nr1 * nr2 << endl;
        break;
    case '/':
        cout << nr1 / (double)nr2 << endl;
        break;
    case 'p':
        perfundo = true;
        break;
    default:
        cout << "Operatori gabim" << endl;
        goto zgjedhOperatorin;
    }

    if (!perfundo)
    {
        goto start;
    }

    return 0;
}