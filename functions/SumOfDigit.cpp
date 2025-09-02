#include <iostream>
using namespace std;

void SumOfDigit()
{
    int n = 145;
    int original = n;

    int LastDigit, DigitSum = 0;
    while (n > 0)
    {
        LastDigit = n % 10;
        n = n / 10;
        DigitSum += LastDigit;
    }
    cout << "the digital sum of " << original << " is " << DigitSum << ".";
}

int main()
{
    SumOfDigit();

    return 0;
}