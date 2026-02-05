#include <iostream>
#include <cmath>

using namespace std;

int DecToBin(int n)
{
    int power = 0 ,ans = 0;
    while (n > 0)
    {
        int length = floor(log10(n)) + 1; // length will be 5
        int LastDigit = n % 10;
        ans += (LastDigit* pow(2,length));
        power++;
        n = n / 10;
    }
    return ans;
}

int main()
{
    cout<<DecToBin(110);

}