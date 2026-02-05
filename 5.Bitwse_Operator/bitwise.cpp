#include <iostream>
using namespace std;

int main()
{
    
    int a = 4;
    int b = 8;

    cout << "AND of a ,b is : " << (a & b) << endl
         << "OR of a, b is : " << (a | b) << endl
         << "XOR of a,b is : " << (a ^ b) << endl; //same --> 0 // diff --> 1
    return 0;
}