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

    while (i <= 10)
    {
        cout << i << " x " << n << " = " << i * n << endl;
        i++;
    }

    cout << "DO WHILE" << endl;

    i = 1;

    do
    {
        cout << i << " x " << n << " = " << i * n << endl;
        i++;
    } while (i <= 10);

    cout << "FOR" << endl;

    for (i = 1; i <= 10; i++)
    {
        cout << i << " x " << n << " = " << i * n << endl;
    }

    // 1. incializimi: i = 1
    // 2. kushti
    // 3. blloku
    // 4. incrementimi
    // 5. kthimi ne 2

    return 0;
}