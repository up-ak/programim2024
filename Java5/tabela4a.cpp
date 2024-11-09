#include <iostream>
using namespace std;

// Shkruani nje program qe gjeneron tabelen e shumezimit per nje numer te caktuar.
// Perdorni goto per te llogaritur dhe shfaqur rezultatet nga 1 x n deri ne 10 x n.

int main()
{
    int n;
    cout << "Jepni nje numer: ";
    cin >> n;

    int i = 1;
start:
    cout << i << " x " << n << " = " << i * n << endl;
    i++;

    if (i <= 10)
    {
        goto start;
    }

    return 0;
}