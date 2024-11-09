#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Vendosni nje numer: ";
    cin >> n;

    cout << "WHILE" << endl;

    int i = 1;

    while (i <= 10)
    {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }

    cout << "DO WHILE " << endl;

    int u = 1;

    do
    {
        cout << n << " x " << u << " = " << n * u << endl;
        u++;
    } while (u <= 10);

    cout << "FOR" << endl;

    for (int j = 1; j <= 10; j++)
    {
        cout << n << " x " << j << " = " << n * j << endl;
    }

    // 1. j = 1
    // 2. j <= 10
    // 3. blloku - printimi
    // 4. j++
    // 5. Kthehu te pika 2

    return 0;
}