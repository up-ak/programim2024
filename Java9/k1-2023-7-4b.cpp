#include <iostream>
using namespace std;

int main()
{
    int n = 200;
    double max;
    int numratNjeShifror = 0;
    int numratDyShifror = 0;

    for (int i = 0; i < n; i++)
    {
        double nr;
        cin >> nr;

        if (i == 0)
        {
            max = nr;
        }

        if (nr > max)
        {
            max = nr;
        }

        if (nr > -10 && nr < 10)
        {
            numratNjeShifror++;
        }
        else if (nr > -100 && nr < 100)
        {
            numratDyShifror += 1;
        }
    }

    return 0;
}