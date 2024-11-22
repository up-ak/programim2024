#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char shkronja = 'A';
    cout.width(6);
    cout.fill('-');
    cout << left << shkronja << endl;
    cout << setw(6) << shkronja << shkronja << endl;

    return 0;
}