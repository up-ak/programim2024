#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int shuma = 0;

    for (int i = 2; i < (2 * n - 1); i++)
    {
        shuma += 2 * i + 3;
    }

    int S = 2 * shuma;

    cout << "S: " << S << endl;

    return 0;
}