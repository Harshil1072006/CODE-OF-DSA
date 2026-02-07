#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    cout << endl;
    cout << "a = " << a << endl;
    int c = a++; // kaam than update :::::kaam means assign the value to the variable.
    cout << "c = " << c << endl;
    cout << "a++:" << a << endl
         << endl;

    cout << "a = " << a << endl;
    int d = ++a; // update than kaam
    cout << "d = " << d << endl;

    cout << "++a:" << a << endl
         << endl;

    int b = 20;
    cout << "b = " << b << endl;
    int e = b--;
    cout << "e = " << e << endl;
    cout << "b--:" << b << endl
         << endl;

    cout << "b = " << b << endl;
    int f = --b;
    cout << "f = " << f << endl;
    cout << "--b:" << b << endl
         << endl;

    return 0;
}