#include <iostream>
using namespace std;

int main()
{
    // initialization
    int marks[5] = {10, 20, 30, 40, 50}; // array of size 5, initialized with 5 values

    double prize[] = {55, 65, 58}; // the amount of item we'll store in this will be the array size automatically.

    cout << marks[0]; // 0th position in the array.
    cout << marks[1]; // like wise
    cout << marks[2]; // like wise
    marks[2] = {50};
    cout << "after changing the value " << marks[2]; // like wise
    cout << marks[3];                                // like wise
    cout << marks[4];                                // like wise

    return 0;
}