#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n = 8;
    int r = 2;
    int a, b, c;
    // first term:
    a = fact(n);

    // second term:
    b = fact(r);

    // 3rd term:
    c = fact(n - r);

    // answer

    cout << "the bionomial factorial having n = " << n << "and r = " << r << " is:" << (a) / (b * c) << endl;
    return 0;
}