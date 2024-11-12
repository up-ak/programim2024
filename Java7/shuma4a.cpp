#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // 1 + 2 + 3 + ... + n

    int shuma = 0;

    int i = 1;

    do
    {
        shuma += i;
        i++;

        if (i % 3 == 0)
        {
            shuma -= 5;
        }
    } while (i <= n);

    cout << "Shuma: " << shuma << endl;

    return 0;
}