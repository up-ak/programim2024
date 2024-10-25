#include <iostream>
using namespace std;

int main()
{
    int piket;

    cout << "Jepni piket: ";
    cin >> piket;

    if (piket >= 90)
    {
        cout << "Nota: 10" << endl;
    }
    else if (piket >= 80)
    {
        cout << "Nota: 9" << endl;
    }
    else if (piket >= 70)
    {
        cout << "Nota: 8" << endl;
    }
    else if (piket >= 60)
    {
        cout << "Nota: 7" << endl;
    }
    else if (piket >= 50)
    {
        cout << "Nota: 6" << endl;
    }
    else
    {
        cout << "Nota: 5" << endl;
    }

    return 0;
}