#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) // O(n^2)
{
    for (int i = 0; i < n - 1; i++)
    {
        int SI = i; // smallest index
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[SI])
            {
                SI = j;
            }
        }
        swap(arr[i], arr[SI]);
    }
}

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;
    // bubble_sort(arr, n);
    selection_sort(arr, n);
    printarr(arr, n);
    return 0;
}
