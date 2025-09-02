#include <iostream>
using namespace std;

int func(int x, int y)
{
    x += 10;
    y += 5;
    return x + y;
}

int main()
{
    int a = 5;
    int b = 10;

    cout << func(a, b) << endl;
    cout << a << endl;
    cout << b << endl;

    return 0;
}