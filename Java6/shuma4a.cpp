#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    // 0 + 1 + 2 + 3 + ... + n
    // 1 * 2 * 3 * ... * n
    int sum = 0;

    int i = 1;

    while (i <= n)
    {
        sum += i;
        i++;
    }

    cout << "sum = " << sum << endl;

    int prodhimi = 1;
    i = 1;

    while (i <= n)
    {
        prodhimi *= i;
        i++;
    }

    cout << "prodhimi = " << prodhimi << endl;

    cout << "Totali: " << sum + prodhimi << endl;

    return 0;
}