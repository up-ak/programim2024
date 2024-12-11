#include <iostream>
using namespace std;

int totalNxenesve = 0;

int katori(int a, int b)
{
    return a * b;
}

double shuma(double a, double b)
{
    double c = a + b;
    cout << "U llogarit shuma" << endl;

    return c;
}

void printoProdhimin(int a, int b); // deklarimi i funksionit

bool eshteCift(int a)
{
    bool cift = a % 2 == 0;

    return cift;
}

bool eshteTek(int a)
{
    return !eshteCift(a);
}

double llogaritMesataren(int vargu[], int gjatsia)
{
    // int gjatsia = sizeof(vargu) / sizeof(vargu[0]);
    int shuma = 0;

    for (int i = 0; i < gjatsia; i++)
    {
        shuma += vargu[i];
    }

    return shuma / gjatsia;
}

int main()
{
    cout << shuma(5, 100) << endl;

    double s = shuma(13.5, 2);

    printoProdhimin(5, 10);

    cout << s << endl;

    cout << eshteTek(12312) << endl;

    int v[4] = {4, 5, 6, 3};

    double mesatarja = llogaritMesataren(v, 4);

    cout << mesatarja << endl;

    return 0;
}

void printoProdhimin(int a, int b) // implementimi i funksionit
{
    cout << a * b;
}