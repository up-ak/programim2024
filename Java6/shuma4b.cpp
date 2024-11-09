#include <iostream>
using namespace std;

// printo 1 + 2 + 3 + 4 + ... + n
// printo 1 * 2 * 3 * 4 * ... * n
int main()
{
    int n;
    cout << "Vendosni nje numer: ";
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        sum += i;
        i++;

        if (i % 3 == 0)
        {
            sum -= 5;
        }
    }

    cout << sum;

    return 0;
}