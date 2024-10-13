#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 10;
    cout << "Jepni vleren a: ";
    cin >> a;
    cout << "Jepni vleren b: ";
    cin >> b;
    // pjesa lart te mos ndryshohet

    int temp = b;
    b = a;
    a = temp;

    // Pjesa posht te mos ndryshohet
    cout << "Vlera e a eshte: " << a << endl;
    cout << "Vlera e b eshte: " << b << endl;

    return 0;
}