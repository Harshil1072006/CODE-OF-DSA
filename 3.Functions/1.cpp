#include <iostream>
using namespace std;

int printHello()
{
    cout << "hello world";
    cout << endl;
    return 5;
}

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int sumN(int n)
{
    int sumn = 0;
    for (int i = 1; i <= n; i++)
    {
        sumn += i;
    }
    return sumn;
}

int main()
{

    int val = printHello();
    cout << "val :" << val << endl;
    // OR

    cout << printHello();
    cout << endl;
    cout << "sum = " << sum(10, 4) << endl;

    cout << "sum of 5 is " << sumN(5) << endl;
    return 0;
}