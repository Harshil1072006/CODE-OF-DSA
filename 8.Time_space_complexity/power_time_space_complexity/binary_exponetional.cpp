#include <iostream>
using namespace std;

double myPow(double x, long n)
{

    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }
    double ans = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            ans *= x;

        x *= x;
        n /= 2;
    }

    return ans;
}

int main()
{
    cout << myPow(2, 40) << endl
         << endl;

    cout << myPow(3, -4) << endl
         << endl;
    cout << myPow(50, 40) << endl
         << endl;
    return 0;
}
