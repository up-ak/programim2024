#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Shkruani vleren e a: ";
    cin >> a;

    cout << "Shkruani vleren e b: ";
    cin >> b;

    cout << "Siperfaqja: ";
    cout << a * b;
    cout << endl;
    cout << "Perimetri: ";
    cout << 2 * (a + b);
    cout << endl;

    return 0;
}