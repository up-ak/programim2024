#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Jepni vleren e a: ";
    cin >> a;
    cout << "Jepni vleren e b: ";
    cin >> b;

    if (a > b)
    {
        cout << "a eshte me e madhe se b" << endl;
    }
    else if (a < b)
    {
        cout << "b eshte me e madhe se a" << endl;
    }
    else if (a == b)
    {
        cout << "a eshte e barabarte me b" << endl;
    }
    else
    {
        cout << "Kjo nuk duhet te ndodhe kurre!" << endl;
    }

    return 0;
}