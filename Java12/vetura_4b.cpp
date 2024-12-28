#include <iostream>
using namespace std;

enum Marka
{
    BMW,
    AUDI,
    MERCEDES,
    VW,
};

enum NgjyraVetures
{
    ZEZE,
    BARDHE,
    HIRI,
    KUQE,
};

struct Data
{
    int dita;
    int muaji;
    int viti;
};

struct Vetura
{
    Data ditaEProdhimit;
    Marka marka;
    NgjyraVetures ngjyra;
    int vitetEServisimit[10];
};

int main()
{
    Vetura v1;
    v1.marka = BMW;
    v1.ngjyra = ZEZE;
    v1.ditaEProdhimit.dita = 12;
    v1.ditaEProdhimit.muaji = 12;
    v1.ditaEProdhimit.viti = 2012;

    return 0;
}