#include <iostream>
using namespace std;

struct Person
{
    string emri;
    string mbiemri;
    int mosha;
    string hobi[5];

    void lexo()
    {
        cout << "Emri: ";
        cin >> emri;

        cout << "Mbiemri: ";
        cin >> mbiemri;

        cout << "Mosha: ";
        cin >> mosha;

        // cin >> hobi[0];
        // cin >> hobi[1];
        // cin >> hobi[2];
    }

    void printo(int nr)
    {
        cout << "-----------" << nr << "-----------" << endl;
        cout << "Emri: " << emri << endl;
        cout << "Mbiemri: " << mbiemri << endl;
        cout << "Mosha: " << mosha << endl;
        cout << "-----------------------" << endl;
    }
};

int main()
{
    // Person personi1;
    // personi1.lexo();
    // personi1.printo();

    const int n = 3;
    Person personat[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Vendos personin: " << i << endl;
        personat[i].lexo();
    }

    for (int i = 0; i < n; i++)
    {
        personat[i].printo();
    }

    return 0;
}