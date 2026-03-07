#include <iostream>
#include <vector>
using namespace std;

int Rotated_binary_search(vector<int> a, int tar)
{
    int st = 0, end = a.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (a[mid] == tar)
        {
            return mid;
        }
        if (a[st] <= a[mid]) // left sorted
        {
            if (a[st] <= tar && tar <= a[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else // right sorted
        {
            if (a[mid] <= tar && tar <= a[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {-1, 0, 3, 5, 9, 12};
    cout << Rotated_binary_search(arr1, 9) << endl;

    vector<int> arr2 = {-1, 0, 5, 9, 12};
    cout << Rotated_binary_search(arr2, 2) << endl;

    vector<int> arr3 = {3, 5, 1};
    cout << Rotated_binary_search(arr3, 3) << endl;
    return 0;
}
