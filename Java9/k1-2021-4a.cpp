#include <iostream>
using namespace std;

// Të shkruhet programi i cili deklaron një varg A me gjatësi 7, të inicializuar me
// numra të plotë. Të llogaritet mesatarja e anëtarëve të vargut, duke mos përfshirë anëtarin e
// parë dhe të fundit në varg. Po ashtu të numërohen anëtarët negativ të vargut, duke mos
// futur në kalkulim elementin e mesëm të vargut.

int main()
{
    int A[7] = {1, 2, 3, 4, 5, 6, 7};

    int shuma = 0;

    for (int i = 1; i < 6; i++)
    {
        shuma += A[i];
    }

    double mesatarja = shuma / 5.0;

    int numriNegativ = 0;

    for (int i = 0; i < 7; i++)
    {
        // antari i mesem eshte i= 3
        if (i != 3)
        {
            if (A[i] < 0)
            {
                numriNegativ++;
            }
        }
    }

    return 0;
}