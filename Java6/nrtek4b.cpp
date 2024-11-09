#include <iostream>
using namespace std;

// 1. Printo numrat prej 1 deri ne n;
// Printo numrat tek deri prej 1 deri në n
int main()
{
    int n;
    cout << "Vendosni nje numer: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        cout << i;

        i = i + 2;
    }

    return 0;
}