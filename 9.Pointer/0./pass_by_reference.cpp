#include <iostream>
using namespace std;

void changeA(int *ptr) // pass by reference using pointers
{
    *ptr = 20;
}

void changeB(int &b) // pass by reference using alias 
{
    b = 20;
}

int main()
{
    int a = 10;
    changeA(&a);
    cout << "inside the main value of a = " << a << endl;

    int b = 10;
    changeA(&b);
    cout << "inside the main value of b = " << b << endl;
    return 0;
}
