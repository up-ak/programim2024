#include <iostream>
using namespace std;

int main()
{
    bool eshteKaluarProvimi;

    cout << "A keni kaluar provimin? (1/0): ";
    cin >> eshteKaluarProvimi;

    // if (eshteKaluarProvimi)
    // {
    //     cout << "Urime keni kaluar provimin!" << endl;
    //     int i = 10 - 5;
    //     // sa keni nevoj kod
    // }

    // if (!eshteKaluarProvimi)
    // {
    //     cout << "Fat heren tjeter!" << endl;
    // }

    if (eshteKaluarProvimi)
    {
        cout << "Urime keni kaluar provimin!" << endl;
    }
    else
    {
        cout << "Fat heren tjeter!" << endl;
    }

    return 0;
}