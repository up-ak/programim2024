#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int shuma = 0;

    for (int i = b; i >= a; i--)
    {
        shuma += i;
    }
    // 1. i = b
    // 2. krahason i me a
    // 3. shuma += i
    // 4. i--
    // 5. kthehu ne 2

    cout << "Shuma: " << shuma << endl;

    return 0;
}