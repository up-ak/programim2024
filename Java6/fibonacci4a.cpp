#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1;
    // Gjenero serinë: 0, 1, 1, 2, 3, 5, 8, 13, ...

    // a = 0, b = 1
    // a = 1, b = 2
    // a = 2, b = 3
    // a = b, b = a + b

    int n;
    cout << "Shkruaj numrin e elementeve: ";
    cin >> n;

    cout << a << ", " << b << ", ";

    for (int i = 2; i < n; i++)
    {
        int temp = b;
        b = a + b;
        a = temp;
        cout << b << ", ";
    }

    return 0;
}