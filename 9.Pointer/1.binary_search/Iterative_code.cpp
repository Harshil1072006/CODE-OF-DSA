#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
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
    cout << BinarySearch(arr1, 9) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    cout << BinarySearch(arr2, 2) << endl;
    return 0;
}
