#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // cout << "Pershedetje" << endl
    //      << "Grupi" << endl
    //      << "4b" << endl;

    // cout << "Pershedetje\nGrupi\n4\tb\"\n";
    // cout << "Neni 4\\a";

    cout.width(5);  // 5 karaktere per printimin e rradhes
    cout.fill('.'); // e cakton fill deri sa te ndrrohet perseri me cout.fill(' ')
    cout << "11"
         << endl;
    cout.width(3);
    cout << "22"
         << endl;

    cout.precision(3);                   // vlen deri sa te ndrrohet perseri me cout.precisio
    cout << 3.14159 << endl;             // Outputs "3.14"
    cout << 33.14159 << endl;            // Outputs "33.14"
    cout << fixed << 333.14159 << endl;  // Outputs "333.141"
    cout << fixed << 3333.14159 << endl; // Outputs "3333.141"

    cout << setw(5) << "1" << endl;
    cout << setw(5) << left << "1" << endl;
    cout << setw(5) << right << "1" << endl;

    cout << setfill(' ');
    cout << setw(15) << left << "Emri" << setw(5) << right << "Mosha" << endl;
    cout << setw(15) << left << "Arben" << setw(5) << right << "25" << endl;

    //  Emri...................Mosha
    //  Arben.....................25
    //  Besa.......................1
    //  Dritan...................100
    //  Elona.....................28

    return 0;
}