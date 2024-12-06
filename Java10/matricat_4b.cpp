#include <iostream>
using namespace std;

int main()
{
    int matrica[3][20] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    matrica[0][0] = 0;
    matrica[0][1] = -1;
    matrica[0][2] = -2;
    matrica[0][3] = -3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout.width(2);
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }

    int shuma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            shuma += matrica[i][j];
        }
    }

    cout << "Shuma e elementeve te matrices eshte: " << shuma << endl;

    const int n = 4;
    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Vendosni antarin [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    int nrTek = 0;
    int prodhimiMbiDiagonale = 1;
    int prodhimiNenDiagonale = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout.width(2);
            cout << A[i][j] << " ";

            if (A[i][j] % 2 == 1)
            {
                nrTek++;
            }

            if (j > i)
            {
                prodhimiMbiDiagonale *= A[i][j];
            }

            if (i > j)
            {
                prodhimiNenDiagonale *= A[i][j];
            }
        }
        cout << endl;
    }

    cout << "Numrat tek jane: " << nrTek << endl;

    return 0;
}