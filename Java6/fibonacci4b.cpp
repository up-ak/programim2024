#include <iostream>
using namespace std;

//  a, b, a+b,
//  0, 1, 1, 2, 3, 5, 8, 13, ...
int main()
{
    int a = 0;
    cout << a << ", ";
    int b = 1;
    cout << b << ", ";

    for (int i = 2; i < 10; i++)
    {
        int temp = b;
        b = a + b;
        a = temp;
        cout << b << ", ";
    }

    return 0;
}