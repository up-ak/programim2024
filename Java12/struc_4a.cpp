#include <iostream>
using namespace std;

struct Pika
{
    double x;
    double y;

    void printo()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Pika p = {3, 4.0};
    p.x = 3;
    p.y = 4.0;
    p.printo(); // Printon: (3, 4)

    return 0;
}