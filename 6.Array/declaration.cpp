#include <iostream>
using namespace std;

int main()
{

    cout << "===== ARRAY DECLARATIONS =====" << endl;

    // 1. Normal fixed-size array
    int arr1[5];
    cout << "arr1 created (uninitialized)" << endl;

    // 2. Array with initialization
    int arr2[5] = {1, 2, 3, 4, 5};
    cout << "arr2: ";
    for (int i = 0; i < 5; i++)
        cout << arr2[i] << " ";
    cout << endl;

    // 3. Array without specifying size
    int arr3[] = {10, 20, 30};
    cout << "arr3: ";
    for (int i = 0; i < 3; i++)
        cout << arr3[i] << " ";
    cout << endl;

    // 4. Partial initialization
    int arr4[5] = {7, 8};
    cout << "arr4: ";
    for (int i = 0; i < 5; i++)
        cout << arr4[i] << " ";
    cout << endl;

    // 5. Character array
    char name[] = "Harshil";
    cout << "name: " << name << endl;

    // 6. 2D array
    int arr2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    cout << "2D array:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << arr2D[i][j] << " ";
        cout << endl;
    }

    // 7. Dynamic array (heap)
    int *arrDyn = new int[3]{100, 200, 300};
    cout << "Dynamic array: ";
    for (int i = 0; i < 3; i++)
        cout << arrDyn[i] << " ";
    cout << endl;
    delete[] arrDyn; // VERY IMPORTANT

    return 0;
}