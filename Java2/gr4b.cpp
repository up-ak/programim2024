#include <iostream>
using namespace std;

int main()
{
    int grupi;

    cout << "Cili eshte grupi juaj?";
    cin >> grupi;

    grupi = grupi * 2;
    grupi -= 2;
    grupi++;

    cout << "Pershendetje";
    cout << endl;
    cout << "Grupi ";
    cout << endl;
    cout << grupi;
    cout << endl;

    return 0;
}