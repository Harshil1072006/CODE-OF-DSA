#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int tar, int st, int end)
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar < arr[mid])
        {
            return BinarySearch(arr, tar, st, mid - 1);
        }
        else if (tar > arr[mid])
        {
            return BinarySearch(arr, tar, mid + 1, end);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {-1, 0, 3, 5, 9, 12};
    cout << BinarySearch(arr1, 9, 0, arr1.size() - 1) << endl;

    vector<int> arr2 = {-1, 0, 5, 9, 12};
    cout << BinarySearch(arr2, 2, 0, arr2.size() - 1) << endl;
    return 0;
}
