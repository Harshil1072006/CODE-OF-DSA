#include <iostream>
using namespace std;

double power(double x, int n)
{
    double ans = 1;
    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }

    for (int i = 0; i < n; i++)
    {
        ans *= x;
    }
    return ans;
}

int main()
{

    cout << power(5, 2) << endl;
    cout << power(5, -2) << endl;
    cout << power(10000, 2) << endl;
    return 0;
}
