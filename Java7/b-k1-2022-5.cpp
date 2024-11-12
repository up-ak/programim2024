#include <iostream>
using namespace std;

int main()
{
    //(2*2+3) + (2*3+3) + (2*4+3) + (2*5+3) .... (2*(2n-1))+3)
    int n;
    cout << "Vendosni nje numer: ";
    cin >> n;

    int i = 2;
    int shuma = 0;

    do
    {
        if (i >= (2 * n - 1))
        {
            break;
        }

        shuma += 2 * i + 3;
    } while (i < (2 * n - 1));

    int S = 2 * shuma;

    cout << S;

    return 0;
}