#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    int b = 1000;
    // Option A
    // do
    // {
    //     cout << "Vendosni b (<=a): ";
    //     cin >> b;
    //    numeruesi++;
    // } while (b > a);

    int numeruesi = 0;

    while (b > a)
    {
        cout << "Vendosni b (<=a): ";
        cin >> b;
        numeruesi++;
    }

    //  GOTO
    // perserit:
    //     cout << "Vendosni b (<=a): ";
    //     cin >> b;
    //    numeruesi++;=

    //     if (b > a)
    //     {
    //         goto perserit;
    //     }

    cout << "Numeruesi: " << numeruesi << endl;

    return 0;
}