#include <iostream>
using namespace std;

int linerSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {4, 2, 5, 7, 9, 6, 3};

    cout << linerSearch(arr, 7, 6) << endl;
    return 0;
}