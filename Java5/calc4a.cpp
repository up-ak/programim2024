#include <iostream>
using namespace std;

int main()
{
    int nr1;
    int nr2;

pika1:
    cout << "Vendosni numrin e pare: ";
    cin >> nr1;
    cout << "Vendosni numrin e dyte: ";
    cin >> nr2;

    char operacioni;

pika2:
    cout << "Vendosni operacionin (+, -, *, /): ";
    cin >> operacioni;

    switch (operacioni)
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
        return 0; // Exit program
    default:
        cout << "Operacioni nuk eshte valid" << endl;
        goto pika2;
    }

    goto pika1;

    return 0;
}