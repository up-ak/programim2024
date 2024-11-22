#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    double shuma = 0;

    for (int i = 0; i < n; i++)
    {
        double nr;
        cout << "Enter a double number: ";
        cin >> nr;

        shuma += nr;

        if (shuma > 4.3)
        {
            break;
        }
    }

    return 0;
}