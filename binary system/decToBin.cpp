#include <iostream>
using namespace std;

int decToBinary(int DecNum)
{
    int pow = 1, ans = 0;

    while (DecNum > 0)
    {
        int rem = DecNum % 2;
        DecNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }//this pow stuff done bcz of the reverse printing after getting the devision.
    return ans;
}

int main()
{
    cout << "The Binary value will be: " << decToBinary(6);
    return 0;
}