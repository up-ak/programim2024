#include <iostream>
using namespace std;

void kombino(int a, int b)
{
    cout << a + b << endl;
}

void kombino(string a, string b)
{
    cout << a << " " << b << endl;
}

int main()
{
    kombino(1, 2);
    kombino("Hello", "World");

    return 0;
}