#include <iostream>
using namespace std;

int main()
{
    const int n = 3;
    // int A[n][n] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};

    // leximi prej tastjeres

    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Vendose antarin A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    int nrPozitiv = 0;
    int nrNegativ = 0;
    int shumaMbiDiagonale = 0;
    int shumaNenDiagonale = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] > 0)
            {
                nrPozitiv++;
            }
            else if (A[i][j] < 0)
            {
                nrNegativ++;
            }

            if (j > i)
            {
                shumaMbiDiagonale += A[i][j];
            }
            else if (j < i)
            {
                shumaNenDiagonale += A[i][j];
            }
        }
    }

    cout << "Numri i numrave pozitiv: " << nrPozitiv << endl;
    cout << "Numri i numrave negativ: " << nrNegativ << endl;
    cout << "Shuma e numrave mbi diagonale: " << shumaMbiDiagonale << endl;
    cout << "Shuma e numrave nen diagonale: " << shumaNenDiagonale << endl;

    return 0;
}