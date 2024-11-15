#include <iostream>
using namespace std;

int main()
{
    double notat[5] = {8.1, 6.4, 7.2, 8.4, 9.8};
    int max = notat[0];
    int min = notat[0];

    for (int i = 1; i < 5; i++)
    {
        if (notat[i] > max)
        {
            max = notat[i];
        }

        if (notat[i] < min)
        {
            min = notat[i];
        }
    }

    cout << "Nota me e madhe eshte: " << max << endl;
    cout << "Nota me e vogel eshte: " << min << endl;

    return 0;
}