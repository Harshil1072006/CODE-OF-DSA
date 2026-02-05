#include <iostream>
using namespace std;

int main()
{
    // initialization
    int smallest = __INT_MAX__;

    int marks[5] = {60, 20, 30, 80, -80}; // we can store less than 5 items in this array
    int size = 5;
    int largest = marks[0];
    cout << "Array elements are : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    // for (int i = 0; i < size; i++)
    // {
    //     if (marks[i] < smallest)
    //     {
    //         smallest = marks[i];
    //     }
    // }
    // cout << "minimum element is:" << smallest << endl;

    for (int i = 0; i < size; i++)
    {
        smallest = min(marks[i], smallest);
    }

    cout << "smallest value is :" << smallest << endl;

    for (int i = 0; i < size; i++)
    {
        largest = max(marks[i], largest);
    }

    cout << "largest value is :" << largest << endl;

    cout<< "index of that largest value is : " << 

    return 0;
}