#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Vendosni a: ";
    cin >> a;
    cout << "Vendosni b: ";
    cin >> b;

    int shuma = 0;

    for (int i = b; i >= a; i--)
    {
        shuma += i;
    }

    cout << shuma;

    // rreshti 13
    // 1. i = b;
    // 2. krahaso i me a
    // 3. shuma += i;
    // 4. i--
    // 5. kthe ne 2

    return 0;
}