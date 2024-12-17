#include <iostream>
using namespace std;

void kombino(int a, int b, int c)
{
    cout << a + b + c;
}

void kombino(string a, string b)
{
    cout << a << " " << b;
}

int main()
{
    kombino(1, 2);

    return 0;
}