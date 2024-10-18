#include <iostream>

using namespace std;

int main()
{
    bool eshteKaluarTesti;

    cout << "A keni kaluar testin? (1/0): ";
    cin >> eshteKaluarTesti;

    // if (eshteKaluarTesti)
    // {
    //     cout << "Urime qe keni kaluar testin!" << endl;
    // }

    // if (!eshteKaluarTesti)
    // {
    //     cout << "Fat heren tjeter!" << endl;
    // }

    if (eshteKaluarTesti)
    {
        cout << "Urime qe keni kaluar testin!" << endl;
        cout << "2024" << endl;
        int a = 5 + 2;
    }
    else
    {
        cout << "Fat heren tjeter!" << endl;
    }

    return 0;
}