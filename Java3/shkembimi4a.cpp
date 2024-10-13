#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 5;
    // pjesa lart nuk ndrrohet

    int temp = a;
    a = b;
    b = temp;

    // pjesa posht nuk ndrrohet
    cout << "Variabla a: " << a << endl;
    cout << "Variabla b: " << b << endl;

    return 0;
}