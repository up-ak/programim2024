#include <iostream>
using namespace std;

// Printo numrat tek deri në n
int main()
{
    int n;
    cout << "Jepni n: ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        if (i % 2 == 1)
        {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}