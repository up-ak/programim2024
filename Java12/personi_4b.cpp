#include <iostream>
using namespace std;

struct Person
{
    string emri;
    string mbiemri;
    int mosha;

    void lexo()
    {
        cout << "Vendos emrin: ";
        cin >> emri;
        cout << "Vendos mbiemrin: ";
        cin >> mbiemri;
        cout << "Vendos moshen: ";
        cin >> mosha;
    }

    void printo()
    {
        cout << "--- Personi ---" << endl;
        cout << "Emri: " << emri << endl;
        cout << "Mbiemri: " << mbiemri << endl;
        cout << "Mosha: " << mosha << endl;
        cout << "----------------" << endl;
    }
};

int main()
{
    const int n = 2;
    Person personat[n];

    for (int i = 0; i < n; i++)
    {
        personat[i].lexo();
    }

    for (int i = 0; i < n; i++)
    {
        personat[i].printo();
    }

    return 0;
}