#include <iostream>
using namespace std;

int main()
{
    const int n = 6;
    int vargu[n] = {0, 0, 0, 0, 0, 0};
    int shuma = 0; // extra

    for (int i = 0; i < 6; i++)
    {
        int nr;
        cout << "Shkruani elementin [" << i << "]: ";
        cin >> nr;

        if (nr % 2 == 0)
        {
            vargu[i] = nr;
            shuma += nr;
        }
    }

    cout << "Shuma e elementeve te vargut: " << shuma << endl;

    return 0;
}