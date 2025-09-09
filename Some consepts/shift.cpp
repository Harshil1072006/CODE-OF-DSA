#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int b = 1;
    int c = 2;

    cout << "left shift from  a to b is : " << (a << b) << endl //ans = a * 2ᵇ ----> the trick 
         << "right shift from  a to b is : " << (a >> b) << endl //ans = a / 2ᵇ ----> the trick 
         << endl;

    cout << "left shift from  a to c is : " << (a << c) << endl
         << "right shift from  a to c is : " << (a >> c) << endl;
    return 0;
}