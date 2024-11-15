#include <iostream>
using namespace std;

int main()
{
    double notat[10] = {9.3, 87, 7.5, 9.8, 6.4, 8.9, 7.2, 8.1, 9.0, 8.5};

    double max = notat[0];
    double min = notat[0];

    for (int i = 1; i < 10; i++)
    {
        if (notat[i] < 5 || notat[i] > 10)
        {
            cout << "Nota gabim" << endl;
            continue;
        }

        if (notat[i] > max)
        {
            max = notat[i];
        }

        if (notat[i] < min)
        {
            min = notat[i];
        }
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}