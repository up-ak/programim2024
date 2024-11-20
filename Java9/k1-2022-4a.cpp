#include <iostream>
using namespace std;

int main()
{
    int n;
    double shuma = 0;
    cout << "Vendos n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double nr;
        cout << "Vendos nje numer: ";
        cin >> nr;

        shuma += nr;

        if (shuma > 4.3)
        {
            break;
        }
    }

    cout << "Shuma: " << shuma << endl;

    return 0;
}