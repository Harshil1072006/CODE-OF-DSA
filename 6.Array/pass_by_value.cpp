// In pass by reference the value will be going through the functions and thatwq will going to access the main contetnt means that function will be having the acceess of the function and if that function has changed the value any change the main value of the variable or array will be changed.

#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }
}

int main()
{
    int arr[] = {1, 2, 3};

    cout << "before changing \n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    changeArr(arr, 3);
    cout << "in main \n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;

    return 0;
}
