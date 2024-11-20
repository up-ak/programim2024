#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int numratNjeshifor = 0;

    for (int i = 0; i < 200; i++)
    {
        cout << "Vendos numrin " << i + 1 << ": ";

        int numri;
        cin >> numri;

        if (numri > max || i == 0)
        {
            max = numri;
        }

        if (numri >= -9 && numri <= 9)
        {
            numratNjeshifor++;
        }
    }

    cout << "Numri me i madh eshte: " << max << endl;
    cout << "Numrat njeshifor jane: " << numratNjeshifor << endl;

    return 0;
}
