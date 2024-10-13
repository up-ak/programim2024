#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Pershendetje\nGrupi\t4 a\". neni 4\\a\n";

    cout.width(5);
    cout.fill('w'); // fill vlejn vetem deri sa te ndryshohet
    cout << "11" << endl;
    cout.width(5);
    cout << "22" << endl; // width vlejn vetem per nje komand

    cout.precision(3);
    cout << 33.14159 << endl; // 33.1
    cout.precision(4);
    cout << 33.14159 << endl; // 33.14
    cout << 44.14159 << endl; // 44.14 - komanda vlen deri sa te ndrrohet precision prap

    cout << setw(5) << "1" << endl;                 // Outputs "    1"
    cout << setw(5) << setfill('*') << "1" << endl; // Outputs "****1"
    cout << setprecision(3) << 3.14159 << endl;     // Outputs "3.14"

    cout << setfill('.') << setw(20) << left << "Emri" << setw(5)
         << right << "Mosha" << endl;

    cout << setw(20) << left << "Arben" << setw(5)
         << right << 25 << endl;
    cout << setw(20) << left << "Dea" << setw(5)
         << right << 9 << endl;
    cout << setw(20) << left << "Dritan" << setw(5)
         << right << 19 << endl;

    // Emri...................Mosha
    // Arben.....................25
    // Dea........................9
    // Dritan....................19
    // Elona.....................28
    return 0;
}