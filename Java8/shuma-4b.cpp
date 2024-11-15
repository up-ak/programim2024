#include <iostream>
using namespace std;

int main()
{
    const int n = 7;

    int vargu[n] = {11, 26, 13, 47, 55, 61, 422};
    int shumaCift = 0;
    int shumaTek = 0;

    for (int i = 0; i < n; i++)
    {
        if (vargu[i] % 2 == 0)
        {
            shumaCift += vargu[i];
        }
        else
        {
            shumaTek += vargu[i];
        }
    }

    return 0;
}