#include <iostream>
using namespace std;

int main()
{
    const int n = 6;
    int vargu[n] = {0, 0, 0, 0, 0, 0};
    int numratTek = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Vendos antarin [" << i << "]: ";
        int numri;
        cin >> numri;

        if (numri % 2 == 0)
        {
            vargu[i] = numri;
        }
        else
        {
            numratTek++;
        }
    }

    cout << "Numrat tek jane: " << numratTek << endl;

    return 0;
}