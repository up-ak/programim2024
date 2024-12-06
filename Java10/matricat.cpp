#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                A[i][j] = -1; // Mbi diagonale
            }
            else if (i == j)
            {
                A[i][j] = 0; // Në diagonale
            }
            else
            {
                A[i][j] = 1; // Nën diagonale
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int u = 0; u < n; u++)
        {
            cout.width(2);
            cout << A[i][u] << " ";
        }

        cout << endl;
    }

    return 0;
}