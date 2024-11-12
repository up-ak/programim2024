#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int b;

    int numeruesi = 0;
    do
    {
        cout << "Enter b (a<b): ";
        cin >> b;
        numeruesi++;
    } while (b > a);

fillimi:
    cout << "Enter b (a<b): ";
    cin >> b;
    numeruesi++;
    if (b > a)
    {
        goto fillimi;
    }

    bool heraEpare = true;

    while (heraEpare || b > a)
    {
        cout << "Enter b (a<b): ";
        cin >> b;
        numeruesi++;
        heraEpare = false;
    }

    return 0;
}