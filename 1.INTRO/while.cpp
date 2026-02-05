#include <iostream>
using namespace std;
int main()
{
    int n= 10, sum = 0;
    while (n>0)
    {
        sum += n;
        n--;
    }
    cout<< "the sum is :" << sum;
    return 0;
}
