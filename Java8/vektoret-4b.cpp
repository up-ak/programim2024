#include <iostream>
using namespace std;

int main()
{
    const int nrLendeve = 5;

    int notat[nrLendeve] = {9, 8, 8, 8, 10};
    int shuma = 0;

    // prej 0 deri ne nrLendeve-1
    for (int i = 0; i < nrLendeve; i++)
    {
        shuma += notat[i];
    }

    cout << "Mesatarja: " << shuma / (double)nrLendeve << endl;

    return 0;
}