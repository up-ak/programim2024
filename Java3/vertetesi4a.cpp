#include <iostream>
using namespace std;

int main()
{
    bool jamStudent = 1;
    bool vitiIFundit = 1;

    bool jamMaturant = jamStudent && vitiIFundit;
    bool sjamNeVitinEFundit = !vitiIFundit;
    cout << "A jam maturant? " << jamMaturant << endl;

    bool bjenShi = false;

    bool kaPiknik = !bjenShi;

    int a = 5;
    int b = 10;

    bool krahasimi = a <= b;

    cout << "Krahso a dhe b: " << (a == b) << endl;
    cout << "Krahso a dhe b: " << krahasimi << endl;

    return 0;
}