// Llogaritja e perimetrit dhe sipërfaqes së drejtkëndëshit
#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Jepni brinjen a: ";
    cin >> a;
    cout << "Jepni brinjen b: ";
    cin >> b;

    cout << "Perimetri: " << 2 * (a + b) << endl;
    cout << "Sipërfaqja: " << a * b << endl;

    return 0;
}