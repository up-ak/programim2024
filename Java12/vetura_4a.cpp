#include <iostream>
using namespace std;

enum Marka
{
    BMW,
    AUDI,
    MERCEDES,
    VOLKSWAGEN
};

enum NgjyraVetures
{
    ZEZE,
    BARDHE,
    HIRI,
    KUQE
};

struct Vetura
{
    Marka marka;
    NgjyraVetures ngjyra;
    int viti;
};

int main()
{
    Vetura v = {
        BMW,
        ZEZE,
        2019};

    Vetura v1;
    v1.marka = AUDI;
    v1.ngjyra = ZEZE;
    v1.viti = 2023;
}