#include <iostream>
using namespace std;

int nrThirrjeve = 0;

int katrori(int a)
{ // DRY - Don't Repeat Yourself
    int k = a * a;
    cout << "U llogarit katrori i " << a << endl;

    return k;
}
void printoShumen(int asdasdqweqeqweqw, int b)
{
    cout << "Shuma e " << asdasdqweqeqweqw << " dhe " << b << " eshte " << asdasdqweqeqweqw + b << endl;
}

bool eshteCift(int a)
{
    return a % 2 == 0;
}

bool eshteTek(int k)
{
    return !eshteCift(k);
}

// funksioni qe gjen mesatren e antarve te vargut

double mesatarjaEVektorit(int vec[], int gjatesia)
{
    nrThirrjeve++;

    int shuma = 0;

    for (int i = 0; i < gjatesia; i++)
    {
        shuma += vec[i];
    }

    return shuma / (double)gjatesia;
}

int main()
{
    int x = 100;
    int k = katrori(5);
    k = katrori(x);

    // thirr funksionin eshteCift

    bool cift = eshteCift(5);
    eshteTek(6);

    cout
        << "Katrori  eshte: " << k << endl;

    printoShumen(1221, 213);
    printoShumen(234, 3324);
    printoShumen(1221, 213);

    int vektori[6] = {1, 2, 3, 4, 5, 6};

    cout << "Mesatarja:" << mesatarjaEVektorit(vektori, 6) << endl;

    int vektori2[3] = {1, 2, 3};

    cout << "Mesatarja:" << mesatarjaEVektorit(vektori2, 3) << endl;

    return 0;
}