#include <iostream>
using namespace std;

int main()
{
    int grupi;

    cout << "Shkruani grupin: ";

    cin >> grupi;

    grupi = grupi + 1;
    grupi += 1;
    grupi++;

    cout << "Pershendetje ";
    cout << endl; // rresht i ri
    cout << "Grupi ";
    cout << endl; // rresht i ri
    cout << grupi;
    cout << endl; // rresht i ri

    return 0;
}