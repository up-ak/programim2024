#include <iostream>
using namespace std;

struct Drejtkendeshi
{
    double gjeresia;
    double gjatesia;

    double siperfaqja()
    {
        return gjatesia * gjeresia;
    }

    bool eshteKatror()
    {
        return gjatesia == gjeresia;
    }
};

int main()
{
    Drejtkendeshi d;
    d.gjatesia = 12;
    d.gjeresia = 5;

    cout << d.siperfaqja() << endl;

    if (d.eshteKatror())
    {
        cout << "Drejtkendeshi eshte katror" << endl;
    }
    else
    {
        cout << "Drejtkendeshi nuk eshte katror" << endl;
    }

    Drejtkendeshi d2;
    d2.gjatesia = 10;
    d2.gjeresia = 10;

    cout << d2.siperfaqja() << endl;

    return 0;
}