#include <iostream>
using namespace std;

int main()
{
    const int n = 7;
    int a[n] = {100, 2, 31, 45, 35, 66, 7};

    int shumaTek = 0;
    int shumaCift = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            shumaTek += a[i];
        }
        else
        {
            shumaCift += a[i];
        }
    }

    return 0;
}