#include <iostream>
#include <vector>
using namespace std;

void printarr(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortThings(vector<int> arr)
{
    int n = arr.size();
    int low = 0, high = n - 1, mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            mid++, low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    printarr(arr, n);
}

int main()
{
    vector<int> arr1 = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sortThings(arr1);
    return 0;
}
