#include <iostream>
using namespace std;

int main()
{
    // initialization
    int marks[5] = {10, 20, 30, 40, 50}; // we can store less than 5 items in this array
    // size
    int size = sizeof(marks);
    cout << "size of marks array is : " << size << endl;            // this will give the bytes of in the memory not the boxes, get it ?
    cout << "Actual size of marks array is : " << size / 4 << endl; // devided by 4 bcz it is having 4 bytes each.
    double prize[] = {55, 65, 58};                                  // the amount of item we'll store in this will be the array size automatically.

    cout << marks[0] << endl; // 0th position in the array.
    cout << marks[1] << endl; // like wise
    cout << marks[2] << endl; // like wise
    marks[2] = {50};
    cout << "after changing the value " << marks[2] << endl; // like wise
    cout << marks[3] << endl;                                // like wise
    cout << marks[4] << endl
         << endl; // like wise

    cout << "MINUS INDEXES: " << endl; // will throw you the garbage values.
    cout << marks[0] << endl;          // 0th position in the array.
    cout << marks[-1] << endl
         << endl; // like wise

    // print array using loop

    for (int i = 0; i < (size /4) ; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}